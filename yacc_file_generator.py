
spec_dir = 'spirv_spec/'

token_file = open(spec_dir + 'original_instructions.txt', 'r')
opcode_file = open(spec_dir + 'instruction_codes.txt', 'r')
enum_file = open(spec_dir + 'enum_list.txt', 'r')
enum_value_file = open(spec_dir + 'enum_value_list.txt', 'r')
result_index_file = open(spec_dir + 'result_index_list.txt', 'r')

stub_file = open('src/yacc_stub.y')
stub_text = stub_file.read()
stub_segments = stub_text.split("%__SEP")

tokens = token_file.read().split()
opcodes = opcode_file.read().split()
enums = enum_file.read().split()
enum_values = enum_value_file.read().split()
result_indices = result_index_file.read().split()


#print('%{\n\t#include <stdio.h>\n#include <spurv_compiler.h>\n#define YYSTYPE value_t*\n')
print(stub_segments[0])

#print('int result_indices[] = {', end='')
for i in result_indices:
    print(str(i) + ',' , end = '')

print(stub_segments[1])

for token in tokens:
    print('%token ' + token)

for enum in enums:
    print('%token E_' + enum)


print(stub_segments[2])

for i in range(len(enums)):
    print('E_' + enums[i] + '{ \n\
              $$ = construct_value_number(' + enum_values[i] + ', NULL); \n\
          }')
    print('|')

print(stub_segments[3])


for i in range(len(tokens)):
    print(tokens[i] + ' { \n\
              $$ = construct_value_opcode(' + opcodes[i] + ', ' + str(i) + ', NULL); \n\
              add_opcode($$); \n\
              // printf("'+tokens[i]+'\\n"); \n\
          }');
    if i != len(tokens) - 1:
        print('|')

print(stub_segments[4])

stub_file.close();

enum_file.close();
enum_value_file.close();

token_file.close();
opcode_file.close();
