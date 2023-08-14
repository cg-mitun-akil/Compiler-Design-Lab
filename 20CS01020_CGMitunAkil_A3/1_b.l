%{    
    #include<stdio.h>
    #include<string.h>
    int ones_count=0;
    int zeroes_count=0;
%}


%%
[0]    { zeroes_count++; }
[1]    {  ones_count++; }
\n      { /* Ignore newline characters */ }
.       { /* Ignore other characters */ }
%%

int main(int argc, char* argv[]) {

    yyin = fopen("myfile","r");
    yylex();
    

    if (ones_count%2==0 && zeroes_count%2==0) {
        printf("Valid binary string with even ones and zeros \n");
    } else {
        printf("Invalid binary string\n");
    }
    
    return 0;
}
