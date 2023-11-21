
%{
	#include<stdio.h>
	#include <string.h>
	#include "PirateScript.tab.h"
	#include<stdlib.h>
	

%}

Datatype "JackSparrow_i"|"Fury_f"| "Charlotte_c" | "DavyJones_d"
identifiers "pirate_"[a-zA-Z]([a-zA-Z0-9])*
arithmatic_operator "booty"|"mutiny"|"gun"|"gold"|"gunPowder"|"fact"
unary_operator "⚓️++"|"⚓️--"|"!⚓️"
logical_operator "&&"|"||"|"!!"
relational_operator "tiny"|"mighty"|"lesseq"|"greateq"|"eqeq"|"noteq"
parenthesis "LeftBow"|"RightBow"|"LeftCannon "|"RightCannon "
assignment_operator [=]|"+="|"-="|"/="|"*="
library_func "IN<"|"OUT>"
integer (-|+)?[0-9]+
float [+-]?[0-9]+[.][0-9]+|[+-]?[.][0-9]+|[1-9]+e[+-][0-9]+
double [+-]?[0-9]+[.][0-9]+{6,12}|[+-]?[.][0-9]+|[1-9]+e[+-][0-9]+{6,12}
char [A-Za-z]+
single_line_comment "📍️".*
multiple_line_comment [ ]*"📌️"[a-zA-Z0-9!@#*(){}_+-,.:\|?><\n\t ]*"📌️"

%%


{single_line_comment} {
	printf("Single line comment\n");

}
{multiple_line_comment} {
	printf("Multiple_line_comment\n");
}

"⚓️++"   {return inc;}
"⚓️--"	{return dec;}
"!⚓️"	{return not;}
{logical_operator}	{return LOGIC;}
"LeftBow"	 { return LeftSecondBracket; }
"RightBow"	  { return RightSecondBracket; }
"kill"    {   return BREAK;     }
"Pirate_Code"      { return CASE;      }
"Code_Book"      { return SWITCH;	}
"Default_Code"     {  return DEFAULT; 	}
"Whale" { return WHILE;}
"JackSparrow_i"	{ return INT; }
"Fury_f"	{ return FLOAT; }
"DavyJones_d"	{return DOUBLE;}
"Charlotte_c"	{ return CHAR; }
":"     { return COL;}
[0-9]+	{ 
		yylval.number = atoi(yytext);
		return NUM;
	}
"Shanty"   { return FOR;}	
"LeftCannon "	{ return LeftBracket; }
"RightCannon "	{ return RightBracket ; }
"yo_ho"	{ return COMMA; }
"🏴‍☠️️"	{ return Statement; }
"booty"	{ return PLUS;}
"mutiny"	{ return MINUS; }
"gun"	{ return MULT; }
"gold"	{ return DIV; }
"gunPowder"	{ return POW; }
"fact"	{ return FACT; }
"loot"		{ return ASSIGN;  }
"mighty"	{ return GT; }
"tiny"	{ return LT; }

{identifiers} {
	 yylval.string=strdup(yytext);
	 return VAR;
	}

"Parley"		{ return IF;}
"Aye"		{ return ELSE;}
"ElseWise"	{ return Else_If; }

"captain "[A-Za-z]+	{ return Main_Function; }
"crew "[A-Za-z]+	{return function;}

[ \t\n]*	

.	{
		yyerror("⚠️ Unknown Keyword.\n");
	}
%%


int main()
{
	yyin = freopen("in.txt","r",stdin);
	yyout = freopen("out.txt","w",stdout);
	yyparse();
	
}

