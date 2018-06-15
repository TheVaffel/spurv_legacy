#include <implicit_ids.hpp>
#include <spurv_compiler.h>

#include <set>

std::map<std::string, id_definition_data> implicit_ids;
std::set<std::string> constants;
std::map<std::string, id_definition_data> array_definitions;

const int num_pointer_versions = 13;
const std::string pointer_dirs[num_pointer_versions] = {"uniform_constant", "input", "uniform", "output", "workgroup",
						  "cross_workgroup", "private", "function", "generic", "push_constant",
						  "atomic_counter", "image", "storage_buffer"};

static int initialized = 0;

void implicit_ids_init(){
  
  initialized = 1;
  
  std::pair<std::string, id_definition_data> data_types[] = {
    {"void", {E_TYPE, 19, NULL, 0}},
    {"bool", {E_TYPE, 20, NULL, 0}},
    {"int", {E_TYPE, 21, NULL, 2, {32, 1}}},
    {"int32", {E_TYPE, 21, NULL, 2, {32, 1}}},
    {"int64", {E_TYPE, 21, NULL, 2, {64, 1}}},
    {"uint32", {E_TYPE, 21, NULL, 2, {32, 0}}},
    {"uint64", {E_TYPE, 21, NULL, 2, {64, 0}}},
    // {"float", {22, NULL, 1, {32}}}, // This one really messes up when used with float32 (not allowed)
    {"float32", {E_TYPE, 22, NULL, 1, {32}}},
    {"float64", {E_TYPE, 22, NULL, 1, {64}}},
    // -1 in argument shall be substituted by dependency identifier
    // We use strdup to make these homogenous with the pointer versions added later
    {"vec2", {E_TYPE, 23, strdup("float32"), 2, {-1, 2}}},
    {"vec3", {E_TYPE, 23, strdup("float32"), 2, {-1, 3}}},
    {"vec4", {E_TYPE, 23, strdup("float32"), 2, {-1, 4}}},
  };

  std::pair<std::string, id_definition_data> function_types[] = {
    {"f_void", {E_TYPE, 33, strdup("void"), 1, {-1}}}
  };

  std::pair<std::string, id_definition_data> builtin_vars[] = {
    {"_FragCoord", {E_VAR, 59, strdup("p_vec4_input"), 3, {-1, -2, 1}}},
    {"_Position", {E_VAR, 59, strdup("p_vec4_output"), 3, {-1, -2, 3}}},
    {"_PointSize", {E_VAR, 59, strdup("p_float32_output"), 3, {-1, -2, 3}}},
    {"_CullDistance", {E_VAR, 59, strdup("p_float32_output"), 3, {-1, -2, 3}}},
    {"_ClipDistance", {E_VAR, 59, strdup("p_float32_output"), 3, {-1, -2, 3}}},
  };
  
  
  for(std::pair<std::string, id_definition_data>& p : data_types){
    implicit_ids.insert(p);
    for(int i = 0; i < num_pointer_versions; i++){
      std::string pointer_name = std::string("p_") + p.first + std::string("_") + pointer_dirs[i];
      implicit_ids.insert({pointer_name, {E_TYPE, 32, strdup(p.first.c_str()), 2, {i, -1}}});
    }
  }


  for(std::pair<std::string, id_definition_data> p: function_types){
    implicit_ids.insert(p);
  }

  for(std::pair<std::string, id_definition_data> p: builtin_vars){
    implicit_ids.insert(p);
  }
}

char* get_array_type(std::string id) {
  int i = 0;
  while(id[i++] != '_');
  int j = i;
  while(id[++j] != '_');

  char* cc = new char[j - i + 1];

  int a = 0;
  for(int k = i; k < j; k++){
    cc[a++] = id[k];
  }
  
  cc[j - i] = 0;
  return cc;
}

int get_array_length(std::string id){
  int i = 0;
  while(id[i++] != '_');
  while(id[i++] != '_');
  return atoi(id.c_str() + i);
}

void register_array(std::string id){
  register_identifier(id.c_str());
  add_identifier_definition(id.c_str());

  int len = get_array_length(id);
  char len_const_str[32];
  const char* len_const_format = "i%d";
  sprintf(len_const_str, len_const_format, len);
  register_identifier(len_const_str);
  add_constant(len_const_str);
  
  id_definition_data d;
  d.opcode = 28; // type_array
  d.type = E_ARRAY;
  d.dependency = get_array_type(id);
  d.num_additional_arguments = 3;
  d.additional_arguments[0] = -2;
  d.additional_arguments[1] = -1;
  d.additional_arguments[2] = get_identifier_number(len_const_str);
  
  array_definitions.insert(std::make_pair(id, d));
}

void add_constant(std::string identifier){
  constants.insert(identifier);
}

bool is_registered_array(std::string id){
  return array_definitions.find(id) != array_definitions.end();
}

bool is_registered_constant(std::string identifier){
  return constants.find(identifier) != constants.end();
}

