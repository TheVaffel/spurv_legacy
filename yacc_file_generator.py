
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
print('%token EQUALS');

print('\n')
for token in tokens:
    print('%token ' + token)

for enum in enums:
    print('%token E_' + enum)
    
print('\n%%\n')

print('program: instruction_list {} | instruction_list NEWLINE {};')
print('instruction_list: instruction_list NEWLINE instruction {} | instruction {} ;')
print('instruction: opcode argument_list { \
$1->next = $2; register_identifier_definition($1);\n//print_value_chain($2);printf("\\n");\n\
} | identifier_reference EQUALS opcode argument_list { \
   $3->next = $4; int ind = result_indices[$3->operation_number]; if(put_into_chain(ind, $1, $3) <= ind){printf("Not enough arguments in assignment at line %d\\n", yylineno-1);exit(-1);} register_identifier_definition($3);\
};')
print('argument_list: argument_list argument {\n\t $$ = $2; $$->next = $1;} | { $$ = NULL;} ;')


print('\nargument:')
for i in range(len(enums)):
    print('E_' + enums[i] \
          + ' {\n//printf("Enum: ' + enums[i] + '\\n");\
               \n$$ = construct_value_number(' + enum_values[i] + ', NULL);\n}')
    print('|')
print('NUMBER {$$ = construct_value_number(strtol(yytext,NULL, 10), NULL);}\n|');
print('STRING {\tchar* c = (char*)malloc(strlen(yytext - 1)); memcpy(c, yytext + 1, strlen(yytext) - 2);\
               c[strlen(yytext) - 2] = 0; \n$$ = construct_value_string(c, NULL);}\n|');
print('identifier_reference {$$ = $1;};')
print('identifier_reference: IDENTIFIER {\n\t$$ = construct_value_identifier(strdup(yytext), NULL); register_identifier($$->string);}\n');
print(';\n')

print('\n')
print('opcode:\n')
for i in range(len(tokens)):
    print(tokens[i] + ' {$$ = construct_value_opcode(' + opcodes[i] + ', ' + str(i) + ', NULL); add_opcode($$);\n }');
    if i != len(tokens) - 1:
        print('|')

        
print(';\n')

print('%%\n')

print('int yyerror (const char *error) {\n\tfprintf(stderr, "%s on line %d\\n", error, yylineno);\n\texit(-1);\n}');
print('void register_identifier_definition(value_t* opcode){\n\tif(result_indices[opcode->operation_number] >= 0){\n\t\t \
      value_t* v;\n\t\tget_value_in_chain(&v, result_indices[opcode->operation_number], opcode);\n\t\tv->type = VALUE_TYPE_IDENTIFIER_DEFINITION;add_future_identifier_definition(v->string); \n\t}\n}')
enum_file.close();
enum_value_file.close();

token_file.close();
opcode_file.close();
