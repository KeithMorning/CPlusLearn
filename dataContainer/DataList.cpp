//
// Created by KeithXi on 2021/5/20.
//

#include "DataList.h"
#include <string>
#include <array>
#include <iostream>

using std::deque;
using std::list;
using std::vector;
using std::string;
using std::forward_list;
using std::array;


std::list<std::deque<int>> & DataList::makeTestList(std::list<std::deque<int>> & ls) {

    for(int i = 0;i < 10; ++i){
        auto q = deque<int>();
        q.push_back(i);
        ls.push_back(q);
    }

    return ls;
}

bool DataList::findNum(const std::vector<int> &nums,int val) {
    auto begin = nums.begin();
    auto end = nums.end();
    while (begin != end){
        if(val == *begin){
            return true;
        }
        ++begin;
    }

    return false;
}

void DataList::conver() {
    list<string> authors = {"milton","Shakepare","Austen"};
    vector<const char *> article = {"a","an","the"};
    forward_list<string> words(article.begin(),article.end());
    array<int,42>;// int 类型，一共42个 int


    //vector 的 6 种初始化方法
    vector<int> a0(10); //10 个 0
    vector<int> a1(10,3); // 10个3
    vector<int> a2(a1); //拷贝 a1全部
    vector<int> a3 = {1,2,3,4};
    vector<int> a4{1,2,3,4};
    vector<int> a5(a1.begin(),a1.end());


}

void DataList::swapTest() {

    //容器赋值
    //赋值预算会导致左边容器的迭代器，引用，指针失效，而 swap 操作不会失效（array 和 string 除外）
    vector<int> c0 = {1,2,3};
    vector<int> c1 = {4,5,6};

    vector<int> &cc0 = c1;
    std::cout << cc0[1] << std::endl;

    c1 = c0;
    std::cout << cc0[1] << std::endl;

    vector<int> c2 = {1,2,3};
    vector<int> c3 = {4,5,6};

    vector<int> &cc3 = c3;
    std::cout << cc3[1] << std::endl;

    std::swap(c2,c3);
    std::cout << cc3[1] << std::endl;
}

void DataList::crud() {
    vector<int> a;
    a.push_back(1);
    a.emplace_back(2);
    a.front() = 0;
    auto &c = a.back();
    c = -1;


    deque<int> dq;
    dq.push_back(1);
    dq.push_front(2);
    dq.emplace_back(3);
    ++ dq.begin();
    dq.insert(dq.begin(),4);
    dq.emplace(++ dq.begin(),5);
    dq.insert(++dq.begin(),2,6);

    //vector string 或 deque插入元素会使所有指向容器的迭代器，引用和指针失效
    //删除 deque 除首尾之外的元素会导致迭代器，引用，指针失效。指向 vector 或 string 中删除点之后位置的迭代器，引用和指针都会失效

    dq.pop_back();
    dq.erase(dq.begin());
    dq.erase(dq.begin(),dq.begin() + 2);
    dq.clear();


}

void DataList::f_list_crud() {
     forward_list<string> a = {"a","b","c"};
     a.insert_after(a.begin(),"d");
}

std::forward_list<std::string> & DataList::contact(std::forward_list<std::string> &ls, std::string a, std::string b) {
    auto prev = ls.before_begin();
    auto curr = ls.begin();
    while (curr != ls.end()){ //ls.end 指向 nil
        if(*curr == a){
            ls.insert_after(prev,b);
            return ls;
        }
        prev = curr;
        ++curr;
    }

    ls.insert_after(prev,b);
    return ls;
}

std::vector<int> & DataList::removeOdds(std::vector<int> &ve) {
    auto iter = ve.begin();
    while (iter != ve.end()){
        if(*iter % 2) {
            iter = ve.insert(iter,*iter);
            iter += 2; //在给定位置前添加，因此需要+2
        } else{
            iter = ve.erase(iter);
        }
    }
}

void DataList::printVectorInfo() {
    vector<int> a;
    std::cout << "size is " << a.size() << " capacity is " << a.capacity() << std::endl;

    a.push_back(1);
    std::cout << "size is " << a.size() << " capacity is " << a.capacity() << std::endl;
    a.push_back(2);
    std::cout << "size is " << a.size() << " capacity is " << a.capacity() << std::endl;
    a.push_back(3);
    std::cout << "size is " << a.size() << " capacity is " << a.capacity() << std::endl;
}

void DataList::stringTest() {
    string s = "some thing right";
    s.append(" from a leader");
    s.replace(0,5,"hard ");

    string a = "hello";
    a.assign("word");

    std::cout << s << "\n" << a << std::endl;

    auto pos1 = s.find("thing");
    std::string dept("01234");

    int i = 42;
    std::string si = std::to_string(i);
    double d = std::stod(si);


}

void deleOdds(){
    forward_list<int> list = {1,2,3,4,5,6,7};
    auto prev = list.before_begin();
    auto curr = list.begin();

    while (curr != list.end()){
        if(*curr % 2){
            curr = list.erase_after(prev);
        }else{
            prev = curr;
        }
        ++curr;
    }
};