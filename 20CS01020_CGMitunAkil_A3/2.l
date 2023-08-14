%{
#include<stdio.h>
#define ERROR -1
int line_number = 1;
%}

whitespace [ \t]
letter [a-zA-Z]
digit [0-9]
integer ({digit}+)
number ({integer}(\.{integer})?([eE][-+]?{integer})?)
l_or_d ({letter}|{digit})
identifier ({letter}{l_or_d}*)
operator [-+*/<>=]+
separator [;,(){}]
reserved_keywords "int"|"float"|"if"|"then"|"else"|"else if"|"while"

%%
{number}     { return 1; }
{reserved_keywords} {return 3;}
{identifier} { return 2; }
{operator}   { return (int)yytext[0]; }
{separator}  { return (int)yytext[0]; }
{whitespace} { /* Ignore whitespace */ }
\n           { line_number++; }
.            { /* Ignore other characters */ }
%%

int main() 
{
    int token;
    yyin = fopen("myfile", "r");
    while ((token = yylex()) != 0) {
        if (token == 1)
            printf("(number, %s)\n", yytext);
        else if (token == 3)
            printf("(%s, )\n", yytext);
        else if (token == 2)
            printf("(id, %s)\n", yytext);
        else if (token == '+' || token == '-' || token == '*' || token == '/')
            printf("(relop, %c)\n", token);
        else if (token == '<' || token == '>' || token == '=')
            printf("(relop, %s)\n", yytext);
    }
    printf("lines %d \n", line_number);
    return 0;
}
