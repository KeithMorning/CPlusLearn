//
// Created by KeithXi on 2021/5/17.
//

#include "functionLearn.h"
#include <initializer_list>
#include <string>
#include <iostream>
#include <vector>

using std::initializer_list;
using std::string;
void error_msg(std::initializer_list<std::string> il){
    for (auto beg = il.begin(); beg != il.end(); ++beg){
        std::cout << *beg << std::endl;
    }
    std::cout << std::endl;

}


bool str_subrange(const string &str1, const string &str2){
    if(str1.size() == str2.size()){
        return str1 == str2;
    }
    auto size = (str1.size() > str2.size()) ? str1.size() : str2.size();
    for(decltype(size) i = 0; i != size; ++i){
        if(str1[i] != str2[i]){
            return false;
        }
    }
    return true;
}

char &get_val(string &str, string::size_type ix){
    return str[ix];
}

int &get_val(int *array,int index){
    return array[index];
}

void printvect(std::vector<string> a){
    if(a.empty()){
        return;
    }
    string tmp = a.at(0);
    std::cout << tmp << std::endl;
    std::vector<string> b(++a.begin(),a.end());
    printvect(b);
}