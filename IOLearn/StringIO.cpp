//
// Created by KeithXi on 2021/5/19.
//

#include "StringIO.h"
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using std::string;
using std::vector;

istream & StringIO::read_stream(istream &in) {
    std::string tmp;

    while (in >> tmp, !in.eof()){
        if(in.bad()){
            throw std::runtime_error("IO Stream Error");
        }
        if(in.fail()){
            std::cerr << "Data error! try again!";
            in.clear();
            in.ignore(100,'\n');
            continue;
        }
        std::cout << tmp << std::endl;
    }
    in.clear();
    return in;
}

void StringIO::readText() {
    std::ifstream in("txt.py");
    if(!in){
        std::cerr << "Can't open input file" << std::endl;
        return;
    }

    string line;
    vector<string> words;
    while (getline(in,line)){
        words.push_back(line);
    }
    in.close();

    vector<string>::const_iterator it = words.begin();

    while (it != words.end()){
        std::istringstream line_str(*it);
        string word;
        while(line_str >> word){
            std::cout << word <<std::endl;
        }

        ++it;
    }
}