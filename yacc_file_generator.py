
spec_dir = 'spirv_spec/'

token_file = open(spec_dir + 'original_instructions.txt', 'r')
opcode_file = open(spec_dir + 'instruction_codes.txt', 'r')
enum_file = open(spec_dir + 'enum_list.txt', 'r')
enum_value_file = open(spec_dir + 'enum_value_list.txt', 'r')

tokens = token_file.read().split()
opcodes = opcode_file.read().split()
enums = enum_file.read().split()
enum_values = enum_value_file.read().split()

print('%{\n\t#include <stdio.h>\n#include <spurv.h>\n#define YYSTYPE value_t*\n%}')

print('\n%token NEWLINE')
print('\n%token MAYBE_NEWLINE')
print('%token IDENTIFIER')
print('%token NUMBER')
print('%token STRING')

print('\n')
for token in tokens:
    print('%token ' + token)

for enum in enums:
    print('%token E_' + enum)
    
print('\n%%\n')

print('program: instruction_list {} | instruction_list NEWLINE {};')
print('instruction_list: instruction_list NEWLINE instruction {} | instruction {} ;')
print('instruction: opcode argument_list { $1->next = $2; \n//print_value_chain($2);printf("\\n");\n};')
print('argument_list: argument_list argument {\n\t $$ = $2; $$->next = $1;} | { $$ = NULL;} ;')

print('\nargument:')
for i in range(len(enums)):
    print('E_' + enums[i] \
          + ' {\n//printf("Enum: ' + enums[i] + '\\n");\nvalue_t* v = get_new_value();\n\tv->type = VALUE_TYPE_NUMBER;\n\tv->number = ' + enum_values[i] +';\n\t$$ = v;\n}')
    print('|')
print('NUMBER {value_t* v = get_new_value(); \n\tv->type = VALUE_TYPE_NUMBER;\n\tv->number = strtol(yytext, NULL, 10); \n//printf("Number %d\\n", v->number);\n $$ = v; }\n|');
print('STRING {value_t* v = get_new_value(); \n\tv->type = VALUE_TYPE_STRING;\n\tv->string = (char*)malloc(strlen(yytext - 1)); memcpy(v->string, yytext + 1, strlen(yytext) - 2); v->string[strlen(yytext) - 2] = 0; \n//printf("String %s\\n", v->string); \n$$ = v;}\n|');
print('IDENTIFIER {value_t* v = get_new_value(); \n\tv->type = VALUE_TYPE_IDENTIFIER;\n\tv->string = strdup(yytext); \n//printf("Identifier %s\\n", v->string); \n$$ = v; register_identifier(v->string);}\n');
print(';\n')

print('\n')
print('opcode:\n')
for i in range(len(tokens)):
    print(tokens[i] + ' {value_t* v = get_new_value();\n\tv->type = VALUE_TYPE_OPCODE;\n\tv->number = ' + opcodes[i] + '; $$ = v; add_opcode(v);\n //printf("Token: ' + tokens[i] + '\\n")\n;}');
    if i != len(tokens) - 1:
        print('|')

        
print(';\n')

print('%%\n')

print('int yyerror (const char *error) {\n\tfprintf(stderr, "%s on line %d\\n", error, yylineno);\n\texit(-1);\n}');

enum_file.close();
enum_value_file.close();

token_file.close();
opcode_file.close();
