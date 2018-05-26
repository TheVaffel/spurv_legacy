#include <implicit_ids.hpp>
#include <spurv_compiler.h>

std::map<std::string, id_definition_data> implicit_ids;

const int num_pointer_versions = 13;
const std::string pointer_dirs[num_pointer_versions] = {"uniform_constant", "input", "uniform", "output", "workgroup",
						  "cross_workgroup", "private", "function", "generic", "push_constant",
						  "atomic_counter", "image", "storage_buffer"};

static int initialized = 0;

void implicit_ids_init(){
  
  initialized = 1;
  
  std::pair<std::string, id_definition_data> data_types[] = {
    {"void", {19, NULL, 0}},
    {"bool", {20, NULL, 0}},
    {"int", {21, NULL, 2, {32, 1}}},
    {"int32", {21, NULL, 2, {32, 1}}},
    {"int64", {21, NULL, 2, {64, 1}}},
    {"uint32", {21, NULL, 2, {32, 0}}},
    {"uint64", {21, NULL, 2, {64, 0}}},
    // {"float", {22, NULL, 1, {32}}}, // This one really messes up when used with float32 (not allowed)
    {"float32", {22, NULL, 1, {32}}},
    {"float64", {22, NULL, 1, {64}}},
    // -1 in argument shall be substituted by dependency identifier
    // We use strdup to make these homogenous with the pointer versions of the added later
    {"vec2", {23, strdup("float32"), 2, {-1, 2}}},
    {"vec3", {23, strdup("float32"), 2, {-1, 3}}},
    {"vec4", {23, strdup("float32"), 2, {-1, 4}}},
  };

  std::pair<std::string, id_definition_data> function_types[] = {
    {"f_void", {33, strdup("void"), 1, {-1}}}
  };
  
  
  for(std::pair<std::string, id_definition_data>& p : data_types){
    implicit_ids.insert(p);
    for(int i = 0; i < num_pointer_versions; i++){
      std::string pointer_name = std::string("p_") + p.first + std::string("_") + pointer_dirs[i];
      implicit_ids.insert({pointer_name, {32, strdup(p.first.c_str()), 2, {i, -1}}});
    }
  }


  for(std::pair<std::string, id_definition_data> p: function_types){
    implicit_ids.insert(p);
  }
}

bool is_implicit_id(std::string identifier){
  if(!initialized){
    implicit_ids_init();
  }
  return !(implicit_ids.find(identifier) == implicit_ids.end());
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


// Returns true if everything is ok
bool ensure_dependency_is_in_place(id_definition_data& d){
  if(d.dependency){
    bool dependency_will_be_explicitly_defined = is_identifier_to_be_defined(d.dependency);
    bool dependency_is_defined = is_identifier_defined(d.dependency);
    if((!dependency_will_be_explicitly_defined)
       && !dependency_is_defined){

      add_implicit_identifier(d.dependency);

    }else if(!dependency_is_defined){
      return false;
    }
  }
  return true;
}

void add_implicit_identifier(std::string identifier){
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
  
  
  write_type_definition(d, identifier.c_str());

  add_identifier_definition(identifier.c_str());
}

void clear_implicit_id_table(){
  initialized = 0;
  for(std::map<std::string, id_definition_data>::iterator it = implicit_ids.begin(); it != implicit_ids.end(); it++){
    if((*it).second.dependency){
      free((*it).second.dependency);
    }
  }
  implicit_ids.clear();
}
