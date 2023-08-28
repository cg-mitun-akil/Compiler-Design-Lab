/*  Lexical Analyser */
%{
    /* NON_TERMINALS */
    #define ERROR -1
    #define _S 1
    #define _A 2
    #define _B 3

    /* TERMINALS */
    #define PLUS 20
    #define MINUS 21
    #define MULTIPLY 22


    /* EXTRA CHARACTERS */
    #define ARROW 51
    #define PIPE 52
    #define WHITESPACE 53
    #define NEWLINE 54
    #define EPSILON 55
%}

S                   (S)
A                   (A)
B                   (B)

plus                (\+)
n                   (n)
multiply            (\*)

arrow               (->)
pipe                (\|)
whitespace          [ \t]+
newline             [ \r\n]+
epsilon             (#)

%%

{S}                {return _S;}
{A}                {return _A;}
{B}                 {return _B;}

{plus}              {return PLUS;}
{n}                 {return MINUS;}
{multiply}          {return MULTIPLY;}


{arrow}               {return ARROW;}
{pipe}                {return PIPE;}
{whitespace}          {return WHITESPACE;}
{newline}             {return NEWLINE;}
{epsilon}             {return EPSILON;}
.                     {return ERROR;}

%%

int yywrap(void) {return 1;}

int main() {
    int token;
    FILE *op = fopen("../text-files/tokenised-grammar.txt", "w");
    yyin = fopen("../text-files/grammar-input.txt", "r");
    while((token=yylex()) != 0) {
        if(token == ERROR) {
            fprintf(op, "ERROR while tokenising!!");
            return 1;
        } else if(token == ARROW) {
            fprintf(op, "- ");
        } else if(token == PIPE) {
            fprintf(op, "| ");
        } else if(token == NEWLINE) {
            fprintf(op, "\n");
        } else if(token == WHITESPACE) {
            continue;
        } else {
            fprintf(op, "%d ", token);
        }
    }
}