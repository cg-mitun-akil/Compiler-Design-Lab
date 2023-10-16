%{ 
/* Definition section */
  #include "calc.tab.h"
%}

id			[a-z]
digits		[0-9]+
operators 	(\+|\*|\-|\/|\%)
parantheses [()]
/* Rule Section */
%% 
{id} 			{ 
					yylval.Value = yytext[0];
					return ID; 
		 		} 
{digits} 		{ 
					yylval.Value = atoi(yytext);
					return NUMBER; 
		 		} 
{operators} 	{ return yytext[0]; } 
{parantheses} 	{ return yytext[0];}
[\t\n ]     	{ return 0; }
.				{ printf("Invalid operator %s", yytext); exit(0); }
%% 

int yywrap() 
{ 
	return 1; 
}