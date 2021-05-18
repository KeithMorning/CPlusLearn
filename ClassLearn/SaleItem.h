//
// Created by KeithXi on 2021/5/18.
//

#ifndef CLASSLEARN_SALEITEM_H
#define CLASSLEARN_SALEITEM_H
#include <iostream>
#include <string>

struct Sales_data{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    Sales_data() = default;

    //带默认值的和初始化的析构函数
    Sales_data(const std::string &s) : bookNo(s),units_sold(0),revenue(0){}

    Sales_data& combine(const Sales_data&);
    double avg_price() const;
    std::string isbn() const {return bookNo;};
};

class Screen {
public:
    typedef std::string::size_type pos;
    Screen(pos ht, pos wd, char c):height(ht),width(wd),contents(ht*wd,c){}
    Screen():Screen(0,0,'X'){};// 委托构造函数
    char get() const {
        return contents[cursor];
    }

    inline char get(pos ht, pos wd) const;
    Screen &set(char c);
    Screen &move(pos r,pos c);
    //根据 const 重载函数
    Screen &display(std::ostream &os){do_display(os);return  *this;}
    const Screen &display(std::ostream &os)const { do_display(os); return *this;}
    void dosomecall() const;
    pos size() const;

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
    mutable size_t accsess_ctr;
    void do_display(std::ostream &os) const { os << contents; }
};

#endif //CLASSLEARN_SALEITEM_H
