#include <spurv_compiler.h>
#include <implicit_ids.hpp>


#include <set>
#include <vector>

std::map<std::string, id_definition_data_t> default_implicit_ids;
std::vector<char*> trash_list;

const int num_pointer_versions = 13;
const std::string pointer_dirs[num_pointer_versions] = {"uniform_constant", "input", "uniform", "output", "workgroup",
						  "cross_workgroup", "private", "function", "generic", "push_constant",
						  "atomic_counter", "image", "storage_buffer"};

static int initialized = 0;


char* copy_and_store_string(const char* s){
  char* ss = strdup(s);
  trash_list.push_back(ss);
  return ss;
}

void implicit_ids_init(){
  if(initialized){
    return;
  }

  initialized = 1;

  std::pair<std::string, id_definition_data_t> data_types[] = {
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
    // -1 in argument shall be substituted by dependency identifier,
    // although this isn't always necessary as each output class has their own "write_"-function
    // We use copy_and_store_string to make these homogenous with the pointer versions added later
    {"vec2", {E_TYPE, 23, copy_and_store_string("float32"), 2, {-1, 2}}},
    {"vec3", {E_TYPE, 23, copy_and_store_string("float32"), 2, {-1, 3}}},
    {"vec4", {E_TYPE, 23, copy_and_store_string("float32"), 2, {-1, 4}}},
    {"mat2", {E_TYPE, 24, copy_and_store_string("vec2"), 2, {-1, 2}}},
    {"mat3", {E_TYPE, 24, copy_and_store_string("vec3"), 2, {-1, 3}}},
    {"mat4", {E_TYPE, 24, copy_and_store_string("vec4"), 2, {-1, 4}}}
  };

  std::pair<std::string, id_definition_data_t> function_types[] = {
    {"f_void", {E_TYPE, 33, copy_and_store_string("void"), 1, {-1}}}
  };

  std::pair<std::string, id_definition_data_t> builtin_vars[] = {
    {"_FragCoord", {E_VAR, 59, copy_and_store_string("p_vec4_input"), 3, {-1, -2, 1}}},
    {"_Position", {E_VAR, 59, copy_and_store_string("p_vec4_output"), 3, {-1, -2, 3}}},
    {"_PointSize", {E_VAR, 59, copy_and_store_string("p_float32_output"), 3, {-1, -2, 3}}},
    {"_CullDistance", {E_VAR, 59, copy_and_store_string("p_arr_float32_1_output"), 3, {-1, -2, 3}}},
    {"_ClipDistance", {E_VAR, 59, copy_and_store_string("p_arr_float32_1_output"), 3, {-1, -2, 3}}},
  };


  for(std::pair<std::string, id_definition_data_t>& p : data_types){
    default_implicit_ids.insert(p);
  }


  for(std::pair<std::string, id_definition_data_t> p: function_types){
    default_implicit_ids.insert(p);
  }

  for(std::pair<std::string, id_definition_data_t> p: builtin_vars){
    default_implicit_ids.insert(p);
  }
}

char* get_array_type(std::string& id) {
  int i = 0;
  while(id[i++] != '_');
  int j = i;
  while(id[++j] != '_');

  // Double check this?
  std::string str2 = id.substr(i, j - i);

  return copy_and_store_string(str2.c_str());
}

int get_array_length(std::string id){
  int i = id.find_last_of('_');
  return atoi(id.c_str() + i + 1);
}

void create_simple_struct_definition(std::string id, id_definition_data_t* d){
  d->opcode = 30;
  d->type = E_TYPE;
  d->dependency = copy_and_store_string(id.substr(1).c_str());
  d->num_additional_arguments = 1; // Only one member in simple struct
  d->additional_arguments[0] = -1;
}

void create_array_definition(std::string id, id_definition_data_t* d){
  int len = get_array_length(id);
  char len_const_str[32];
  const char* len_const_format = "i%d";
  sprintf(len_const_str, len_const_format, len);
  register_identifier(len_const_str);

  d->opcode = 28; // type_array
  d->type = E_ARRAY;
  d->dependency = get_array_type(id);
  d->num_additional_arguments = 3;
  d->additional_arguments[0] = -2;
  d->additional_arguments[1] = -1;
  d->additional_arguments[2] = get_identifier_number(len_const_str);
}

void create_pointer_definition(std::string& id, id_definition_data_t* d){
  int u = id.find_first_of('_');
  int v = id.find_last_of('_');

  std::string type = id.substr(u + 1, v - u - 1);
  std::string dir = id.substr(v + 1);
  int a = 0;

  for(int i = 0; i < num_pointer_versions; i++){
    if(dir == pointer_dirs[i]){
      a = i;
      break;
    }
  }

  d->type = E_TYPE;
  d->opcode = 32;
  d->dependency = copy_and_store_string(type.c_str());
  d->num_additional_arguments = 2;
  d->additional_arguments[0] = a;
  d->additional_arguments[1] = -1;
}

