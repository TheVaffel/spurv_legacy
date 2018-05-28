header = '%{\n' + \
'#include <y.tab.hpp>\n' + \
'#include <spurv_compiler.h>\n' + \
'%}\n' + \
'%option noyywrap\n' + \
'%option array\n' + \
'%option yylineno\n' + \
'DIGIT [0-9]\n' + \
'LETTER [a-zA-Z_]\n' + \
'%%\n' + \
'[ \\t\\r\\v] ; // Whitespace\n' + \
'"//".*\\n+ ; // Line comments\n' + \
'\\n+ {  return NEWLINE;}\n' + \
'= {return EQUALS;}\n'
 

footer = '{DIGIT}+  { return NUMBER;}\n' + \
'\\"(\\\\.|[^\\\\"])*\\" { return STRING;}\n' + \
'#header {return HEADER_KEYWORD;}\n' + \
'(#out|#in) {return HEADER_IO_KEYWORD;}\n' + \
'(VERTEX_SHADER|FRAGMENT_SHADER|COMPUTE_SHADER) {return HEADER_CLASS;}\n' + \
'(u|i)(-?)({DIGIT}+) {register_constant(yytext); return IDENTIFIER;}\n' + \
'f({DIGIT}+)\\.({DIGIT}+) {register_constant(yytext); return IDENTIFIER;}\n' + \
'{LETTER}({LETTER}|{DIGIT})* { return IDENTIFIER;}\n' + \
'.  {\n\tfprintf(stderr, "Unrecognized token %s\\n", yytext);exit(-1);\n}\n' + \
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
