#include <iostream>
using namespace std;
int main()
{
    int numDigits;
    cout << "Enter the number of digits in the number: ";
    cin >> numDigits;
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int divisor = 1;
    for (int i = 1; i < numDigits; ++i)
        {
        divisor *= 10;
        }
    int firstDigit = number / divisor;
    int lastDigit = number % 10;
    cout << "The sum of the first and last digits is " << firstDigit + lastDigit << endl;
    return 0;
}
