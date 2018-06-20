#include <spurv_compiler.h>
#include <implicit_ids.hpp>
#include <uniforms.hpp>
#include <y.tab.hpp>

#include <vector>
#include <map>
#include <set>
#include <cstdlib> // std::pair
#include <string> // std::string
#include <stdexcept> // std::out_of_range

extern FILE* yyin;


// Used to locate identifiers to define implicitly (supporting e.g. void, float etc..)
std::set<std::string> to_be_defined_identifiers;
std::set<std::string> defined_identifiers;

std::map<std::string, uint32_t> identifiers;
std::vector<std::pair<std::string, std::string> > input_identifiers;
std::vector<std::pair<std::string, std::string> > output_identifiers;
std::vector<uniform_declaration_t> uniform_declarations;

value_t* get_new_value(){
  
  value_t* value = (value_t*)malloc(sizeof(value_t));
  value->next = NULL;
  return value;
}

value_t* construct_value_string(char* str, value_t* next){
value_t* v = get_new_value();
  v->string = str;
  v->type = VALUE_TYPE_STRING;
  v->next = next;
  return v;
}

value_t* construct_value_number(int num, value_t* next){
  value_t* v = get_new_value();
  v->number = num;
  v->type = VALUE_TYPE_NUMBER;
  v->next = next;
  return v;
}

value_t* construct_value_opcode(int code, int operation_num, value_t* arg_list){
  value_t* v = get_new_value();
  v->number = code;
  v->type = VALUE_TYPE_OPCODE;
  v->next = arg_list;
  v->operation_number = operation_num;
  return v;
}

value_t* construct_value_identifier(char* str, value_t* next){
  value_t* v = get_new_value();
  v->string = str;
  v->type = VALUE_TYPE_IDENTIFIER;
  v->next = next;
  return v;
}

int get_value_in_chain(value_t** val, int i, value_t* curr){
  if(!curr){
    return 0;
  }

  int res = get_value_in_chain(val, i, curr->next);
  if(res == i){
    *val = curr;
  }
  return res + 1;
}

// To insert an operand somewhere in the operand chain
// The parent value should be the value_t* for the instruction at the upper-most call