void create_constant_definition(std::string& id, id_definition_data_t* data){
  data->opcode = 43; // constant

  float f;

  data->type = E_CONSTANT;
  data->num_additional_arguments = 1;

  switch(id[0]){
  case 'u':
    data->dependency = copy_and_store_string("uint32");
    data->additional_arguments[0] = atoi(id.c_str() + 1);
    break;
  case 'i':
    data->dependency = copy_and_store_string("int32");
    data->additional_arguments[0] = atoi(id.c_str() + 1);
    break;
  case 'f':
    data->dependency = copy_and_store_string("float32");
    f = atof(id.c_str() + 1);
    data->additional_arguments[0] = *((uint32_t*)&f);
    break;
  }
}

void create_function_type_definition(std::string& id, id_definition_data_t* data) {
  data->type = E_FUNCTION_TYPE;
  data->opcode = 33;

  int first_result_type_letter_index = strlen("$fntype_");
  int second_underscore = id.find('_', first_result_type_letter_index);
  std::string return_type = id.substr(first_result_type_letter_index,
				      second_underscore - first_result_type_letter_index);

  // Add all mentioned types as additional arguments
  uint32_t arg_types[IMPLICIT_TYPE_MAX_NUM_ADDITIONAL_ARGUMENTS];
  int num_args = 0;
  
  int i = second_underscore;
  int j = id.find('_', second_underscore + 1);
  while(j != std::string::npos) {
    std::string next_type = id.substr(i + 1, j - i - 1);
    arg_types[num_args++] = get_identifier_number(next_type.c_str());
  }

  data->num_additional_arguments = num_args;

  // We assume argument types are declared (they are, as of now), and let return type be only dependency
  data->dependency = copy_and_store_string(reurn_type.c_str());
}

// For arrays
void write_array_definition(id_definition_data_t& d, const char* name){
  add_int_to_binary((4 << 16) | d.opcode);

  for(int i = 0; i < d.num_additional_arguments; i++){
    if(d.additional_arguments[i] == -1){
      add_int_to_binary(get_identifier_number(d.dependency));
    }else if(d.additional_arguments[i] == -2){
      add_int_to_binary(get_identifier_number(name));
    }else {
      add_int_to_binary(d.additional_arguments[i]);
    }
  }
}

// For constants
void write_constant_definition(id_definition_data_t& d, const char* name){

  add_int_to_binary((4 << 16) | d.opcode);

  add_int_to_binary(get_identifier_number(d.dependency)); // Assume this is the type is always second argument...
  add_int_to_binary(get_identifier_number(name));
  add_int_to_binary(d.additional_arguments[0]);
}

