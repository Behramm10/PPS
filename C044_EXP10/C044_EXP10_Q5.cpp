#include <iostream>
#include <string>

using namespace std;

class Employee {
protected:
    int id;
    string name;

public:
    void getData() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Employee Name: ";
        cin.ignore(); // Clear the newline character from the input buffer
        getline(cin, name);
    }

    void display() {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
    }
};

class Manager : public Employee {
protected:
    double salary;

public:
    void getData() {
        Employee::getData();
        cout << "Enter Manager's Salary: ";
        cin >> salary;
    }

    void display() {
        Employee::display();
        cout << "Manager's Salary: " << salary << endl;
    }
};

class ProjectManager : public Manager {
private:
    int totalExperience;
    int numProjectsHandled;

public:
    void getData() {
        Manager::getData();
        cout << "Enter Total Experience (in years): ";
        cin >> totalExperience;
        cout << "Enter Number of Projects Handled: ";
        cin >> numProjectsHandled;
    }

    void display() {
        Manager::display();
        cout << "Total Experience: " << totalExperience << " years" << endl;
        cout << "Number of Projects Handled: " << numProjectsHandled << endl;
    }
};

int main() {
    ProjectManager pm;

    cout << "Enter Project Manager's Details:" << endl;
    pm.getData();

    cout << "\nProject Manager's Details:" << endl;
    pm.display();

    return 0;
}

