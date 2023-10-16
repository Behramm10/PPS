#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    double salary;
    int hoursOfWork;
};

int main() {
    int numEmployees;
    cout << "Enter the number of employees (maximum 100): ";
    cin >> numEmployees;

    // Validate the input
    if (numEmployees <= 0 || numEmployees > 100) {
        cout << "Invalid number of employees. Please enter a value between 1 and 100." << endl;
        return 0;
    }

    Employee employees[numEmployees];

    // Input employee details
    for (int i = 0; i < numEmployees; i++) {
        cout << "Enter name of employee " << i + 1 << ": ";
        cin >> employees[i].name;
        cout << "Enter salary of employee " << i + 1 << ": ";
        cin >> employees[i].salary;
        cout << "Enter hours of work per day for employee " << i + 1 << ": ";
        cin >> employees[i].hoursOfWork;
    }

    // Increase salary based on hours of work per day
    for (int i = 0; i < numEmployees; i++) {
        if (employees[i].hoursOfWork > 8) {
            employees[i].salary += (employees[i].hoursOfWork - 8) * 10; // Increase by $10 per extra hour
        }
    }

    // Print employee details
    cout << "\nEmployee Details:\n";
    for (int i = 0; i < numEmployees; i++) {
        cout << "Name: " << employees[i].name << ", Salary: $" << employees[i].salary << endl;
    }

    return 0;
}
