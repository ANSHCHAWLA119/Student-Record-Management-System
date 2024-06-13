#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H

#include <vector>
#include "Student.h"

class StudentManager {
private:
    vector<Student> students;

public:
    void addStudent();
    void displayAllStudents();
    void searchStudentByID();
    void deleteStudentByID();
    void updateStudentByID();
    void saveToCSV(const string &filename);
};

#endif

