#include <iostream>
#include "DataList.h"
#include <deque>

void testList(){
    DataList dl = DataList();
    auto ls = std::list<std::deque<int>>();
    auto q = dl.makeTestList(ls);
    for(auto c : q){
        std::cout << c.at(0) <<std::endl;
    }

    dl.swapTest();

    std::forward_list<std::string> a = {"a","b","c","d"};
    dl.contact(a,"c","ccc");
    dl.contact(a,"g","ggg");

    dl.printVectorInfo();
    dl.stringTest();
}

int main() {
    testList();
    return 0;
}
