%{    
    #include<stdio.h>
    #include<string.h>
    int ones_count=0;
%}
    

%%
[1]    { ones_count++; }
\n      { /* Ignore newline characters */ }
.       { /* Ignore other characters */ }
%%

int main(int argc, char* argv[]) {

    yyin = fopen("myfile","r");
    yylex();
    

    if (ones_count >= 4) {
        printf("Valid binary string with more than 4 ones\n");
    } else {
        printf("Invalid binary string\n");
    }
    
    return 0;
}
