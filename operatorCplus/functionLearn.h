//
// Created by KeithXi on 2021/5/17.
//

#ifndef OPERATORCPLUS_FUNCTIONLEARN_H
#define OPERATORCPLUS_FUNCTIONLEARN_H
#include <initializer_list>
#include <string>

void error_msg(std::initializer_list<std::string> il);
char &get_val(std::string &str, std::string::size_type ix);
int &get_val(int *array,int index);
void printvect(std::vector<std::string> a);
#endif //OPERATORCPLUS_FUNCTIONLEARN_H
