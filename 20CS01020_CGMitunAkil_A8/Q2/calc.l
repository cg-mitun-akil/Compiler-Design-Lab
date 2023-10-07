%{ 
	#include "calc.tab.h"
	extern int yylval; 
%}


digits 		[0-9]+
operators 	(\+|\*|\-|\/|\%)
parantheses [()]
/* Rule Section */
%% 
{digits} 	  { 
				yylval=atoi(yytext); 
				return NUMBER; 
		 	  }  
{operators}   { return yytext[0]; } 
{parantheses} { return yytext[0]; } 
[\t\n ]       { return 0; }
.              {return -1; }
%% 
int yywrap() 
{ 
	return 1; 
}
