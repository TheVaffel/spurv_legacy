#include <string>
#include <map>

#define IMPLICIT_TYPES_MAX_NUM_ADDITIONAL_ARGUMENTS 10

typedef struct s {
  int opcode;
  const char* dependency;
  int num_additional_arguments;
  int additional_arguments[IMPLICIT_TYPES_MAX_NUM_ADDITIONAL_ARGUMENTS];
} type_definition_data;


void implicit_type_init();

bool is_implicit_type(std::string identifier);

void add_implicit_identifier(std::string identifier);
