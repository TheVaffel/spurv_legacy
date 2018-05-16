#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


typedef enum {
  VALUE_TYPE_STRING,
  VALUE_TYPE_NUMBER,
  VALUE_TYPE_OPCODE,
  VALUE_TYPE_IDENTIFIER
} value_type_e;

typedef struct v {
  value_type_e type;
  struct v* next;
  union{
    char* string;
    int64_t number;
  };
} value_t;

value_t* get_new_value();
void print_value_chain(value_t* value);

void add_int(uint32_t integer);
void add_string(const char* string);

void add_opcode(value_t* opcode);
void register_identifier(const char* string);

#include <vector>
void parse_spurv_file(const char* name, std::vector<uint32_t>& spirv);
