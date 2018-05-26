#include <string>
#include <map>

#define IMPLICIT_TYPES_MAX_NUM_ADDITIONAL_ARGUMENTS 10

typedef struct s {
  int opcode;
  char* dependency;
  int num_additional_arguments;
  int additional_arguments[IMPLICIT_TYPES_MAX_NUM_ADDITIONAL_ARGUMENTS];
} id_definition_data;


void implicit_ids_init();

bool is_implicit_id(std::string identifier);

void write_type_definition(id_definition_data& data, const char* str);

void write_constant_definition(id_definition_data& data, const char* str);

void add_implicit_identifier(std::string identifier);

bool ensure_dependency_is_in_place(id_definition_data& d);

void clear_implicit_id_table();
