make:
	lex lexer.l
	yacc -d parser_temp.y
	g++ lex.yy.c y.tab.c -o out

clean:
	rm out y.tab.c y.tab.h lex.yy.c output.dot g1.ps out.ir
	
