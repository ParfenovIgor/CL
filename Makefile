all: syntax interpreter

clean:
	rm -rf Syntax

syntax: syntax.cf
	mkdir -p Syntax/
	cd Syntax/ && (bnfc -m --cpp ../syntax.cf; cd ../../)
	cd Syntax/ && (make; cd ../../)
	g++ fixer.cpp -o fixer
	./fixer
	cd Syntax && (g++ Absyn.C -c)

interpreter: main.c
	g++ main.c -c
	g++ main.o Syntax/Absyn.o Syntax/Buffer.o  Syntax/Lexer.o Syntax/Parser.o Syntax/Printer.o -o cli

.PHONY: all clean
