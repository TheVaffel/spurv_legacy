# Spurv - How does it work?

## Introduction

Spurv is the name of a simple language specified by me, closely related to the SPIR-V bytecode spcecified by Khronos. It is made to be easy to compile, requiring few resources. The compiler is not resource-heavy, among others because it does not attempt anything "fancy" (e.g. optimizations)

## The Control Flow

There are two entry points into the Spurv API:

`parse_spurv_file(const char* file_name, std::vector<uint32_t>& spirv)` takes in the name of a file written in the Spurv language, and puts the resulting bytecode (specified to be a series of unsigned 32-bit integers) into the `spirv` `std::vector`.

`clear_spurv()` is not necessary for normal functioning, but can be used to delete all data allocated by Spurv, to satisfy memory leak checks. It both resets the parser and clears constructed type information. Resetting the parser automatically happens upon a new call to `parse_spurv_file`, while the type information persists between calls. This function is not treated further in this document.

## The Parsing

The following happens when calling `parse_spurv_file`:
- The file gets read, and `yyparse` is called, constructing a grammar tree ready for action
- During parsing, several lists are filled:
- For each "header line" (`#in` for input vertex attributes, `#out` for outputs, `#uniform` for uniforms), an entry is put into respective lists (one list for each header type), and the corresponding variable name is _registered_
- A variable name (also includes type names) that is _registered_ has received its own identifier number and stored in a hashmap, but does not have to be actually defined yet
- First some info is added to the binary (magic number, version number...)
- Second, it checks if a header is defined, that is, if we have something of the form '\#header \<header type\>' on top. If this is defined, we call `add_header_to_binary`, putting all header-specific definitions into place. Then implicit types are declared in the binary, before the IO variables (\#in, \#out or \#uniform) are declared as well.
- After this, we first output all opcode lines which decorates (we assume they appear contiguously), then declare implicit types. We expect decoration only if the header is not defined. Otherwise, we expect there to be no decorations.
- For each opcode, we manually emit the opcode number and call `output_binary`. The second argument to `output_binary` is a pointer to the size of this opcode in 4-byte words, which `output_binary` increments as it runs.
- In the end, the total size of the binary is put into the header of the binary.

## Some chosen high-level concepts

### The `value_t` chain

When parsing the grammar, each line is considered one opcode, except for lines starting with \#. When parsing an opcode line, each word (more specifically operand, not including `=`) is given its own `value_t` structure, containing information regarding the type of the operand (string or number), and the data. Each line is transformed into a linked list of opcodes, but because of the nature of the LR parser, the list will be constructed backwards, except for the head. Thus, it leaves the opcode itself at head, and then the last operand, the second-to-last, the third-to-last etc.. The vector `opcodes` contains all the opcode lists in the order they were written in file.

### Implicit IDs

Implicit IDs is a term for types and variables that the user can use without explicitly defining them. This includes common types like `float`, `vec3` and `mat4`, and built-in variables like the output position in the vertex shader (`_Position`). The implicit IDs are only included into the bytecode if the types / variables are actually used by the user code. The function `output_if_implicit` takes a string and outputs bytecode for defining it to the bytecode vector if it finds that it is an implicit type of some kind. Returns false otherwise.

It works by checking if the string satisfies any of the implicit id name formats, and can thus choose the correct one automatically.

## Glossary

- Simple struct: SPIR-V struct with only one member