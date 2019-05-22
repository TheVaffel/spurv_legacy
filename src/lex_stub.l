%{ 
#include <y.tab.hpp> 
#include <spurv_compiler.h> 
#include <implicit_ids.hpp> 
%} 
%option noyywrap 
%option array 
%option yylineno 
DIGIT [0-9] 
LETTER [a-zA-Z] 
ID_LETTER [a-zA-Z_.-] 
%%
[ \t\r\v] ; // Whitespace 
"//".*\n+ ; // Line comments 
\n+ {  return NEWLINE;} 
= {return EQUALS;} 


%__SEP


{DIGIT}+  { return NUMBER;} 
\"(\\.|[^\\"])*\" { return STRING;} 
#header {return HEADER_KEYWORD;} 
(#out|#in) {return HEADER_IO_KEYWORD;} 
(#uniform) {return HEADER_UNIFORM_KEYWORD;}
(#endfun) {return FUNCTION_END_KEYWORD;}
(#fun) {return FUNCTION_START_KEYWORD;}
(VERTEX_SHADER|FRAGMENT_SHADER|COMPUTE_SHADER) {return HEADER_CLASS;} 
{ID_LETTER}({ID_LETTER}|{DIGIT})* { return IDENTIFIER;} 
\( {return LEFT_PARENTHESIS;}
\) {return RIGHT_PARENTHESIS;}
, {return COMMA_SEPARATOR;}
.  { 
    fprintf(stderr, "Unrecognized token %s\n", yytext); 
    exit(-1); 
   } 
%%
