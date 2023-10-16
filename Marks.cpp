#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int rollNo;
    int numSubjects;
    int* marks;

public:
    Student(int subjects) {
        numSubjects = subjects;
        marks = new int[numSubjects];
    }

    ~Student() {
        delete[] marks;
    }

    void setMarks() {
        for (int i = 0; i < numSubjects; i++) {
            cout << "Enter marks for subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    string getName() {
        return name;
    }

    void setName(string studentName) {
        name = studentName;
    }

    int getRollNo() {
        return rollNo;
    }

    void setRollNo(int studentRollNo) {
        rollNo = studentRollNo;
    }

    int* getMarks() {
        return marks;
    }

    string getGrade(int marks) {
        if (marks >= 91 && marks <= 100) {
            return "A1";
        } else if (marks >= 81 && marks <= 90) {
            return "A2";
        } else if (marks >= 71 && marks <= 80) {
            return "B1";
        } else if (marks >= 61 && marks <= 70) {
            return "B2";
        } else if (marks >= 51 && marks <= 60) {
            return "C1";
        } else if (marks >= 41 && marks <= 50) {
            return "C2";
        } else if (marks >= 33 && marks <= 40) {
            return "D";
        } else if (marks >= 21 && marks <= 32) {
            return "E1";
        } else {
            return "E2";
        }
    }

    double getAverageMarks() {
        int total = 0;
        for (int i = 0; i < numSubjects; i++) {
            total += marks[i];
        }
        return static_cast<double>(total) / numSubjects;
    }

    string getTotalGrade() {
        double averageMarks = getAverageMarks();
        return getGrade(static_cast<int>(averageMarks));
    }
};

int main() {
    string name;
    int rollNo, numSubjects;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your roll number: ";
    cin >> rollNo;

    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    Student student(numSubjects);
    student.setName(name);
    student.setRollNo(rollNo);
    student.setMarks();

    int* marks = student.getMarks();

    cout << "\nStudent Details:" << endl;
    cout << "Name: " << student.getName() << endl;
    cout << "Roll Number: " << student.getRollNo() << endl;

    cout << "Marks and Grades for each subject: " << endl;
    for (int i = 0; i < numSubjects; i++) {
        string grade = student.getGrade(marks[i]);
        cout << "Subject " << i + 1 << ": " << marks[i] << " - Grade " << grade << endl;
    }

    double averageMarks = student.getAverageMarks();
    string totalGrade = student.getTotalGrade();

    cout << "Average Marks: " << averageMarks << endl;
    cout << "Total Grade: " << totalGrade << endl;

    return 0;
}
