%{ 
   /* Definition section */
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>

  #include "lex.yy.c"
  #include "table.h"
  
  void yyerror();

  int flag=0;
%}

%union {
  char Value;
}

%type<Value> G E T F 
%token<Value>ID NUMBER



/* Precedence section */
%left '+' '-'
%left '*' '/' 
%left '%'
%left '(' ')'


%start G

/* Rule Section */
%%
G: E  { 
        $$ = $1;
        printResult();
        return 0; 
      };

E: E'+'T { 
            char AddCode = addToTable($1, '+', $3);
            $$ = AddCode; 
            
         }
|  E'-'T { 
            char MinusCode = addToTable($1, '-', $3);
            $$ = MinusCode;
            
         }
|  T     { $$ = $1; };

T: T'*'F {  
            char MulCode = addToTable($1, '*', $3);
            $$ = MulCode;
            
         }
|  T'/'F { 
            char DivCode = addToTable($1, '/', $3);
            $$ = DivCode; 
            
         }
|   F    { $$ = $1; }; 

F: ID       { $$ = $1; }
|  NUMBER   { $$ = $1; }
| '('E')'   { $$ = $2; }
%%


// driver code
void main()
{
    printf("Enter any arithmetic expression of whole numbers or single character identifiers with +,-,*,/ only\n");
    yyparse();
}

void yyerror()
{
    printf("Entered arithmetic expression is invalid\n");
    flag = 1;
}