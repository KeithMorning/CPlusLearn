//
// Created by KeithXi on 2021/5/18.
//

#include "SaleItem.h"
#include <string>
#include <iostream>



Sales_data add(const Sales_data&,const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);

double Sales_data::avg_price() const {
    if(units_sold){
        return revenue / units_sold;
    }else{
        return 0;
    }
}

Sales_data& Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this; //返回原始指针的指向的内存区域
}
// 使用 class 和 struct 定义的唯一区别就是默认的访问权限
// class 默认是 private 而 struct 默认是 public
class Person {
    std::string _name;
    std::string name() { return _name;};

};

std::istream &read(std::istream &is, Sales_data &item){
    double price = 0;
    is >> item.bookNo >>item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

Screen & Screen::move(pos r, pos c) {
    pos row = r * width;
    cursor = row + c;
    return *this;
}

char Screen::get(pos r, pos c)  const {
    pos row = r * width;
    return contents[row + c];
}

void Screen::dosomecall() const {
    ++accsess_ctr;// 及时在一个 const 的对象内，它的 mutable 修饰的对象也可以被修改。
}

Screen &Screen::set(char c) {
    contents[cursor] = c;
    return *this;
}

Screen::pos Screen::size() const {
    return height * width;
}
