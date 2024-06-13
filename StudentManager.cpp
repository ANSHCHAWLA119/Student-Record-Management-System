#include "StudentManager.h"
#include <fstream>
#include <iostream> // Ensure iostream is included

using namespace std;

void StudentManager::addStudent() {
    int id, age;
    string name, course;

    cout << "Enter Student ID: ";
    cin >> id;
    cin.ignore();  // To consume the newline character after entering ID
    cout << "Enter Student Name: ";
    getline(cin, name);
    cout << "Enter Student Age: ";
    cin >> age;
    cin.ignore();
    cout << "Enter Student Course: ";
    getline(cin, course);

    Student student(id, name, age, course);
    students.push_back(student);
    cout << "Student added successfully!" << endl;
}

void StudentManager::displayAllStudents() {
    if (students.empty()) {
        cout << "No student records available." << endl;
        return;
    }
    for (Student student : students) {
        student.display();
    }
}

void StudentManager::searchStudentByID() {
    int id;
    cout << "Enter Student ID to search: ";
    cin >> id;

    for (Student student : students) {
        if (student.getID() == id) {
            student.display();
            return;
        }
    }
    cout << "Student with ID " << id << " not found." << endl;
}

void StudentManager::deleteStudentByID() {
    int id;
    cout << "Enter Student ID to delete: ";
    cin >> id;

    for (auto it = students.begin(); it != students.end(); ++it) {
        if (it->getID() == id) {
            students.erase(it);
            cout << "Student with ID " << id << " deleted successfully!" << endl;
            return;
        }
    }
    cout << "Student with ID " << id << " not found." << endl;
}

void StudentManager::updateStudentByID() {
    int id, age;
    string name, course;
    cout << "Enter Student ID to update: ";
    cin >> id;

    for (Student &student : students) {
        if (student.getID() == id) {
            cout << "Enter new name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter new age: ";
            cin >> age;
            cin.ignore();
            cout << "Enter new course: ";
            getline(cin, course);

            student.setName(name);
            student.setAge(age);
            student.setCourse(course);

            cout << "Student record updated successfully!" << endl;
            return;
        }
    }
    cout << "Student with ID " << id << " not found." << endl;
}

void StudentManager::saveToCSV(const string &filename) {
    ofstream file(filename);

    if (!file.is_open()) {
        cerr << "Unable to open file " << filename << endl; // Use cerr for error messages
        return;
    }

    file << "ID,Name,Age,Course\n";  // Header
    for (const Student &student : students) {
        file << student.getID() << ","
             << student.getName() << ","
             << student.getAge() << ","
             << student.getCourse() << "\n";
    }

    file.close();
    cout << "Student records saved to " << filename << " successfully!" << endl; // Ensure cout is correctly used
}
