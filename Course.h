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
    Course(string code, string name, int max, const Instructor& instr)
        : courseCode(code), courseName(name), maxStudents(max),
          currentStudents(0), instructor(instr) {
        students = new Student[maxStudents];
    }

    string getCourseCode()  { 
      return courseCode; 
    }
    string getCourseName()  {
      return courseName; 
    }
    int getMaxStudents()  { 
      return maxStudents; 
    }
    int getCurrentStudents()  { 
      return currentStudents; 
    }

    void setCourseCode(string& code) {
      courseCode = code; 
    }
    void setCourseName(string& name) { 
      courseName = name; 
    }
    void setMaxStudents(int max) { 
      maxStudents = max; 
    }

    bool addStudent( Student& s) {
        if (currentStudents < maxStudents) {
            students[currentStudents++] = s;
            return true;
        }
        return false;
    }

    void displayCourseInfo()  {
        cout << "Course: " << courseName << " " << courseCode << endl;
        cout << "Max students: " << maxStudents << endl;
        cout << "Currently enrolled: " << currentStudents << endl;
        cout << "Instructor info:" << endl;
        instructor.display();
        cout << "Students info:" << endl;
        for (int i = 0; i < currentStudents; ++i) {
            students[i].display();
            cout << endl;
        }
    }
};
#endif
