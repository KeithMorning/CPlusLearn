//
// Created by KeithXi on 2021/5/18.
//

#include "IOLab.h"
#include <fstream>

std::istream & IOLab::read(std::istream &in) {
    auto state = in.rdstate();
    in.clear();
    std::string a;
    while(in >> a){
        std::cout << a << std::endl;
        std::cout << a << std::ends;
        std::cout << a << std::flush;
        std::cout << a << std::unitbuf;
    }
    in.setstate(state);
    return in;
}

std::vector<std::string> IOLab::readfilestr(std::string filename) {
    std::ifstream input;
    input.open(filename);
    std::ofstream out(filename+"copy");

    std::string tmp;
    std::vector<std::string> rs;
    while (getline(input,tmp)){
      rs.push_back(tmp);

      out << tmp << std::endl;
    }
    input.close();
    out.close();

    return rs;
}