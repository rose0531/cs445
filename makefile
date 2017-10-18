
120++: lex.yy.o main.o 120gram.tab.o tree.o symtab.o type.o
	gcc -o 120++ lex.yy.o main.o 120gram.tab.o tree.o symtab.o type.o

lex.yy.o: lex.yy.c
	gcc -c -g lex.yy.c

main.o: main.c 120gram.tab.h token.h symtab.h type.h tree.h
	gcc -c -g main.c

120gram.tab.o: 120gram.tab.c 120gram.tab.h nonterm.h
	gcc -c -g 120gram.tab.c

tree.o: tree.c tree.h token.h
	gcc -c -g tree.c

symtab.o: symtab.c symtab.h type.h tree.h nonterm.h 120gram.tab.h
	gcc -c -g symtab.c

type.o: type.c type.h symtab.h tree.h nonterm.h 120gram.tab.h
	gcc -c -g type.c

lex.yy.c: clex.l 120gram.tab.h
	flex clex.l

120gram.tab.c 120gram.tab.h: 120gram.y
	bison -d 120gram.y

clean:
	rm *.o 120++ *~ 120gram.tab.c 120gram.tab.h lex.yy.c