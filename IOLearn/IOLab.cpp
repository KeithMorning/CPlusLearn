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
    // 模式 in 只读模式
    // out 写模式
    // app 每次写操作前均定位到文件末尾
    // ate 打开文件后立即定位到文件末尾
    // trunc 截断文件
    // binary 以二进制方式进行 IO
    input.open(filename); // 默认为 in
    std::ofstream out(filename+"copy"); //默认为 out

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