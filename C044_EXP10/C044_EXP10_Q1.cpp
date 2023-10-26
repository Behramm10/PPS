#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    int Emp_id;
    string Emp_name;
    double Emp_sal;

public:
    // Parameterized constructor
    Employee(int id, const string& name, double salary) {
        Emp_id = id;
        Emp_name = name;
        Emp_sal = salary;
    }

    // Display function to print employee details
    void display() {
        cout << "Employee ID: " << Emp_id << endl;
        cout << "Employee Name: " << Emp_name << endl;
        cout << "Employee Salary: " << Emp_sal << endl;
    }
};

int main() {
    int id1, id2;
    string name1, name2;
    double salary1, salary2;

    // Get input for the first employee
    cout << "Enter details for Employee 1:" << endl;
    cout << "Employee ID: ";
    cin >> id1;
    cin.ignore(); // Clear the newline character from the input buffer
    cout << "Employee Name: ";
    getline(cin, name1);
    cout << "Employee Salary: ";
    cin >> salary1;

    // Get input for the second employee
    cout << "\nEnter details for Employee 2:" << endl;
    cout << "Employee ID: ";
    cin >> id2;
    cin.ignore(); // Clear the newline character from the input buffer
    cout << "Employee Name: ";
    cin.ignore(); // Clear the newline character from the input buffer
    getline(cin, name2);
    cout << "Employee Salary: ";
    cin >> salary2;

    // Create Employee objects with user input
    Employee emp1(id1, name1, salary1);
    Employee emp2(id2, name2, salary2);

    // Display employee details
    cout << "\nEmployee 1 Details:" << endl;
    emp1.display();
    cout << "\nEmployee 2 Details:" << endl;
    emp2.display();

    return 0;
}
