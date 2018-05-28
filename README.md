# Spurv

Spurv is a language closely related to Khrono's [SPIR-V assembly syntax](https://github.com/KhronosGroup/SPIRV-Tools/blob/master/syntax.md), but with some changes aimed at making SPIR-V easier to write by hand.

A small comparison to Khrono's specification:
- Spurv has all the same operations, but with the 'Op'-part taken away, as well as converting all operation keywords from _PascalCase_ to _camel_case_. Thus, e.g. `OpTypePointer` becomes `type_pointer`, but ending capitals are kept, so that e.g. `OpGroupIAddNonUniformAMD` becomes `group_i_add_non_uniform_AMD`. 
- All enums have their original form (`Shader`, `Name` etc.)
- Free-form variable names as result id's are supported (all c-like variable names that are not keywords are permitted)
- Result id's from operations can either be declared as an operand, like it is treated in the physical binary format, or might be assigned with an 'equals' sign, as in Khronos' assembly specification
- Some common types may be referenced without being explicitly defined beforehand. If e. g. `void`, `float` or `vec4` is used as a type without being defined, definitions are generated for these on the fly.
- Some headers for common module types are supported, like FRAGMENT_SHADER and VERTEX_SHADER. See examples for explanations. Attribute definitions must be defined after a header with the #in and #out tags.
- The implicit types, 'equals'-notation and headers are all optional, and one might write the whole programs with raw SPIR-V grammar (excluding the metadata in the start of a module).

## Build

The build is only tested on Linux. The Makefile should do everything necessary. Dependencies:
- Python3
- Flex
- Yacc
- g++ (std C++11)

In addition, an example is provided, one that makes use of [HConLib](https://github.com/TheVaffel/HConLib)'s Wingine framework. Thus, this is required for the example ("test"). A small modification of the HCONLIB_ROOT path in the test's Makefile should make everything work when the dependencies are in place.

## TODO

- The language has a large amount of keywords (one for each operation and enum), and might thus be hard to write without triggering a name collision. A grammar file for common editors (primarily Emacs and Vim) could help to avoid this.

## Etymology

Spurv means sparrow in Norwegian.

It might be related, idk