// NB! List is backwards!
int put_into_chain(int put_i, value_t* put_val, value_t* parent){
  if(!parent){ // We have reached the first element
    return 0;
  }

  int res = put_into_chain(put_i, put_val, parent->next);
  if(res == put_i){
    put_val->next = parent->next;
    parent->next  = put_val;
  }

  return res + 1;
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

void add_identifier_definition(const char* str){
  defined_identifiers.insert(std::string(str));
}

bool is_identifier_defined(const char* str){
  return defined_identifiers.find(str) != defined_identifiers.end();
}

void add_future_identifier_definition(const char* str){
  to_be_defined_identifiers.insert(str);
}

bool is_identifier_to_be_defined(const char* str){
  return to_be_defined_identifiers.find(str) != to_be_defined_identifiers.end();
}

static uint32_t identifier_num = 1;
// Note: Will not register if already registered, making identifier handling somewhat easier
void register_identifier(const char* string){
  identifiers.insert(std::pair<std::string, uint32_t>(std::string(string), identifier_num++));
#ifdef DEBUG
  printf("Registered %s with key %d\n", string, identifiers[string]);
#endif
}

unsigned int get_identifier_number(const char* string){
  if(identifiers.find(string) == identifiers.end()){
    register_identifier(string);
  }
  return identifiers[string];
}

bool is_identifier_referenced(const char* str){
  return identifiers.find(str) != identifiers.end();
}

void register_header_entry(value_t* val){
  std::string s;
  if(0 == strcmp(val->string, "#out")) {
    s = std::string("p_") + val->next->string + std::string("_output");
    output_identifiers.push_back(std::make_pair(s, val->next->next->string));
  }else if(0 == strcmp(val->string, "#in")) { 
    s = std::string("p_") + val->next->string + std::string("_input");
    input_identifiers.push_back(std::make_pair(s, val->next->next->string));
  }else if(0 == strcmp(val->string, "#uniform")) {
    value_t* curr = val->next;
    uniform_declaration_t decl;
    decl.set = curr->number;

    curr = curr->next;
    decl.binding = curr->number;

    curr = curr->next;
    decl.type = curr->string;

    curr = curr->next;
    decl.name = curr->string;
    s = decl.name;

    uniform_declarations.push_back(decl);
  }
  
  register_identifier(s.c_str());

  destroy_value_tree(val);
}


int get_string_word_length(const char* string){
  return (strlen(string) + 4) / 4;
}


static int header_is_defined = 0;
static value_t* header_value;
void register_header_definition(value_t* val){
  header_is_defined = 1;
  header_value = val;
}


std::vector<uint32_t>* binary;

void add_int_to_binary(uint32_t integer){
  binary->push_back(integer);
}

void add_ints_to_binary(std::initializer_list<uint32_t> l){
  for(int i = 0; i < l.size(); i++){
    add_int_to_binary(*(std::begin(l) + i));
  }
}

void add_string(const char* string){
  int len = strlen(string) + 1; // Include NULL-character
  int num_ints = (len + 3)/4; // Four characters in a word
  
  
  for(int i = 0; i < num_ints - 1; i++){
    add_int_to_binary(*((uint32_t*)(string + 4 * i)));
  }

  int bytes_left = len - 4 * (num_ints - 1);
  char last_int[4];
  for(int i = 0; i < bytes_left; i++){
    last_int[i] = string[(num_ints - 1) * 4 + i];
  }

  for(int i = bytes_left; i < 4; i++){ // Make sure last integer is padded with zeros
    last_int[i] = 0;
  }

  add_int_to_binary(*((uint32_t*)(last_int)));
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
      add_int_to_binary((uint32_t)val->number);
      
    }else if(val->type == VALUE_TYPE_IDENTIFIER){
      *size += 1;
      add_int_to_binary(identifiers[val->string]);
      
    }else if(val->type == VALUE_TYPE_OPCODE){
      // Handle this separately, as this will be on the start of the chain and
      // everything else is backwards
    }else if(val->type == VALUE_TYPE_IDENTIFIER_DEFINITION){
      *size += 1;
      add_identifier_definition(val->string);
      add_int_to_binary(identifiers[val->string]);
    }
  }
}

