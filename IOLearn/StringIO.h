//
// Created by KeithXi on 2021/5/19.
//

#ifndef IOLEARN_STRINGIO_H
#define IOLEARN_STRINGIO_H

#include <iostream>
#include <string>
using std::istream;

//string 流 istringstream 或 ostringstream
class StringIO {
public:
    istream &read_stream(istream &in);
    void readText();
};


#endif //IOLEARN_STRINGIO_H
