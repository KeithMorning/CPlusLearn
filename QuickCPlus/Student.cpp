//
// Created by KeithXi on 2021/5/11.
//

#include <iostream>
#include <string>

using namespace std;
class Teacher {
private:
    int age;
    friend class Student;
public:
    string name;
    friend void asksystem(Teacher tc);
};

void asksystem(Teacher tc){
    cout << "Teacher age is " << tc.age;
}



class Student {

public:
    Student();
    Student(std::string name);

    Student(std::string n, int a);
    Teacher tc;
    void askTc(){
        tc.age = 10;
    }
    ~Student();
public:
    std::string name;

    int age;
    float score;
    void say();
    Student classmate();
};

Student::Student() {
    using namespace std;
    age = 10;
    name = "default";
    score = 100;
    cout << "student has been created" << endl;
}
void Student::say() {
    using namespace std;

    cout << "name is " << name << " age is " << age << " score is " << score << endl;
}

Student::~Student() {
    using namespace std;
    cout << "student has been release" << endl;
}

Student Student::classmate() {
    Student stu = Student();
    stu.name = "classmate";
    stu.score = 99;
    return stu;
}

Student::Student(std::string n,int a):name(n),age(a) {
    using namespace std;
    age = 10;
    score = 80;
    cout << "student is " << name << endl;
}

namespace Li {
}
