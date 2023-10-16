%{ 
   /* Definition section */
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  
  #include "Node.h"
  #include "lex.yy.c"
  
  void yyerror();

  int flag=0;
%}

%union {
  node *Node;
  char Value;
}

%type<Node> G E T F
%type<Value> NUMBER
%type<Value> ID


%token NUMBER
%token ID 


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
        print($$);
        return 0; 
      };

E: E'+'T { 
            char temp[100];
            sprintf(temp,"%s + %s", $1->expression, $3->expression);
        
            node *PlusNode = processOperationNode(temp, 1, '+', $1, $3);
            $$ = PlusNode; 
            
         }
|  E'-'T { 
            char temp[100];
            sprintf(temp,"%s - %s", $1->expression, $3->expression);
            
            node *MinusNode = processOperationNode(temp, 1, '-', $1, $3);
            $$ = MinusNode; 
            
         }
|  T     { $$ = $1; };

T: T'*'F {  
            char temp[100];
            sprintf(temp,"%s * %s", $1->expression, $3->expression);
            
            node *MulNode = processOperationNode(temp, 1, '*', $1, $3);
            $$ = MulNode; 
            
         }
|  T'/'F { 
            char temp[100];
            sprintf(temp,"%s / %s", $1->expression, $3->expression);
            
            node *DivNode = processOperationNode(temp, 1, '/', $1, $3);
            $$ = DivNode; 
            
         }
|   F    { $$ = $1; }; 

F: NUMBER   { 
            char temp[100];
            sprintf(temp,"%d", $1);
            
            node *NUMBERNode = processOperationNode(temp, 0, $1, NULL, NULL);
            $$ = NUMBERNode; 
            
        }
F: ID  { 
            char temp[100];
            sprintf(temp,"%c", $1);
            
            node *IDNode = processOperationNode(temp, 0, $1, NULL, NULL);
            $$ = IDNode; 
            
        }
| '('E')' { $$ = $2; }
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