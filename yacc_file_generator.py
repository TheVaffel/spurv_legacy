
spec_dir = 'spirv_spec/'

token_file = open(spec_dir + 'original_instructions.txt', 'r')
opcode_file = open(spec_dir + 'instruction_codes.txt', 'r')
enum_file = open(spec_dir + 'enum_list.txt', 'r')
enum_value_file = open(spec_dir + 'enum_value_list.txt', 'r')
result_index_file = open(spec_dir + 'result_index_list.txt', 'r')

tokens = token_file.read().split()
opcodes = opcode_file.read().split()
enums = enum_file.read().split()
enum_values = enum_value_file.read().split()
result_indices = result_index_file.read().split()


print('%{\n\t#include <stdio.h>\n#include <spurv_compiler.h>\n#define YYSTYPE value_t*\n')
print('int result_indices[] = {', end='')
for i in result_indices:
    print(str(i) + ',' , end = '')
print('};\n')
print('void register_identifier_definition(value_t* opcode);\n')
print('%}')

print('\n%token NEWLINE')
print('\n%token MAYBE_NEWLINE')
print('%token IDENTIFIER')
print('%token NUMBER')
print('%token STRING')
print('%token EQUALS')
print('%token HEADER_KEYWORD')
print('%token HEADER_CLASS')
print('%token HEADER_IO_KEYWORD')
print('\n')

for token in tokens:
    print('%token ' + token)

for enum in enums:
    print('%token E_' + enum)
    
print('\n%%\n')

print('program: header body {} | body {};')
print('header: HEADER_KEYWORD header_name NEWLINE header_io_list \n\
      { \n\
          $$ = $2; \n\
          $$->next = $3; \n\
          register_header_definition($$); \n\
      }; \n')

print('header_io_list: header_io_list io_entry \n\
      { \n\
          register_io_entry($2);} | \n\
          io_entry {register_io_entry($1); \n\
      }; \n')

print('io_entry: io_keyword_reference identifier_reference identifier_reference NEWLINE \n\
      { \n\
          $$ = $1; \n\
          $1->next = $2; \n\
          $2->next = $3; \n\
          add_future_identifier_definition($3->string); \n\
      }; \n')

print('body: instruction_list {} \n\
      | \n\
      instruction_list NEWLINE {}; \n')

print('instruction_list: instruction_list NEWLINE instruction {} \n\
      | \n\
      instruction {} ; \n')

print('instruction: opcode argument_list { \n\
          $1->next = $2; \n\
          register_identifier_definition($1); \n\
          // print_value_chain($2); \n\
          // printf("\\n"); \n\
      } | \n\
      identifier_reference EQUALS opcode argument_list { \n\
          $3->next = $4; \n\
          int ind = result_indices[$3->operation_number]; \n\
          if(put_into_chain(ind, $1, $3) <= ind){ \n\
              printf("Not enough arguments in assignment at line %d\\n", yylineno-1); \n\
              exit(-1); \n\
          } \n\
          register_identifier_definition($3); \n\
      }; \n')
print('argument_list: argument_list argument { \n\
          $$ = $2; \n\
          $$->next = $1; \n\
      } | \n\
      { $$ = NULL;} ; \n')

print('\nargument:')
for i in range(len(enums)):
    print('E_' + enums[i] + '{ \n\
              //printf("Enum: ' + enums[i] + '\\n"); \n\
              $$ = construct_value_number(' + enum_values[i] + ', NULL); \n\
          }')
    print('|')

print('NUMBER { \n\
      $$ = construct_value_number(strtol(yytext,NULL, 10), NULL); \n\
      } | \n');

print('STRING { \n\
          char* c = (char*)malloc(strlen(yytext)-1); \n\
          memcpy(c, yytext + 1, strlen(yytext) - 2); \n\
          c[strlen(yytext) - 2] = 0; \n\
          $$ = construct_value_string(c, NULL); \n\
      } | \n');

print('identifier_reference { \n\
          $$ = $1; \n\
      };')

print('identifier_reference: IDENTIFIER { \n\
          $$ = construct_value_identifier(strdup(yytext), NULL); \n\
          register_identifier($$->string); \n\
      }');

print('header_name: HEADER_CLASS { \n\
          $$ = construct_value_string(strdup(yytext), NULL); \n\
      };')

print('io_keyword_reference: HEADER_IO_KEYWORD { \n\
          $$ = construct_value_string(strdup(yytext), NULL); \n\
      };')

print(';\n')

print('\n')
print('opcode:\n')
for i in range(len(tokens)):
    print(tokens[i] + ' { \n\
              $$ = construct_value_opcode(' + opcodes[i] + ', ' + str(i) + ', NULL); \n\
              add_opcode($$); \n\
              // printf("'+tokens[i]+'\\n"); \n\
          }');
    if i != len(tokens) - 1:
        print('|')

        
print(';\n')

print('%%\n')

print('int yyerror (const char *error) { \n\
          fprintf(stderr, "%s on line %d\\n", error, yylineno); \n\
          exit(-1); \n\
      }');
print('void register_identifier_definition(value_t* opcode){ \n\
          if (result_indices[opcode->operation_number] >= 0){\n\
              value_t* v; \n\
              get_value_in_chain(&v, result_indices[opcode->operation_number], opcode); \n\
              v->type = VALUE_TYPE_IDENTIFIER_DEFINITION; \n\
              add_future_identifier_definition(v->string); \n\
          } \n\
      }')
enum_file.close();
enum_value_file.close();

token_file.close();
opcode_file.close();
