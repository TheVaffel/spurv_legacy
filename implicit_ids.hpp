#include <string>
#include <map>

#define IMPLICIT_TYPES_MAX_NUM_ADDITIONAL_ARGUMENTS 10

typedef enum e {
  E_VAR,
  E_TYPE,
  E_ARRAY,
} id_type;

typedef struct s {
  id_type type;
  int opcode;
  char* dependency;
  int num_additional_arguments;
  int additional_arguments[IMPLICIT_TYPES_MAX_NUM_ADDITIONAL_ARGUMENTS];
} id_definition_data;


void implicit_ids_init();

bool is_implicit_id(std::string identifier);

void add_constant(std::string id);

void write_all_arrays();

void write_all_constants();

void register_array(std::string id);

bool is_registered_array(std::string id);

bool is_registered_constant(std::string id);

void write_array_definition(std::string id, id_definition_data& data);

void write_type_definition(id_definition_data& data, const char* str);

void write_constant_definition(id_definition_data& data, const char* str);

void output_implicit_identifier(std::string identifier);

bool ensure_dependency_is_in_place(id_definition_data& d);

void clear_implicit_id_table();

void reset_constants_and_arrays();
