#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
//#write student class here

class Student : public Person {
private:
    int year;
    string major;

public:
    Student() : Person(), year(0), major("") {}
    Student(string n, int i, int y, string m) : Person(n, i), year(y), major(m) {}

    int getYear()  { 
      return year; 
    }
    string getMajor(){ 
      return major; 
    }

    void setYear(int y) { 
      year = y; 
    }
    void setMajor(string& m) {
      major = m;
    }

    void display()override {
        cout << "Name: " << getName() << endl;
        cout << "Year: " << year << endl;
        cout << "Major: " << major << endl;
    }
};












#endif
