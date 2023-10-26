#include <iostream>

using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    // Default constructor
    Complex() {
        real = 0.0;
        imaginary = 0.0;
    }

    // Parameterized constructor
    Complex(double r, double i) {
        real = r;
        imaginary = i;
    }

    // Overload + operator to add two complex numbers
    Complex operator+(const Complex& other) {
        Complex result;
        result.real = real + other.real;
        result.imaginary = imaginary + other.imaginary;
        return result;
    }

    // Display the complex number
    void show() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    double real1, imaginary1, real2, imaginary2;

    // Get input for the first complex number
    cout << "Enter the real part of the first complex number: ";
    cin >> real1;
    cout << "Enter the imaginary part of the first complex number: ";
    cin >> imaginary1;

    // Get input for the second complex number
    cout << "Enter the real part of the second complex number: ";
    cin >> real2;
    cout << "Enter the imaginary part of the second complex number: ";
    cin >> imaginary2;

    // Create Complex objects with user input
    Complex complex1(real1, imaginary1);
    Complex complex2(real2, imaginary2);

    // Add the two complex numbers using the overloaded + operator
    Complex sum = complex1 + complex2;

    // Display the complex numbers and their addition
    cout << "Complex Number 1: ";
    complex1.show();
    cout << "Complex Number 2: ";
    complex2.show();
    cout << "Sum of Complex Numbers: ";
    sum.show();

    return 0;
}
