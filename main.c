#include <cstdio>
#include <string>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <map>
#include "Syntax/Normal/Parser.H"
#include "Syntax/Normal/Printer.H"
#include "Syntax/Normal/Absyn.H"
#include "Syntax/Normal/ParserError.H"

void Print(Type *&type) {
    PrintAbsyn *p = new PrintAbsyn();
    printf("%s\n\n", p->print(type));
}

void Print(Expr *&expr) {
    PrintAbsyn *p = new PrintAbsyn();
    printf("%s\n\n", p->print(expr));
}

void Print(Statement *&expr) {
    PrintAbsyn *p = new PrintAbsyn();
    printf("%s\n\n", p->print(expr));
}

bool Debug = false;

ProgramRoot* ParseFile(std::string);

#include "useful.h"
#include "assemble.h"
#include "to_nameless.h"
#include "shift.h"
#include "nameless_substitution.h"
#include "type_to_nameless.h"
#include "type_shift.h"
#include "type_free.h"
#include "type_substitution.h"
#include "typeof.h"
#include "evaluate.h"

ProgramRoot* ParseFile(std::string filename) {
    FILE *input = fopen(filename.c_str(), "r");
    if (!input) {
        throw "Input file could not be opened";
    }
     
    Program *program = NULL;
    try {
        program = pProgram(input);
    }
    
    catch(parse_error &e) {
        std::cerr << "Parse error on line " << e.getLine() << "\n";
    }
    if (!program)
        return nullptr;
    ProgramRoot *program_root = dynamic_cast <ProgramRoot*> (program);
    fclose(input);
    return program_root;
}

void ProcessProgram(std::string filename) {
    ProgramRoot *program_root = ParseFile(filename);
    if (!program_root)
        return;

    PrintAbsyn *p = new PrintAbsyn();
    
    {
        file_status[filename]++;
        Assemble(program_root);
        file_status[filename]--;
        if (Debug) {
            std::cout << "Assembled" << std::endl;
            printf("%s\n\n", p->print(program_root));
        }
    }
    
    {
        std::vector <Ident> context, context_local;
        ToNameless_ProgramRoot(program_root, context, context_local);
        if (Debug) {
            std::cout << "Nameless" << std::endl;
            printf("%s\n\n", p->print(program_root));
        }
    }
    
    {
        std::vector < std::pair <std::string, Type*> > context_expr, context_local;
        std::vector <Ident> context_type;
        std::vector < std::pair <Type*, Type*> > constraint;

        int var_num = 0;
        TypeOf_ProgramRoot(program_root, context_expr, context_local, context_type, constraint, var_num);
        
        if (Debug) {
            std::cout << "Constraints" << std::endl;
            for (auto i : constraint) {
                printf("%s\n\n", p->print(i.first));
                std::cout << "=" << std::endl;
                printf("%s\n\n\n\n", p->print(i.second));
            }
        }
            
        std::vector < std::pair <Ident, Type*> > subst;        
        TypeUnify(constraint, subst);

        if (Debug) {
            std::cout << "Solution" << std::endl;
            for (auto i : subst) {
                printf("%s =\n", i.first.c_str());
                printf("%s\n\n\n\n", p->print(i.second));
            }
        }
    }

    {
        std::vector < std::pair <Ident, Expr*> > context_local;
        std::vector <Expr*> context_ref;
        Evaluate_ProgramRoot(program_root, context_local, context_ref);
        if (Debug) {
            std::cout << "Evaluated" << std::endl;
            printf("%s\n\n", p->print(program_root));
        }
    }
    
    delete(program_root);
}

int main(int argc, char **argv) {
    if (argc < 2) {
        std::cerr << "Expected path to source file" << std::endl;
    }
    else {
        std::string filename(argv[1]);
        for (int i = 2; i < argc; i++) {
            std::string flag(argv[i]);
            if (flag == "-d")
                Debug = true;
        }
        try {
            ProcessProgram(filename);
        }
        catch (const char *error) {
            printf("%s\n", error);
        }
    }
    
    return 0;
}

