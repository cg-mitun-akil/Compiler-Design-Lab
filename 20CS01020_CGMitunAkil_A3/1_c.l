%{    
    #include<stdio.h>
    #include<string.h>
    int length=0;
    int flag_a=0,flag_b=0,ans_flag=0;
%}


%%
[a]    { if(flag_a)ans_flag = 1; flag_a = 1; flag_b=0; length++; }
[b]    { if(flag_b)ans_flag = 1; flag_b = 1; flag_a=0; length++;  }
[c]    {  flag_a=0; flag_b=0; length++;}
\n      { /* Ignore newline characters */ }
.       { /* Ignore other characters */ }
%%

int main(int argc, char* argv[]) {

    yyin = fopen("myfile","r");
    yylex();
    

    if (ans_flag && length==8) {
        printf("Valid binary string with length 8 and having aa or bb\n");
    } else {
        printf("Invalid binary string\n");
    }
    
    return 0;
}
