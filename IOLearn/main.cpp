#include <iostream>
#include <sstream>
#include <string>
#include "StringIO.h"
#include <stdexcept>

using std::istream;
using std::ostringstream;
using std::istringstream;
using std::string;
using std::cout;
using std::cerr;
using std::endl;
using std::runtime_error;


int main()
{
    ostringstream msg;
    msg<<"C++ Primer 5th edition"<<endl;
    istringstream in(msg.str());
    StringIO sIo = StringIO();
    sIo.read_stream(in);
    sIo.readText();

    return 0;
}