void add_header_to_binary(value_t* header){

  int is_fragment_shader = 0 == strcmp(header->string, "FRAGMENT_SHADER");
  int is_vertex_shader = 0 == strcmp(header->string, "VERTEX_SHADER");

  
  if(is_fragment_shader || is_vertex_shader){
    
    // capability Shader
    add_int_to_binary((2 << 16) | 17);
    add_int_to_binary(1);

    // _GLSL = ext_inst_import "GLSL.std.450"
    const char* imp = "GLSL.std.450";
    int length = get_string_word_length(imp);
    add_int_to_binary(((2 + length) << 16) | 11);

    std::string import_id_name = "_GLSL";
    register_identifier(import_id_name.c_str());
    add_identifier_definition(import_id_name.c_str());

    add_int_to_binary(identifiers[import_id_name]);
    
    add_string(imp);

    // memory_model Logical GLSL450
    add_int_to_binary((3 << 16) | 14);
    add_int_to_binary(0);
    add_int_to_binary(1);

    // entry_point <shader type>  main "main" <input/output variables> (yes, these must be included here)
    int size_index = binary->size();
    add_int_to_binary(15); // We add the size in the end
    int size = 3 + get_string_word_length("main");

    if(is_fragment_shader){
      add_int_to_binary(4); // Fragment

      register_identifier("_FragCoord");
    } else if(is_vertex_shader){
      add_int_to_binary(0); // Vertex
      
      register_identifier("_Position");
      register_identifier("_PointSize");
      register_identifier("_ClipDistance");
      register_identifier("_CullDistance");
    } else {
      printf("Entry point shader type not defined for header %s\n", header->string);
      exit(-1);
    }
    
    std::string entry_name = "main";
    register_identifier(entry_name.c_str());
    add_identifier_definition(entry_name.c_str());
    add_int_to_binary(identifiers[entry_name]);
    add_string("main");
    
    for(int i = 0; i < input_identifiers.size(); i++){
      add_int_to_binary(identifiers[input_identifiers[i].second]);
      size++;
    }
    for(int i = 0; i < output_identifiers.size(); i++){
      add_int_to_binary(identifiers[output_identifiers[i].second]);
      size++;
    }

    if(is_fragment_shader){
      add_int_to_binary(get_identifier_number("_FragCoord"));
      size++;
    } else if(is_vertex_shader){
      add_int_to_binary(get_identifier_number("_Position"));
      size++;

      add_int_to_binary(get_identifier_number("_PointSize"));
      size++;

      add_int_to_binary(get_identifier_number("_ClipDistance"));
      size++;

      add_int_to_binary(get_identifier_number("_CullDistance"));
      size++;
    } else {
      printf("Interface list not defined for header %s\n", header->string);
      exit(-1);
    }
    
    (*binary)[size_index] |= size << 16;

    if(is_fragment_shader){
      // execution_mode main OriginUpperLeft
      add_int_to_binary((3 << 16) | 16);
      add_int_to_binary(identifiers[entry_name]);
      add_int_to_binary(7);

      // decorate _FragCoord BuiltIn FragCoord
      add_int_to_binary((4 << 16) | 71);
      add_int_to_binary(identifiers["_FragCoord"]);
      add_int_to_binary(11);
      add_int_to_binary(15);
      
    }else if(is_vertex_shader){

      // decorate _Position Builtin Position
      add_ints_to_binary({(4 << 16) | 71, identifiers["_Position"], 11, 0});

      // decorate _PointSize BuiltIn PointSize
      add_ints_to_binary({(4 << 16) | 71, identifiers["_PointSize"], 11, 1});
      
      // decorate _ClipDistance BuiltIn ClipDistance
      add_ints_to_binary({(4 << 16) | 71, identifiers["_ClipDistance"], 11, 3});
      
      // decorate _CullDistance BuiltIn CullDistance
      add_ints_to_binary({(4 << 16) | 71, identifiers["_CullDistance"], 11, 4});
    }

    // decorate <attribute> Location <index>
    std::vector<std::pair<std::string, std::string> >* iovs[2] = {&input_identifiers, &output_identifiers};
    for(int j = 0; j < 2; j++){
      for(int i = 0; i < iovs[j]->size(); i++){
	add_int_to_binary((4 << 16) | 71);
	add_int_to_binary(identifiers[(*iovs[j])[i].second]);
	add_int_to_binary(30);
	add_int_to_binary(i);
      }
    }

    // Appropriately decorate uniforms (and ensure dependencies are declared)
    for(int i = 0; i < uniform_declarations.size(); i++){
      register_identifier((std::string("$") + uniform_declarations[i].type).c_str());
      register_identifier((std::string("p_$") + uniform_declarations[i].type + "_uniform").c_str());
      register_identifier((std::string("p_") + uniform_declarations[i].type + "_uniform").c_str());
      register_identifier("i0"); // For access chain (we assume only one member per descriptor)
      output_decorate_uniform(uniform_declarations[i]);
    }
  }else{
    fprintf(stderr, "Support for header class %s not yet implemented\n", header->string);
    exit(-1);
  }
}

void declare_necessary_implicit_ids()
{
  implicit_ids_init();
  
  std::map<std::string, unsigned int>::iterator map_it = identifiers.begin();

  for(; map_it != identifiers.end(); map_it++){
    if(!is_identifier_to_be_defined((*map_it).first.c_str()) &&
       !is_identifier_defined((*map_it).first.c_str())){

      if(!output_if_implicit((*map_it).first)){
	printf("Identifier %s was not defined, and is not an implicit type\n", (*map_it).first.c_str());
      }
      
    }
  }
}

