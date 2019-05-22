#include <spurv_compiler.hpp>

#include <sstream> // ostringstream

static void add_arguments_to_stream_and_output_definitions(value_t* argument_list, std::ostringstream& os) {

  if (argument_list->next->next) {
    add_string(argument_list->next->next, os);
    os << "_";
  }
  char* name = argument_list->string;
  char* type = argument_list->next->string;

  // Add argument type to type name stream
  os << type;

  std::string argument_type = std::string("p_") + type + std::string("_function");

  if (!is_identifier_referenced(argument_type.c_str())) {
    register_identifier(argument_type.c_str());
    if (!output_definition_if_implicit(argument_type)) {
      printf("[SPURV ERROR]: Did not recognize %s as implicit type\n", argument_type.c_str());
    }
  }
}

// Argument list type is of form $fntype_<return_type>_<argtype1>_<argtype2>...<argtypen>
// List is in order arg n, type n... type 2, arg 1, type 1
std::string construct_and_output_function_type_definition(value_t* argument_list,
							  const std::string& return_type ) {
  std::ostringstream os;
  os << "$fntype_";
  os << return_type << "_";
  
  if(argument_list) {
    add_arguments_to_stream_and_output_definitions(argument_list, os);
  }
  
  std::string function_type = os.str();

  printf("Constructed function type %s\n", function_type.c_str());
  return function_type;
}

void output_function_definition(function_definition_t* fnd) {
  std::string function_type = construct_and_output_function_type_definition(fnd->argument_list, fnd->return_type);

  if (!is_identifier_referenced(function_type.c_str())) {
    register_identifier(function_type.c_str());
    if(!output_definition_if_implicit(function_type)) {
      printf("Function type %s was not found as explicit\n", function_type.c_str());
    }
  }
}
