//#write student class here
#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
using namespace std;

class Student : public Person {
private:
    int year;
    string major;

public:
    Student();
    Student(string n, int i, int y, string m);

    int getYear();
    string getMajor();

    void setYear(int y);
    void setMajor(string& m);

    void display() override;
};
#endif
