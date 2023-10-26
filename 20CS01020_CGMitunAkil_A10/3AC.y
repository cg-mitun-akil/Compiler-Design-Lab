%{ 
    #include <stdio.h> 
    #include <stdlib.h>
    #include <string.h>
    #include "lex.yy.c"
    int flag=0; 
    void yyerror(char *str);
    void new_variable();
    int new_line_label();
    
    int variable_count = 0;
    int line_label_count = 0;
    
    char variable[10];
    int else_ref = 0;
    int if_true_ref = 10;  
    int while_ref = 0;
    int while_false_ref = 0;
    FILE *output ; 
%} 

/* Definitions */

%token AND ASSIGN COLON DIV ELSE END EQ  GE GLOBAL GT IF LEFT_PAREN LE LT MINUS MOD MULT NE NOT OR PLUS PRINT READ RIGHT_PAREN SEMICOLON WHILE 

%left PLUS MINUS
%left MULT DIV MOD
%left AND OR
%nonassoc NOT
%left LEFT_PAREN RIGHT_PAREN
%nonassoc IF
%nonassoc ELSE

%start S

%union
{ 	
	char val[100];
}
   
%type<val> Expression Relation_operator Condition
%token<val> ID INT_CONST


/* Rule Section */
%% 
S:          prog {}; 

prog :      GLOBAL Entire_code END { fprintf(output, " exit\n"); };

Entire_code:  
            List_of_statements {} 
            | {};
            
List_of_statements: 
            List_of_statements SEMICOLON 
            Statement {}  
            | Statement {};
            
Statement:       
              assignment_Statement {}
            | read_Statement {}
            | print_Statement {}
            | if_Statement {}
            | while_Statement {};

assignment_Statement: ID ASSIGN Expression { fprintf(output, " %s = %s\n", $1, $3); };

read_Statement:   READ ID 
            { 
                new_variable();
                fprintf(output, " %s = Read %s\n", variable, $2); 
            } ;

print_Statement:  PRINT ID { fprintf(output, " Print %s\n", $2); };

if_Statement:     
            IF Condition 
            {
              new_variable();
              else_ref = new_line_label();
              fprintf(output, " %s = %s\n", variable, $2);
              fprintf(output, "\n If !(%s) goto L%d\n", variable, else_ref); 
            } 
            COLON 
            List_of_statements 
            elsePart 
            END;

elsePart:   ELSE 
            { 
              if_true_ref = new_line_label();
              fprintf(output, " goto L%d\n\n", if_true_ref);
              fprintf(output, " L%d : ", else_ref);
              else_ref--;
            } 
            List_of_statements { fprintf(output, " L%d : ", if_true_ref); }
            | 
            { 
                fprintf(output, " L%d : ", else_ref); 
                else_ref--;
            };

while_Statement:  
            WHILE 
            {
              while_ref = new_line_label();
              fprintf(output, " L%d : ", while_ref);
            } 
            Condition 
            {
              while_false_ref = new_line_label();
              fprintf(output, "\n If !(%s) goto L%d\n", $3, while_false_ref);    
            } 
            COLON 
            List_of_statements 
            {
              fprintf(output, " goto L%d\n\n", while_ref); 
              fprintf(output, " L%d : ", while_false_ref);
              while_false_ref-=2;
              while_ref-=2;
            }
            END;

Condition:  Condition OR Condition 
            {
                new_variable();
                fprintf(output, " %s = %s or %s\n", variable, $1, $3);
                strcpy($$, variable);
            }
            | Condition AND Condition 
            {
                new_variable();
                fprintf(output, " %s = %s and %s\n", variable, $1, $3);
                strcpy($$, variable);
            }
            | NOT Condition 
            {
                new_variable();
                fprintf(output, " %s = !%s\n", variable, $2);
                strcpy($$, variable);
            }
            | LEFT_PAREN Condition RIGHT_PAREN 
            {
                new_variable();
                fprintf(output, " %s = %s\n", variable, $2);
                strcpy($$, variable);
            }
            | Expression Relation_operator Expression 
            {
                new_variable();
                fprintf(output, " %s = %s %s %s\n", variable, $1, $2, $3);
                strcpy($$, variable);
            };

Relation_operator:      
              EQ { strcpy($$, "=="); }
            | LE { strcpy($$, "<="); }
            | LT { strcpy($$, "<"); }
            | GE { strcpy($$, ">="); }
            | GT { strcpy($$, ">"); }
            | NE { strcpy($$, "!="); };

Expression:        
            Expression PLUS Expression 
            {
                new_variable();
                fprintf(output, " %s = %s + %s\n", variable, $1, $3);
                strcpy($$, variable);
            }
            | Expression MINUS Expression 
            {
                new_variable();
                fprintf(output, " %s = %s - %s\n", variable, $1, $3);
                strcpy($$, variable);
            }
            | Expression MULT Expression 
            {
                new_variable();
                fprintf(output, " %s = %s * %s\n", variable, $1, $3);
                strcpy($$, variable);
            }
            | Expression DIV Expression {
                new_variable();
                fprintf(output, " %s = %s / %s\n", variable, $1, $3);
                strcpy($$, variable);
            }
            | Expression MOD Expression {
                new_variable();
                fprintf(output, " %s = %s %% %s\n", variable, $1, $3);
                strcpy($$, variable);
            }
            | MINUS Expression {
                new_variable();
                fprintf(output, " %s = -%s\n", variable, $2);
                strcpy($$, variable);
            }
            | PLUS Expression {
                new_variable();
                fprintf(output, " %s = +%s\n", variable, $2);
                strcpy($$, variable);
            }
            | LEFT_PAREN Expression RIGHT_PAREN {
                new_variable();
                fprintf(output, " %s = %s\n", variable, $2);
                strcpy($$, variable);
            }
            | ID {}
            | INT_CONST {};
%%


int main()
{
    extern FILE *yyin;
    yyin = fopen("input.txt", "r");

    if (yyin == NULL)
    {
        printf("Error in opening file\n");
        return -1;
    }

    output = fopen("out.txt", "w");
    fprintf(output, "3-addr code for the given input is: \n\n");
    yyparse();
    if (flag == 0)
    {
        printf("Program parsed Successfully\n");
    }
}

void yyerror(char *str)
{
    printf("\nError at Line: %d -- %s\n", yylineno, str);
    flag = 1;
}

void new_variable()
{
    char res[10];
    sprintf(res, "t%d", variable_count++);
    strcpy(variable, res);
}

int new_line_label()
{
    int res = line_label_count++;
    return res;
}
