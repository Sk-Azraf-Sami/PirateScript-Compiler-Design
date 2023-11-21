bison -d PirateScript.y
flex PirateScript.l
gcc -o PirateScript.out PirateScript.tab.c lex.yy.c -lm # to link math library use lm flag 
./PirateScript.out

