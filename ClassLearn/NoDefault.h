//
// Created by KeithXi on 2021/5/18.
//

#ifndef CLASSLEARN_NODEFAULT_H
#define CLASSLEARN_NODEFAULT_H


class NoDefault{
public:
    NoDefault(int val):value(val){};
    static void rate(double );
    static bool debug;
private:
    int value;
};


class C {
public:
    C()=default;
private:
    NoDefault df = NoDefault(2);
};
#endif //CLASSLEARN_NODEFAULT_H
