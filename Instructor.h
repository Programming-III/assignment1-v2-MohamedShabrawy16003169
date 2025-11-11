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
    Instructor();
    Instructor(string n, int i, string d, int e);

    string getDepartment();
    int getExperienceYears();

    void setDepartment(string& d);
    void setExperienceYears(int e);

    void display() override;
};
#endif
