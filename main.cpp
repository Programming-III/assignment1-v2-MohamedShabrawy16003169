#include <iostream>
#include <string>
using namespace std;

// ==================== Person Class Implementation =========================
class Person {
private:
    string name;
    int id;

public:
    Person() : name(""), id(0) {}
    Person(string n, int i) : name(n), id(i) {}

    string getName() { 
       return name; 
    }
    int getId() { 
       return id;
    }

    void setName(string n) { 
       name = n; 
    }
    void setId(int i) {
       id = i; 
    }

    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

// ==================== Student Class Implementation ====================
class Student : public Person {
private:
    int year;
    string major;

public:
    Student() : Person(), year(0), major("") {}
    Student(string n, int i, int y, string m) : Person(n, i), year(y), major(m) {}

    int getYear() { 
       return year;
    }
    string getMajor() { 
       return major; 
    }

    void setYear(int y) { 
       year = y;
    }
    void setMajor(string m) { 
       major = m; 
    }

    void display() {
        cout << "Name: " << getName() << endl;
        cout << "Year: " << year << endl;
        cout << "Major: " << major << endl;
    }
};

// ==================== Instructor Class Implementation ====================
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

    void setDepartment(string d) {
       department = d;
    }
    void setExperienceYears(int e) { 
       experienceYears = e;
    }

    void display() {
        cout << "Name: " << getName() << endl;
        cout << "Department: " << department << endl;
        cout << "Experience: " << experienceYears << endl;
    }
};

// ==================== Course Class Implementation ====================
class Course {
private:
    string courseCode;
    string courseName;
    int maxStudents;
    int currentStudents;
    Student* students;
    Instructor instructor;

public:
    Course(string code, string name, int max, Instructor instr)
        : courseCode(code), courseName(name), maxStudents(max),
          currentStudents(0), instructor(instr) {
        students = new Student[maxStudents];
    }

    string getCourseCode() { 
       return courseCode; 
    }
    string getCourseName() { 
       return courseName; 
    }
    int getMaxStudents() { 
       return maxStudents;
    }
    int getCurrentStudents() { 
       return currentStudents; 
    }

    bool addStudent(Student s) {
        if (currentStudents < maxStudents) {
            students[currentStudents++] = s;
            return true;
        }
        return false;
    }

    void displayCourseInfo() {
        cout << "Course: " << courseName << " (" << courseCode << ")" << endl;
        cout << "Max students: " << maxStudents << endl;
        cout << "Currently enrolled: " << currentStudents << endl << endl;
        cout << "Instructor info:" << endl;
        instructor.display();
        cout << endl << "Students info:" << endl;
        for (int i = 0; i < currentStudents; i++) {
            students[i].display();
            cout << endl;
        }
    }
};

// ==================== Main Function ====================
int main() {
    Instructor instr("Dr. Lina Khaled", 1001, "Computer Science", 10);

    Course course("CS101", "Introduction to Programming", 3, instr);

    Student s1("Shabrawy", 2006, 2, "Computer Science");
    Student s2("Youssef", 2006, 2, "Engineering");
    Student s3("Mafia", 2006, 2, "BI");

    course.addStudent(s1);
    course.addStudent(s2);
    course.addStudent(s3);

    course.displayCourseInfo();

    return 0;
}
