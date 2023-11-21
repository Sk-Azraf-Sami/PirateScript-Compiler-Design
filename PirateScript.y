

%{
	#include<stdio.h>
	#include <math.h>
	int cnt=1,cntt=0,val,track=0;
	typedef struct entry {
    	char *str;
    	int n;
	}storage;
	storage store[1000],sym[1000];
	void insert (storage *p, char *s, int n);
	int cnt2=1; 
	void insert2 (storage *p, char *s, int n);
	#define pi  3.1416
	
%}
%union 
{
        int number;
        char *string;
}


%token <number> NUM
%token <string> VAR 
%token <string> IF Else_If ELSE Main_Function INT FLOAT DOUBLE CHAR LeftBracket RightBracket LeftSecondBracket RightSecondBracket COMMA Statement PLUS MINUS MULT DIV POW FACT ASSIGN FOR COL WHILE BREAK COLON DEFAULT CASE SWITCH inc dec not function  LOGIC
%type <string> statement
%type <number> expression
%type <number> switch_expression
%nonassoc IFX
%nonassoc ELIFX
%nonassoc ELSE
%left LT GT
%left PLUS MINUS
%left MULT DIV
%left FACT
%left POW


%%

program: Main_Function LeftBracket RightBracket LeftSecondBracket cstatement RightSecondBracket { printf("\n-------------Successful compilation-----------------\n"); }
	 ;

cstatement: 

	| cstatement statement
	
	| cdeclaration
	;

cdeclaration:	TYPE ID1 Statement	{ printf("\nvalid declaration of variable\n"); }
   
			;
			
TYPE : INT

     | FLOAT

     | CHAR
     ;

ID1  : ID1 COMMA VAR	{
						if(number_for_key($3))
						{
							printf("%s is already declared\n", $3 );
						}
						else
						{
							insert(&store[cnt],$3, cnt);
							cnt++;
							
						}
			}

     |VAR	{
				if(number_for_key($1))
				{
					printf("%s is already declared\n", $1 );
				}
				else
				{
					insert(&store[cnt],$1, cnt);
							cnt++;
				}
			}
     ;

statement: Statement
	| SWITCH LeftBracket switch_expression RightBracket LeftSecondBracket BASE RightSecondBracket    {printf("Code_Book(SWITCH) and Pirate_Code(case).\n");} 

	| expression Statement 			{ printf("\nvalue of expression: %d\n", ($1)); }

        | VAR ASSIGN expression Statement 		{
							if(number_for_key($1)){
								int i = number_for_key2($1);
								if (!i){
									insert(&sym[cntt], $1, $3);
									cntt++;
								}
								sym[i].n = $3;
								printf("\n(%s) Value of the variable: %d\t\n",$1,$3);
							}
							else {
								printf("%s not declared yet\n",$1);
							}
							
						}

	| IF LeftBracket expression RightBracket LeftSecondBracket expression Statement RightSecondBracket %prec IFX {
								if($3)
								{
									printf("\nvalue of expression in Parley (if): %d\n",($6));
								}
								else
								{
									printf("\ncondition value zero in Parley(if) block\n");
								}
							}

	| IF LeftBracket expression RightBracket LeftSecondBracket expression Statement RightSecondBracket ELSE LeftSecondBracket expression Statement RightSecondBracket {
								 	if($3)
									{
										printf("\nvalue of expression in Parley (if): %d\n",$6);
									}
									else
									{
										printf("\nvalue of expression in Aye (else): %d\n",$11);
									}
								   }
	| IF LeftBracket expression RightBracket LeftSecondBracket IF LeftBracket expression RightBracket LeftSecondBracket expression Statement RightSecondBracket ELSE LeftSecondBracket expression Statement RightSecondBracket expression Statement RightSecondBracket ELSE LeftSecondBracket expression Statement RightSecondBracket %prec IFX {
								 	if($3)
									{
										if($8)
											printf("\nvalue of expression middle Parley (if): %d\n",$11);
										else
											printf("\nvalue of expression middle Aye (else): %d\n",$16);
										printf("\nvalue of expression in first Parley (if): %d\n",$19);
									}
									else
									{
										printf("\nvalue of expression in Aye (else): %d\n",$24);
									}
								   }
	| IF LeftBracket expression RightBracket LeftSecondBracket expression Statement RightSecondBracket Else_If LeftBracket expression RightBracket LeftSecondBracket expression Statement RightSecondBracket ELSE LeftSecondBracket expression Statement RightSecondBracket {
								 	if($3)
									{
										printf("\nvalue of expression in Parley (if): %d\n",$6);
									}
									else if($11)
									{
										printf("\nvalue of expression in ElseWise (Else_If): %d\n",$14);
									}
									else
									{
										printf("\nvalue of expression in Aye (else): %d\n",$19);
									}
								   }							   
	| FOR LeftBracket NUM COL NUM RightBracket LeftSecondBracket expression RightSecondBracket     {
	   int i=0;
	   for(i=$3;i<$5;i++){
	   printf("Shanty(for) loop statement\n");
	   }
	}
	| WHILE LeftBracket NUM GT NUM RightBracket LeftSecondBracket expression RightSecondBracket   {
										int i;
										printf("Whale(While) Loop: ");
										for(i=$3;i<=$5;i++)
										{
											printf("%d ",i);
										}
										printf("\n");
										printf("value of the expression: %d\n",$8);

	}
