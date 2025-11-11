#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
//#write Instructor class here
class Instructor : public Person {
private:
    string department;
    int experienceYears;

public:
    Instructor() : Person(), department(""), experienceYears(0) {}
    Instructor(string n, int i, string d, int e)
        : Person(n, i), department(d), experienceYears(e) {}

    string getDepartment() { 
      return department; 
    }
    int getExperienceYears() { 
      return experienceYears;
    }

    void setDepartment( string& d) { 
      department = d; 
    }
    void setExperienceYears(int e) { 
      experienceYears = e;
    }

    void display()  override {
        cout << "Name: " << getName() << endl;
        cout << "Department: " << department << endl;
        cout << "Experience: " << experienceYears << endl;
    }
};
#endif
