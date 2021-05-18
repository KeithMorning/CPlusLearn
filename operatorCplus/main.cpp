#include <iostream>
#include "functionLearn.h"
#include <string>
#include <vector>

//左值和右值的区别


int main() {

    int i = 3;
    int j = 2;
    int k = 3;
    auto c = i != j < k;
    std::cout << c;

    unsigned char bits = 0233;
    bits << 8;
    bits >> 3;
    ~bits;

    error_msg({"-s","s2","s3"});
//    error_msg({"-c","c2","c3"});

    std::string s("a value");
    get_val(s,0) = 'A';
    std::cout << s << std::endl;

    int arry[10];
    for(int i = 0; i != 10; ++i){
        get_val(arry,i) = i;
    }

    std::cout << arry[0] << std::endl;
    std::vector<std::string> pa{"a","b"};
    printvect(pa);

    return 0;

}
