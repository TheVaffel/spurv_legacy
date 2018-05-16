#include <spurv.h>
#include <y.tab.hpp>

#include <vector>
#include <map>
#include <cstdlib> // std::pair
#include <string> // std::string
#include <stdexcept> // std::out_of_range


extern FILE* yyin;

value_t* get_new_value(){
  value_t* value = (value_t*)malloc(sizeof(value_t));
  value->next = NULL;
  return value;
}

void print_value_chain(value_t* value){
  if(value){
    print_value_chain(value->next);
    if(value->type == VALUE_TYPE_STRING){
      printf("%s ", value->string);
    }else if(value->type == VALUE_TYPE_NUMBER){
      printf("%ld ", value->number);
    }else if(value->type == VALUE_TYPE_IDENTIFIER){
      printf("%s ", value->string);
    }else if(value->type == VALUE_TYPE_OPCODE){
      printf("%ld ", value->number);
    }else{
      printf("<Value printout of this element not implemented> ");
    }
  }
}

std::vector<value_t*> opcodes;

void add_opcode(value_t* opcode){
  if(opcode->type != VALUE_TYPE_OPCODE){
    printf("Tried to add non-opcode to opcode list\n");
    exit(-1);
  }
  opcodes.push_back(opcode);
}

std::map<std::string, uint32_t> identifiers;


static uint32_t identifier_num = 1;
// Note: Will not register if already registered, making identifier handling somewhat easier
void register_identifier(const char* string){
  // Will not reinsert existing keys
  identifiers.insert(std::pair<std::string, uint32_t>(std::string(string), identifier_num++)); 
}

std::vector<uint32_t>* binary;

void add_int(uint32_t integer){
  binary->push_back(integer);
}

void add_string(const char* string){
  int len = strlen(string) + 1; // Include NULL-character
  int num_ints = (len + 3)/4; // Four characters in a word
  
  
  for(int i = 0; i < num_ints - 1; i++){
    add_int(*((uint32_t*)(string + 4 * i)));
  }

  int bytes_left = len - 4 * (num_ints - 1);
  char last_int[4];
  for(int i = 0; i < bytes_left; i++){
    last_int[i] = string[(num_ints - 1) * 4 + i];
  }

  for(int i = bytes_left; i < 4; i++){ // Make sure last integer is padded with zeros
    last_int[i] = 0;
  }

  add_int(*((uint32_t*)(last_int)));
}

uint32_t* get_binary(){
  return binary->data();
}

uint32_t get_binary_size(){
  return binary->size();
}

void output_binary(value_t* val, int* size){
  if(val){
    output_binary(val->next, size);

    if(val->type == VALUE_TYPE_STRING){
      
      *size += (strlen(val->string) + 1 + 3)/4; // Ensure 0-character is counted
      add_string(val->string);
      
    }else if(val->type == VALUE_TYPE_NUMBER){
      
      *size += 1;
      add_int((uint32_t)val->number);
      
    }else if(val->type == VALUE_TYPE_IDENTIFIER){
      
      *size += 1;
      std::string str = std::string(val->string);
      try{
	uint32_t rs = identifiers.at(str);
      }catch(std::out_of_range){
	exit(-1);
      }
      add_int(identifiers[str]);
      
    }else if(val->type == VALUE_TYPE_OPCODE){
      // Handle this separately, as this will be on the start of the chain and
      // everything else is backwards
    }
  }
}

void parse_spurv_file(const char* file_name, std::vector<uint32_t>& spirv){
  yyin = fopen(file_name, "r");
  
  yyparse();

  fclose(yyin);
  
  binary = &spirv;

  add_int(0x07230203); // Magic Number
  add_int(0x00010000); // Version Number (1.0)
  add_int(0x123); // Generator's Magic Number. The one used is not officially registered
  add_int(identifier_num); // Max ID bound, this is at least a minimum
  add_int(0x0); // Reserved for instruction schema
  
  for(int i = 0; i < opcodes.size(); i++){
    int base = binary->size();
    add_int(opcodes[i]->number); // We add size when all sizes are known
    int size = 1;
    int *p_size = &size;
    output_binary(opcodes[i], p_size);
    
    (*binary)[base] |= size << 16;
  }
}
