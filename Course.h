#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here

class Course {
private:
    string courseCode;
    string courseName;
    int maxStudents;
    int currentStudents;
    Student* students;
    Instructor instructor;

public:
    Course(string code, string name, int max, Instructor& instr);

    string getCourseCode();
    string getCourseName();
    int getMaxStudents();
    int getCurrentStudents();

    bool addStudent(Student& s);
    void displayCourseInfo();
};

#endif
