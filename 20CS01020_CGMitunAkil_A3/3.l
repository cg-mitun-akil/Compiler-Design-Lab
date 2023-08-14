%{
#include <stdio.h>
%}

%option noyywrap

%%
"INT"|"int"|"FLOAT"|"float"|"CHAR"|"char"   { printf("(data_type, %s)\n", yytext); }
"if"                                       { printf("(if, %s)\n", yytext); }
"for"|"while"                              { printf("(loop, %s)\n", yytext); }
"display"                                 { printf("(display, %s)\n", yytext); }
"input"                                   { printf("(input, %s)\n", yytext); }
"main"                                    { printf("(function, %s)\n", yytext); }
"=="|"!="|"<"|">"|"<="|">="                { printf("(relational_op, %s)\n", yytext); }
"="                                       { printf("(assignment_op, %s)\n", yytext); }
"+"|"-"|"*"|"/"                             { printf("(arithmetic_op, %s)\n", yytext); }
"("|")"|"{"|"}"|";"|","                    {}
[a-zA-Z][a-zA-Z0-9_]*                      { printf("(identifier, %s)\n", yytext); }
[0-9]+\.[0-9]+([eE][-+]?[0-9]+)?|[0-9]+[eE][-+]?[0-9]+          { printf("(float_constant, %s)\n", yytext); }

[0-9]+                                     { printf("(integer_constant, %s)\n", yytext); }
\'[a-zA-Z]\'                               { printf("(char_constant, %s)\n", yytext); }
[ \t\n]                                    {}
.                                          {}
%%

int main() {
    int token;
    yyin = fopen("myfile", "r");
    
    while ((token = yylex()) != 0) {
        // Loop in the Lex rules takes care of printing the format
    }

    return 0;
}
