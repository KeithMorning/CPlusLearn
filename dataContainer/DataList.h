//
// Created by KeithXi on 2021/5/20.
//

#ifndef DATACONTAINER_DATALIST_H
#define DATACONTAINER_DATALIST_H
#include <list>
#include <deque>
#include <vector>
#include <forward_list>
#include <string>


//vector 可变数组
//deque 双端队列
//list 双向链表
//forward_list 单向链表
//array 固定数组
//string 类似 vector 的容器

class DataList {
public:
    std::list<std::deque<int>> &makeTestList(std::list<std::deque<int>> &);
    bool findNum(const std::vector<int> &nums, int val);
    void conver();
    void swapTest();
    void crud();
    void f_list_crud();
    std::forward_list<std::string> &contact(std::forward_list<std::string> &,std::string,std::string);
    std::vector<int> &removeOdds(std::vector<int> &ve);
    void printVectorInfo();
    void stringTest();

private:
    void printVectorInfo(const std::vector<int> &);
};


#endif //DATACONTAINER_DATALIST_H