/*------function begin-----------*/

	| function  func
	;

			func : COL TYPE LeftBracket RightBracket LeftSecondBracket statement RightSecondBracket
							{
								printf("crew(function) is declared\n");
							}
				;


/*-------function end------------*/
	

	
			BASE : Bas   
				 | Bas Dflt 
				 ;

			Bas   : /*NULL*/
				 | Bas Cs     
				 ;

			Cs    : CASE NUM COL expression Statement   {
						
						if(val==$2){
							  track=1;
							  printf("\nPirate_Code(Case) No : %d  and Result :  %d\n",$2,$4);
						}
					}
				 ;

			Dflt    : DEFAULT COL expression Statement    {
						if(track!=1){
							printf("\nResult in default Value is :  %d\n",$3);
						}
						track=0;
					}
				 ;    
	
	
	
expression: NUM				{ $$ = $1; 	}

	| VAR				{ $$ = number_for_key2($1); printf("Variable value: %d",$$);}

	| expression PLUS expression	{ $$ = $1 + $3; }

	| expression MINUS expression	{ $$ = $1 - $3; }

	| expression MULT expression	{ $$ = $1 * $3; }

	| expression DIV expression	{ 	if($3) 
				  		{
				     			$$ = $1 / $3;
				  		}
				  		else
				  		{
							$$ = 0;
							printf("\nWarning: division by zero\t");
				  		} 	
				    	}
	| expression POW expression { $$ = pow($1,$3); }

	| expression FACT {
						int mult=1 ,i;
						for(i=$1;i>0;i--)
						{
							mult=mult*i;
						}
						$$=mult;
						
					 }	

	| expression LT expression	{ $$ = $1 < $3; }

	| expression GT expression	{ $$ = $1 > $3; }

	| LeftBracket expression RightBracket		{ $$ = $2;	}
	
	| inc expression inc         { $$=$2+1; printf("⚓️++ (increment operator): %d\n",$$);}

	| dec expression dec         { $$=$2-1; printf("⚓️-- (decrement operator): %d\n",$$);}

	| not expression not {
						if($2 != 0)
						{
							$$ = 0; printf("!⚓️ (not operator): %d\n",$$);
						}
						else{
							$$ = 1 ; printf("aff: %d\n",$$);
						}
					}
	;



switch_expression: NUM				{ $$ = $1; val = $$;	}

	| VAR				{ $$ = number_for_key2($1); val = $$;}

	| switch_expression PLUS switch_expression	{ $$ = $1 + $3; val = $$; }

	| switch_expression MINUS switch_expression	{ $$ = $1 - $3; val = $$; }

	| switch_expression MULT switch_expression	{ $$ = $1 * $3;  val = $$;}

	| switch_expression DIV switch_expression	{ 	if($3) 
				  		{
				     			$$ = $1 / $3; val = $$;
				  		}
				  		else
				  		{
							$$ = 0;
							 val = $$;
				  		} 	
				    	}
	| switch_expression POW switch_expression { $$ = pow($1,$3);  val = $$;}

	| switch_expression FACT {
						int mult=1 ,i;
						for(i=$1;i>0;i--)
						{
							mult=mult*i;
						}
						$$=mult; val = $$;
						
					 }	

	| switch_expression LT switch_expression	{ $$ = $1 < $3; val = $$; }

	| switch_expression GT switch_expression	{ $$ = $1 > $3;  val = $$;}

	| LeftBracket switch_expression RightBracket		{ $$ = $2;	 val = $$;}
	
	| inc switch_expression inc         { $$=$2+1; printf("⚓️++ (increment operator): %d\n",$$); val = $$;}

	| dec switch_expression dec         { $$=$2-1; printf("⚓️-- (decrement operator): %d\n",$$); val = $$;}

	| not switch_expression not {
						if($2 != 0)
						{
							$$ = 0; val = $$;
						}
						else{
							$$ = 1 ; val = $$;
						}
					}
	;
%%


void insert(storage *p, char *s, int n)
{
  p->str = s;
  p->n = n;
}

int number_for_key(char *key)
{
    int i = 1;
    char *name = store[i].str;
    while (name) {
        if (strcmp(name, key) == 0)
            return store[i].n;
        name = store[++i].str;
    }
    return 0;
}

void insert2 (storage *p, char *s, int n)
{
  p->str = s;
  p->n = n;
  
}

int number_for_key2(char *key)
{
    int i = 1;
    char *name = sym[i].str;
    while (name) {
        if (strcmp(name, key) == 0)
            return i;
        name = sym[++i].str;
    }
    return 0;
}



int yywrap()
{
return 1;
}


yyerror(char *s){
	printf( "%s\n", s);
}

