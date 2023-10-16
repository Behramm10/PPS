// Implement a program using user defined function to return largest of three floating-point numbers
#include <iostream>
using namespace std;
int largest(float num1, float num2, float num3);
int main()
{
    float num1, num2, num3;

    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter a second number: ";
    cin >> num2;
    cout << "Enter a third number: ";
    cin >> num3;

    largest(num1, num2, num3);

    return 0;
}

int largest(float num1, float num2, float num3)
{
    cout << "Largest number: ";
    if (num1 > num2 && num1 > num3)
        cout << num1 << endl;
    if (num2 > num3 && num2 > num1)
        cout << num2 << endl;
    if (num3 > num1 && num3 > num2)
        cout << num3 << endl;
    if (num1 == num2 == num3)
        cout << "They are all equal" << endl;

    return 0;
}