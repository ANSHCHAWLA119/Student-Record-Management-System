#include "Student.h"
#include <iostream>

using namespace std;

Student::Student() {}

Student::Student(int id, string name, int age, string course) {
    this->id = id;
    this->name = name;
    this->age = age;
    this->course = course;
}

int Student::getID() const {
    return id;
}

string Student::getName() const {
    return name;
}

int Student::getAge() const {
    return age;
}

string Student::getCourse() const {
    return course;
}

void Student::setName(const string &name) {
    this->name = name;
}

void Student::setAge(int age) {
    this->age = age;
}

void Student::setCourse(const string &course) {
    this->course = course;
}

void Student::display() const {
    cout << "ID: " << id << ", Name: " << name << ", Age: " << age << ", Course: " << course << endl;
}
