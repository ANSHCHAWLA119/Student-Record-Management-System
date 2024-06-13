#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
    int age;
    string course;

public:
    Student();
    Student(int id, string name, int age, string course);

    int getID() const;
    string getName() const;
    int getAge() const;
    string getCourse() const;

    void setName(const string &name);
    void setAge(int age);
    void setCourse(const string &course);

    void display() const;
};

#endif
