#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

//#write Person class here
class Person {
private:
    string name;
    int id;

public:
    Person() : name(""), id(0) {}
    Person(string n, int i) : name(n), id(i) {}

    string getName(){ 
      return name; 
    }
    int getId() { 
      return id; 
    }

    void setName(string& n) { 
      name = n; 
    }
    void setId(int i) { id = i; }

    virtual void display(){
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};
#endif
