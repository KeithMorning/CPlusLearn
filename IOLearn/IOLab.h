//
// Created by KeithXi on 2021/5/18.
//

#ifndef IOLEARN_IOLAB_H
#define IOLEARN_IOLAB_H
#include <iostream>
#include <vector>

class IOLab {
public:
   std::istream &read(std::istream &);
   std::vector<std::string> readfilestr(std::string filename);

};


#endif //IOLEARN_IOLAB_H
