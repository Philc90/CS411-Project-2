toyScanner: toyScanner.l toyParser.y
	lex toyScanner.l
	yacc -dv toyParser.y
	cp ./save/y.tab.c ./y.tab.c
	gcc -g lex.yy.c y.tab.c -o toyParser

clean:
	rm -f lex.yy.c y.tab.c y.tab.h y.output toyParser
