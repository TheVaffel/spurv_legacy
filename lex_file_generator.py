header = '%{\n' + \
'#include <y.tab.hpp>\n' + \
'%}\n' + \
'%option noyywrap\n' + \
'%option array\n' + \
'%option yylineno\n' + \
'%x LASTEND\n' + \
'DIGIT [0-9]\n' + \
'LETTER [a-zA-Z_]\n' + \
'%%\n' + \
'[ \\t\\r\\v] ; // Whitespace\n' + \
'";".* ; // Line comments\n' + \
'\\n+ {  return NEWLINE;}\n' + \
'= {return EQUALS;}\n'

footer = '{DIGIT}+  { return NUMBER;}\n' + \
'\\"(\\\\.|[^\\\\"])*\\" { return STRING;}\n' + \
'{LETTER}({LETTER}|{DIGIT})* { return IDENTIFIER;}\n' + \
'.  {\n\tprintf("Unrecognized token %s\\n", yytext);\n}\n' + \
'%%'

spec_dir = 'spirv_spec/'

token_file = open(spec_dir + 'original_instructions.txt', 'r')
instruction_file = open(spec_dir + 'new_instructions.txt', 'r')

enum_file = open(spec_dir + 'enum_list.txt', 'r')

enums = enum_file.read().split()



tokens = token_file.read().split()
instructions = instruction_file.read().split()


print(header)

for i in range(len(instructions)):
    print(instructions[i] + " { return " + tokens[i] + ";}")

print('\n\n')
for i in range(len(enums)):
    print("" + enums[i] + " {  return E_" + enums[i] + ";}")

print('\n\n')

print(footer)
