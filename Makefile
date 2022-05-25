all: syntax interpreter

pdf:	doc/Syntax/Normal.pdf

doc/Syntax/Normal.pdf: doc/Syntax/Normal.tex
	latexmk -output-directory=doc/Syntax/ -pdflatex doc/Syntax/Normal.tex

doc/Syntax/Normal.tex: Syntax/Normal.cf
	bnfc --latex Syntax/Normal.cf -o doc/Syntax/

clean:
	rm -rf Syntax/Normal
	cd doc/Syntax && (latexmk -c; cd ../..)

syntax: Syntax/Normal/TestNormal

Syntax/Normal/TestNormal: Syntax/Normal.cf
	mkdir -p Syntax/Normal/
	cd Syntax/Normal/ && (bnfc -m --cpp ../Normal.cf; cd ../../)
	cd Syntax/Normal/ && (make; cd ../../)

update:
	cd Syntax/Normal && (g++ Absyn.C -c)

interpreter: main.c
	g++ main.c -c
	g++ main.o Syntax/Normal/Absyn.o Syntax/Normal/Parser.o Syntax/Normal/Lexer.o Syntax/Normal/Printer.o -o cli

.PHONY: all clean