void create_constant_definition(std::string id, id_definition_data* data){
  data->opcode = 43; // constant

    
  register_identifier(id.c_str());
  add_identifier_definition(id.c_str());
    
  float f;
    
  switch(id[0]){
  case 'u':
    data->dependency = strdup("uint32");
    data->additional_arguments[0] = atoi(id.c_str() + 1);
    break;
  case 'i':
    data->dependency = strdup("int32");
    data->additional_arguments[0] = atoi(id.c_str() + 1);
    break;
  case 'f':
    data->dependency = strdup("float32");
    f = atof(id.c_str() + 1);
    data->additional_arguments[0] = *((uint32_t*)&f);
    break;
  }
}

void write_all_arrays(){
  for(std::pair<std::string, id_definition_data> p : array_definitions){
    if(!ensure_dependency_is_in_place(p.second)){
      printf("Dependency %s for %s could not be defined implicitly\n",
	     p.second.dependency, p.first.c_str());
    }
    write_array_definition(p.first, p.second);
  }
}

void write_all_constants(){
  for(std::string s : constants){
    id_definition_data d;
    create_constant_definition(s, &d);

    if(!ensure_dependency_is_in_place(d)){
      printf("Constant %s has a dependency defined after use of the constant\n", s.c_str());
      exit(-1);
    }

    write_constant_definition(d, s.c_str());
  }
}

bool is_implicit_id(std::string identifier){
  if(!initialized){
    implicit_ids_init();
  }
  return !(implicit_ids.find(identifier) == implicit_ids.end());
}

// For arrays
void write_array_definition(std::string name, id_definition_data& d){
  add_int_to_binary((4 << 16) | d.opcode);

  for(int i = 0; i < d.num_additional_arguments; i++){
    if(d.additional_arguments[i] == -1){
      add_int_to_binary(get_identifier_number(d.dependency));
    }else if(d.additional_arguments[i] == -2){
      add_int_to_binary(get_identifier_number(name.c_str()));
    }else {
      add_int_to_binary(d.additional_arguments[i]);
    }
  }
}


// For constants
void write_constant_definition(id_definition_data& d, const char* name){
  
  add_int_to_binary((4 << 16) | d.opcode);

  add_int_to_binary(get_identifier_number(d.dependency)); // Assume this is the type is always second argument...
  add_int_to_binary(get_identifier_number(name));
  add_int_to_binary(d.additional_arguments[0]);
}

// For implicit types
void write_type_definition(id_definition_data& d, const char* name){
  int size = d.num_additional_arguments + 2;
  
  add_int_to_binary((size << 16) | d.opcode);
  
  add_int_to_binary(get_identifier_number(name));
  for(int i = 0; i < d.num_additional_arguments; i++){
    if(d.additional_arguments[i] == -1){
      add_int_to_binary(get_identifier_number(d.dependency));
    } else {
      add_int_to_binary(d.additional_arguments[i]);
    }
  }
}

// For built-in variables (or constants)
void write_var_definition(id_definition_data& d, const char* name){
#ifdef DEBUG
  printf("Writing %s definition\n", name);
#endif
  
  int size = d.num_additional_arguments + 1;

  add_int_to_binary((size << 16) | d.opcode);

  for(int i = 0; i  < d.num_additional_arguments; i++){
    if(d.additional_arguments[i] == -1){
      add_int_to_binary(get_identifier_number(d.dependency));
    } else if (d.additional_arguments[i] == -2){
      add_int_to_binary(get_identifier_number(name));
    } else {
      add_int_to_binary(d.additional_arguments[i]);
    }
  }
}


// Returns true if everything is ok
bool ensure_dependency_is_in_place(id_definition_data& d){
  if(d.dependency){
    bool dependency_will_be_explicitly_defined = is_identifier_to_be_defined(d.dependency);
    bool dependency_is_defined = is_identifier_defined(d.dependency);
    if((!dependency_will_be_explicitly_defined)
       && !dependency_is_defined){

      output_implicit_identifier(d.dependency);

    }else if(!dependency_is_defined){
      return false;
    }
  }
  return true;
}

void output_implicit_identifier(std::string identifier){
  if(!initialized){
    implicit_ids_init();
  }
  id_definition_data d = implicit_ids[identifier];

  if(!ensure_dependency_is_in_place(d)){
    printf("Defining dependencies of an implicitly defined id not allowed after use of implicit id (you cannot define %s after reference of %s)\n", d.dependency, identifier.c_str());
    exit(-1);
  }

  if(!is_identifier_referenced(identifier.c_str())){
    register_identifier(identifier.c_str());
  }
  
  if(d.type == E_TYPE){
    write_type_definition(d, identifier.c_str());
  }else if(d.type == E_VAR){
    write_var_definition(d, identifier.c_str());
  }else{
    printf("SPURV: Writing of implicit id type not implemented\n");
    exit(-1);
  }
  
  add_identifier_definition(identifier.c_str());
}

void clear_implicit_id_table(){
  initialized = 0;

  reset_constants_and_arrays();
  
  for(std::map<std::string, id_definition_data>::iterator it = implicit_ids.begin(); it != implicit_ids.end(); it++){
    if((*it).second.dependency){
      free((*it).second.dependency);
    }
  }
  implicit_ids.clear();
}

void reset_constants_and_arrays(){
  constants.clear();
  array_definitions.clear();
}
