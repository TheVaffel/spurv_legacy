# Spurv

Spurv is a language closely related to Khrono's [SPIR-V assembly syntax](https://github.com/KhronosGroup/SPIRV-Tools/blob/master/syntax.md), but with some changes aimed at making SPIR-V easier to write by hand.

A small comparison to Khrono's specification:
- Spurv has all the same operations, but with the 'Op'-part taken away, as well as converting all operation keywords from _PascalCase_ to _camel_case_. Thus, e.g. `OpTypePointer` becomes `type_pointer`, but ending capitals are kept, so that e.g. `OpGroupIAddNonUniformAMD` becomes `group_i_add_non_uniform_AMD`. 
- All enums have their original form (`Shader`, `Name` etc.)
- Free-form variable names as result id's are supported
- Result id's from operations are declared as an operand. In this way, Spurv lies closer to the physical binary format. This might change, as I have realized how much Khrono's choice to place assignments in C-style greatly eases reading and writing of code.

## Build

The build is only tested on Linux. The Makefile should do everything necessary. Dependencies:
- Python3
- Flex
- Yacc
- g++ (std C++11)

In addition, an example is provided, one that makes use of [HConLib](https://github.com/TheVaffel/HConLib)'s Wingine framework. Thus, this is required for the example ("test"). A small modification of the HCONLIB_ROOT path in the test's Makefile should make everything work when the dependencies are in place.

## TODO

- The language has a large amount of keywords (one for each operation and enum), and might thus be hard to write without triggering a name collission. A grammar file for common editors (primarily Emacs and Vim) could help to avoid this.
- As mentioned, the result assignment is a bit non-intuitive at times. A reordering of the operands (in front of the operation keyword) close to that of Khrono's SPIRV text format might help with this.

## Etymology

Spurv means sparrow in Norwegian.

It might be related, idk