%{
#include <stdio.h>
#include <spurv_compiler.h>
#define YYSTYPE value_t*
 
void register_identifier_definition(value_t* opcode);

 int result_indices[] = {
  %__SEP // This makes sure we can interleave stub code and generated code
 };

%}

%token NEWLINE

%token MAYBE_NEWLINE
%token IDENTIFIER
%token NUMBER
%token STRING
%token EQUALS
%token HEADER_KEYWORD
%token HEADER_CLASS
%token HEADER_IO_KEYWORD
%token HEADER_UNIFORM_KEYWORD

%__SEP

%%

program: header body {} | body {};
header: HEADER_KEYWORD header_name NEWLINE header_subentry_list 
      { 
          $$ = $2; 
          $$->next = $3; 
          register_header_definition($$); 
      }; 

header_subentry_list: header_subentry_list header_subentry 
      { 
          register_header_entry($2);} | 
          header_subentry {register_header_entry($1); 
      }; 

header_subentry: io_keyword_reference identifier_reference identifier_reference NEWLINE 
      { 
          $$ = $1; 
          $1->next = $2; 
          $2->next = $3; 
          add_future_identifier_definition($3->string); 
      } 
      | uniform_keyword_reference number_reference number_reference identifier_reference identifier_reference NEWLINE 
      { 
          $$ = $1; 
          $1->next = $2; 
          $2->next = $3; 
          $3->next = $4; 
          $4->next = $5; 
          add_future_identifier_definition($5->string); 
      }; 

body: instruction_list {} 
      | 
      instruction_list NEWLINE {}; 

instruction_list: instruction_list NEWLINE instruction {} 
      | 
      instruction {} ; 

instruction: opcode argument_list { 
          $1->next = $2; 
          register_identifier_definition($1); 
          // print_value_chain($2); 
          // printf("\n"); 
      } | 
      identifier_reference EQUALS opcode argument_list { 
          $3->next = $4; 
          int ind = result_indices[$3->operation_number]; 
          if(put_into_chain(ind, $1, $3) <= ind){ 
              printf("Not enough arguments in assignment at line %d\n", yylineno-1); 
              exit(-1); 
          } 
          register_identifier_definition($3); 
      }; 

argument_list: argument_list argument { 
          $$ = $2; 
          $$->next = $1; 
      } | 
      { $$ = NULL;} ; 


argument:

%__SEP
number_reference { 
      $$ = $1; 
      } | 
STRING { 
          char* c = (char*)malloc(strlen(yytext)-1); 
          memcpy(c, yytext + 1, strlen(yytext) - 2); 
          c[strlen(yytext) - 2] = 0; 
          $$ = construct_value_string(c, NULL); 
      } | 

identifier_reference { 
          $$ = $1; 
      };
identifier_reference: IDENTIFIER { 
          $$ = construct_value_identifier(strdup(yytext), NULL); 
          register_identifier($$->string); 
      }
number_reference: NUMBER { 
          $$ = construct_value_number(strtol(yytext,NULL, 10), NULL); 
      };
header_name: HEADER_CLASS { 
          $$ = construct_value_string(strdup(yytext), NULL); 
      };
io_keyword_reference: HEADER_IO_KEYWORD { 
          $$ = construct_value_string(strdup(yytext), NULL); 
      };
uniform_keyword_reference: HEADER_UNIFORM_KEYWORD { 
          $$ = construct_value_string(strdup(yytext), NULL); 
      };

opcode:
%__SEP

;

%%

int yyerror (const char *error) { 
          fprintf(stderr, "%s on line %d\n", error, yylineno); 
          exit(-1); 
      }
void register_identifier_definition(value_t* opcode){ 
          if (result_indices[opcode->operation_number] >= 0){
              value_t* v; 
              get_value_in_chain(&v, result_indices[opcode->operation_number], opcode); 
              v->type = VALUE_TYPE_IDENTIFIER_DEFINITION; 
              add_future_identifier_definition(v->string); 
          } 
      }