// For implicit types
void write_type_definition(id_definition_data_t& d, const char* name){
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
void write_var_definition(id_definition_data_t& d, const char* name){
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

void write_function_type(id_definition_data_t& d, const char* name) {
  int size = d.num_additional_arguments + 3; // Argument types + return type + result id + metablock

  add_int_to_binary((size << 16) | d.opcode);
  add_int_to_binary(get_identifier_number(name));
  add_int_to_binary(get_identifier_number(d.dependency)); // Return type

  // Argument types
  for(int i = 0; i < d.num_additional_arguments; i++) {
    add_int_to_binary(d.additional_arguments[i]);
  }
}


// Returns true if everything is ok
bool ensure_dependency_is_in_place(id_definition_data_t& d){
  if(d.dependency){
    bool dependency_will_be_explicitly_defined = is_identifier_to_be_defined(d.dependency);
    bool dependency_is_defined = is_identifier_defined(d.dependency);
    if((!dependency_will_be_explicitly_defined)
       && !dependency_is_defined){

      if(!output_definition_if_implicit(d.dependency)){
	printf("Could not output implicit dependency %s\n", d.dependency);
	exit(-1);
      }

    }else if(!dependency_is_defined){
      return false;
    }
  }
  return true;
}

void output_array_length_constant(std::string& s){
  char len_str[32];
  const char* len_format = "i%d";
  sprintf(len_str, len_format, get_array_length(s));
  std::string ds(len_str);

  id_definition_data_t d;
  create_constant_definition(ds, &d);
  output_implicit(ds, d);
}

void output_implicit(std::string& identifier, id_definition_data_t& data){
  // printf("Ensuring dependency of \"%s\"\n", identifier.c_str());
  if(!ensure_dependency_is_in_place(data)){
    printf("Defining dependencies of an implicitly defined id not allowed after use of implicit id (you cannot define %s after reference of %s)\n", data.dependency, identifier.c_str());
    exit(-1);
  }

  if(!is_identifier_referenced(identifier.c_str())){
    register_identifier(identifier.c_str());
  }

  switch(data.type){
  case E_TYPE:
    write_type_definition(data, identifier.c_str());
    break;
  case E_VAR:
    write_var_definition(data, identifier.c_str());
    break;
  case E_ARRAY:
    write_array_definition(data, identifier.c_str());
    break;
  case E_POINTER:
    write_type_definition(data, identifier.c_str());
    break;
  case E_CONSTANT:
    write_constant_definition(data, identifier.c_str());
    break;
  case E_FUNCTION_TYPE:
    write_function_type(data, identifier.c_str());
  default:
    printf("SPURV: Writing of implicit id type is not implemented\n");
    exit(-1);
  }

  add_identifier_definition(identifier.c_str());
}

bool is_default_implicit(std::string& s){
  return default_implicit_ids.find(s) != default_implicit_ids.end();
}

bool is_only_digits(std::string& s){
  for(unsigned int i = 0; i < s.length(); i++){
    if(s[i] > '9' || s[i] < '0'){
      return false;
    }
  }

  return true;
}

bool is_array_implicit(std::string& s){
  int u = s.find_first_of('_');
  int v = s.find_last_of('_');
  if(u > -1 && v > u && s.substr(0, 4) == "arr_"){
    std::string num = s.substr(v + 1);
    if(!is_only_digits(num)){
      return false;
    }

    std::string type_s = s.substr(u + 1, v - u - 1);
    if(is_default_implicit(type_s) || is_array_implicit(type_s) || is_pointer_implicit(type_s)){
      return true;
    }
  }
  return false;
}

bool is_simple_struct_implicit(std::string& s){
  if(s[0] == '$' && is_default_implicit(s.substr(1))){
    return true;
  }

  return false;
}

bool is_function_type_implicit(std::string& s) {
  if (s.substr(0, strlen("$fntype_")) == "$fntype_") {
    return true;
  }
  return false;
}

bool is_pointer_implicit(std::string& s){
  int u = s.find_first_of('_');
  int v = s.find_last_of('_');

  if(u > -1 && v > u && s.substr(0, 2) == "p_"){
    int ok = 0;
    for(unsigned int i = 0; i < num_pointer_versions; i++){
      int l = pointer_dirs[i].length();
      if(s.length() < l + 4){
	continue;
      }
      std::string storage_suffix = s.substr(s.length() - l);
      if(pointer_dirs[i] == storage_suffix && s[s.length() - l - 1] == '_'){
	ok = 1;
	break;
      }
    }
    if(!ok){
      return false;
    }

    std::string type_s = s.substr(u + 1, v - u - 1);
    if(is_default_implicit(type_s) || is_array_implicit(type_s) ||
       is_pointer_implicit(type_s) || is_simple_struct_implicit(type_s)){
      return true;
    }
  }

  return false;
}

bool is_constant_implicit(std::string& s){
  if(s[0] == 'u' || s[0] == 'i'){
    std::string ns = s.substr(1);
    return is_only_digits(ns);
  }else if(s[0] == 'f'){
    int c = 0;
    for(unsigned int i = 1; i < s.length(); i++){
      if(s[i] == '.'){
	c++;
      }else if(s[i] < '0' && s[i] > '9'){
	return false;
      }
    }
    if(c > 1){
      return false;
    }
    return true;
  }else{
    return false;
  }
}

 
 

bool output_definition_if_implicit(std::string& s){

  id_definition_data_t d;
  if(is_default_implicit(s)){
    // printf("Found %s as default implicit\n", s.c_str());
    output_implicit(s, default_implicit_ids[s]);
  } else if(is_array_implicit(s)){
    // printf("Found %s as array implicit\n", s.c_str());
    output_array_length_constant(s);
    create_array_definition(s, &d);
    output_implicit(s, d);
  } else if(is_constant_implicit(s)){
    // printf("Found %s as constant implicit\n", s.c_str());
    create_constant_definition(s, &d);
    output_implicit(s, d);
  } else if(is_pointer_implicit(s)){
    // printf("Found %s as pointer implicit\n", s.c_str());
    create_pointer_definition(s, &d);
    output_implicit(s, d);
  } else if(is_simple_struct_implicit(s)) {

    create_simple_struct_definition(s, &d);
    output_implicit(s, d);
  } else if(is_function_type_implicit(s)) {

    // Here, we assume the argument types are already defined
    // so we only need one dependency, for result type
    create_function_type_definition(s, &d);
    output_implicit(s, d);
  } else {
    //printf("%s not found as an implicit\n", s.c_str());
    return false;
  }
  
  return true;
}




void clear_implicit_id_table(){
  initialized = 0;

  default_implicit_ids.clear();

  for(unsigned int i = 0; i < trash_list.size(); i++){
    free(trash_list[i]);
  }
  trash_list.clear();
}
