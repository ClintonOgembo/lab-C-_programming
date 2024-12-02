
#include <iostream>
#include <vector>
#include <string>
#include <limits> // for numeric_limits

using namespace std;

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    // Validate the number of students
    if (numStudents <= 0) {
        cout << "Invalid number of students." << endl;
        return 1;
    }

    vector<string> names(numStudents);
    vector<int> grades(numStudents);

    // Input student names and grades
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> names[i];

        // Validate and input the grade
        while (true) {
            cout << "Enter grade of " << names[i] << ": ";
            cin >> grades[i];
            if (cin.fail() || grades[i] < 0 || grades[i] > 100) {
                cin.clear(); // clear input buffer to restore cin to a usable state
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore last input
                cout << "Invalid grade. Please enter a grade between 0 and 100." << endl;
            } else {
                break; // input is valid
            }
        }
    }

    // Calculate average, highest, and lowest grade
    int sumGrades = 0;
    int highestGrade = grades[0];
    int lowestGrade = grades[0];

    for (int i = 0; i < numStudents; ++i) {
        sumGrades += grades[i];
        if (grades[i] > highestGrade) {
            highestGrade = grades[i];
        }
        if (grades[i] < lowestGrade) {
            lowestGrade = grades[i];
        }
    }

    double averageGrade = static_cast<double>(sumGrades) / numStudents;

    // Output student grades
    cout << "\nStudent Grades:" << endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << names[i] << ": " << grades[i] << endl;
    }

    // Output average, highest, and lowest grade
    cout << "\nAverage grade: " << averageGrade << endl;
    cout << "Highest grade: " << highestGrade << endl;
    cout << "Lowest grade: " << lowestGrade << endl;

    return 0;
}