void destroy_value_tree(value_t* v){
  if(v){
    destroy_value_tree(v->next);
    if(v->type == VALUE_TYPE_STRING ||
       v->type == VALUE_TYPE_IDENTIFIER ||
       v->type == VALUE_TYPE_IDENTIFIER_DEFINITION){
      free(v->string);
    }
    free(v);
  }
}

static int should_reset = 0;

void reset_parser(){
  should_reset = 0;
  
  for(int i = 0; i < opcodes.size(); i++){
    destroy_value_tree(opcodes[i]);
  }
  opcodes.clear();

  defined_identifiers.clear();
  identifiers.clear();
  to_be_defined_identifiers.clear();

  if(header_is_defined){
    destroy_value_tree(header_value);
    header_is_defined = 0;
  }

  input_identifiers.clear();
  output_identifiers.clear();
  uniform_declarations.clear();

  identifier_num = 1;

  yylineno = 0; // A bit ugly, but if it works, it works..
}

void declare_io_variables(){
  // variable <type> <identifier> Input
  for(int i = 0; i < input_identifiers.size(); i++){
    add_int_to_binary((4 << 16) | 59);
    add_int_to_binary(identifiers[input_identifiers[i].first]);
    add_int_to_binary(identifiers[input_identifiers[i].second]);
    add_int_to_binary(1);
  }

  // variable <type> <identifier> Output
  for(int i = 0; i < output_identifiers.size(); i++){
    add_int_to_binary((4 << 16) | 59);
    add_int_to_binary(identifiers[output_identifiers[i].first]);
    add_int_to_binary(identifiers[output_identifiers[i].second]);
    add_int_to_binary(3);
  }

  for(int i = 0; i < uniform_declarations.size(); i++){
    std::string var_type = std::string("p_$") + uniform_declarations[i].type + "_uniform";
    std::string final_type = std::string("p_") + uniform_declarations[i].type + "_uniform";
    
    // variable <type> <name> Uniform
    add_ints_to_binary({(4 << 16) | 59, get_identifier_number(var_type.c_str()),
	  get_identifier_number((uniform_declarations[i].name).c_str()),
	  2});

  }
}


namespace spurv{

  void parse_spurv_file(const char* file_name, std::vector<uint32_t>& spirv){

    if(should_reset){
      reset_parser();
    }
    should_reset = 1;
    
    yyin = fopen(file_name, "r");
    if(yyin == NULL){
      printf("Could not find file %s\n", file_name);
      exit(-1);
    }
  
    yyparse();

    fclose(yyin);
  
    binary = &spirv;

    add_int_to_binary(0x07230203); // Magic Number
    add_int_to_binary(0x00010000); // Version Number (1.0)
    add_int_to_binary(0x123); // Generator's Magic Number. The one used is not officially registered
    int bound_index = binary->size();
    add_int_to_binary(0); // Max ID bound, we will set this in the end, when implicit types are defined
    add_int_to_binary(0x0); // Reserved for instruction schema

    int declare = 0;

    if(header_is_defined){
      add_header_to_binary(header_value);
      declare_necessary_implicit_ids();
      declare_io_variables();
    }
  
    for(int i = 0; i < opcodes.size(); i++){
      if(!header_is_defined && opcodes[i]->number == 71){ // Decorates, after these are set, we can declare types
	declare = 1;
      }else if(declare){
	declare_necessary_implicit_ids();
	declare = 0;
      }

      int base = binary->size();
      add_int_to_binary(opcodes[i]->number); // We add size when all sizes are known
      int size = 1;
      int *p_size = &size;
      output_binary(opcodes[i], p_size);

      // Include size
      (*binary)[base] |= size << 16;
    }

    (*binary)[bound_index] = identifier_num;

#ifdef DEBUG
    for(int i = 0; i < binary->size(); i++){
      if((*binary)[i] >= 1 << 16){
	printf("%d | %d\n", (*binary)[i] >> 16, (*binary)[i] & ((1 << 16) - 1));
      }else{
	printf("%d\n", (*binary)[i]);
      }
    }
#endif // DEBUG
  }


  void clear_spurv(){
    reset_parser();
    clear_implicit_id_table();
  }
};
