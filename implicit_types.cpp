#include <implicit_types.hpp>
#include <spurv.h>

std::map<std::string, type_definition_data> implicit_types;

const int num_pointer_versions = 13;
const std::string pointer_dirs[num_pointer_versions] = {"uniform_constant", "input", "uniform", "output", "workgroup",
						  "cross_workgroup", "private", "function", "generic", "push_constant",
						  "atomic_counter", "image", "storage_buffer"};

void implicit_type_init(){
  std::pair<std::string, type_definition_data> data_types[] = {
    {"void", {19, NULL, 0}},
    {"bool", {20, NULL, 0}},
    {"int", {21, NULL, 2, {32, 1}}},
    {"int32", {21, NULL, 2, {32, 1}}},
    {"int64", {21, NULL, 2, {64, 1}}},
    {"uint32", {21, NULL, 2, {32, 0}}},
    {"uint64", {21, NULL, 2, {64, 0}}},
    {"float", {22, NULL, 1, {32}}},
    {"float32", {22, NULL, 1, {32}}},
    {"float64", {22, NULL, 1, {64}}},
    // -1 in argument shall be substituted by dependency identifier
    {"vec2", {23, "float", 2, {-1, 2}}},
    {"vec3", {23, "float", 2, {-1, 3}}},
    {"vec4", {23, "float", 2, {-1, 4}}},
  };

  std::pair<std::string, type_definition_data> function_types[] = {
    {"f_void", {33, "void", 1, {-1}}}
  };
  
  
  for(std::pair<std::string, type_definition_data> p : data_types){
    implicit_types.insert(p);
    for(int i = 0; i < num_pointer_versions; i++){
      std::string pointer_name = std::string("p_") + p.first + std::string("_") + pointer_dirs[i];
      implicit_types.insert({pointer_name, {32, strdup(p.first.c_str()), 2, {i, -1}}});
    }
  }


  for(std::pair<std::string, type_definition_data> p: function_types){
    implicit_types.insert(p);
  }
}

bool is_implicit_type(std::string identifier){
  return !(implicit_types.find(identifier) == implicit_types.end());
}

void add_implicit_identifier(std::string identifier){
  type_definition_data d = implicit_types[identifier];
  if(d.dependency){
    bool dependency_will_be_explicitly_defined = is_identifier_to_be_defined(d.dependency);
    bool dependency_is_defined = is_identifier_defined(d.dependency);
    if((!dependency_will_be_explicitly_defined)
       && !dependency_is_defined){

      add_implicit_identifier(d.dependency);

    }else if(!dependency_is_defined){
      printf("Defining dependencies of an implicitly defined type not allowed after use of implicit type (you cannot define %s after reference of %s)\n", d.dependency, identifier.c_str());
      exit(-1);
    }
  }

  if(!is_identifier_referenced(identifier.c_str())){
    register_identifier(identifier.c_str());
  }
  

  int size = d.num_additional_arguments + 2;
  
  add_int_to_binary((size << 16) | d.opcode);
  
  add_int_to_binary(get_identifier_number(identifier.c_str()));
  for(int i = 0; i < d.num_additional_arguments; i++){
    if(d.additional_arguments[i] == -1){
      add_int_to_binary(get_identifier_number(d.dependency));
    } else {
      add_int_to_binary(d.additional_arguments[i]);
    }
  }

  add_identifier_definition(identifier.c_str());
}
