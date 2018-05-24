
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <spurv.h>

extern int yylineno;
extern char yytext[];
extern int yylex (void);
extern int yyerror(const char* error);
extern FILE* yyin;


typedef enum {
  VALUE_TYPE_STRING,
  VALUE_TYPE_NUMBER,
  VALUE_TYPE_OPCODE,
  VALUE_TYPE_IDENTIFIER,
  VALUE_TYPE_IDENTIFIER_DEFINITION
} value_type_e;

typedef struct v {
  value_type_e type;
  struct v* next;
  union{
    char* string;
    int64_t number;
  };
  uint64_t operation_number; // Not the same as opCode, just an internal enumeration
} value_t;

value_t* get_new_value();
value_t* construct_value_string(char* str, value_t* next);
value_t* construct_value_number(int num, value_t* next);
value_t* construct_value_opcode(int code, int code_num, value_t* arg_list);
value_t* construct_value_identifier(char* str, value_t* next);
void print_value_chain(value_t* value);

void register_header_definition(value_t* value);
int get_string_word_length(const char* str);

void register_constant(const char* str);

void add_identifier_definition(const char* str);
bool is_identifier_defined(const char* str);

void add_future_identifier_definition(const char* str);
bool is_identifier_to_be_defined(const char* str);

void add_int_to_binary(uint32_t integer);
void add_string(const char* string);

void add_opcode(value_t* opcode);
void register_identifier(const char* string);
int get_identifier_number(const char* string);
bool is_identifier_referenced(const char* string);

int get_value_in_chain(value_t** val, int get_i, value_t* curr);
int put_into_chain(int put_i, value_t* put_val, value_t* parent);

void reset_parser();
