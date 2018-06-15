#include <string>
#include <map>

#define IMPLICIT_TYPES_MAX_NUM_ADDITIONAL_ARGUMENTS 10

typedef enum e {
  E_VAR,
  E_TYPE,
  E_ARRAY,
  E_POINTER,
  E_CONSTANT,
} id_type;

typedef struct s {
  id_type type;
  int opcode;
  char* dependency;
  int num_additional_arguments;
  int additional_arguments[IMPLICIT_TYPES_MAX_NUM_ADDITIONAL_ARGUMENTS];
} id_definition_data;


void implicit_ids_init();

void write_all_arrays();

void write_all_constants();

void write_array_definition(id_definition_data& data, const char* str);

void write_type_definition(id_definition_data& data, const char* str);

void write_constant_definition(id_definition_data& data, const char* str);

void output_implicit(std::string identifier, id_definition_data& data);

void create_pointer_definition(std::string id, id_definition_data* def);
void create_constant_definition(std::string id, id_definition_data* def);
void create_array_definition(std::string id, id_definition_data* def);

bool ensure_dependency_is_in_place(id_definition_data& d);

void clear_implicit_id_table();

bool is_pointer_implicit(std::string);
bool is_array_implicit(std::string);
bool is_constant_implicit(std::string);
bool is_default_implicit(std::string);

bool output_if_default_implicit(std::string);
bool output_if_array_implicit(std::string);
bool output_if_pointer_implicit(std::string);
bool output_if_constant_implicit(std::string);

bool output_if_implicit(std::string);
