#include <iostream>
#include "StudentManager.h"

using namespace std;

int main() {
    StudentManager manager;
    int choice;

    do {
        cout << "\nStudent Record Management System" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Search Student by ID" << endl;
        cout << "4. Delete Student by ID" << endl;
        cout << "5. Update Student by ID" << endl;
        cout << "6. Save to CSV and Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                manager.addStudent();
                break;
            case 2:
                manager.displayAllStudents();
                break;
            case 3:
                manager.searchStudentByID();
                break;
            case 4:
                manager.deleteStudentByID();
                break;
            case 5:
                manager.updateStudentByID();
                break;
            case 6:
                manager.saveToCSV("student_records.csv");
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}
