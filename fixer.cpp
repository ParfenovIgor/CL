#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

const std::string header_file = "Syntax/Absyn.H";
const std::string source_file = "Syntax/Absyn.C";

void fix_header() {
    std::ifstream fin(header_file);
    std::string file, line;

    while (getline(fin, line)) {
        if (line.size() >= 10 && line.substr(0, 10) == "class List" && line.back() != ';') {
            std::stringstream sline(line);
            std::string name;
            sline >> name >> name;
            file += line + "\n";
            getline(fin, line);
            file += line + "\n";
            getline(fin, line);
            file += line + "\n";
            file += "  " + name + "();\n";
            file += "  " + name + "(const " + name + " &);\n";
        }
        else {
            file += line + "\n";
        }
    }
    
    fin.close();
    
    std::ofstream fout(header_file);
    fout << file;
    fout.close();
}

void fix_source() {
    std::ifstream fin(source_file);
    std::string file, line;

    while (getline(fin, line)) {
        if (line.size() >= 28 && line.substr(0, 28) == "/********************   List") {
            std::stringstream sline(line);
            std::string name;
            sline >> name >> name;
            file += line + "\n\n";
            file += name + "::" + name + "() { }\n\n";
            file += name + "::" + name + "(const " + name + " & other) {\n  for (auto i : other)\n    push_back(i->clone());\n}\n";
        }
        else {
            file += line + "\n";
        }
    }
    
    fin.close();
    
    std::ofstream fout(source_file);
    fout << file;
    fout.close();
}

int main() {
    fix_header();
    fix_source();
    return 0;
}

