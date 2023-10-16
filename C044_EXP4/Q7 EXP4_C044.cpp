#include <iostream>
using namespace std;
int main() {
    int number, originalNumber, remainder, result = 0, n = 0;
    cout << "Enter an integer: ";
    cin >> number;
    originalNumber = number;// Count the number of digits
    while (originalNumber != 0) {
        originalNumber /= 10;
        ++n;
    }
    originalNumber = number;// Calculate the Armstrong sum
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        int power = 1;
        for (int i = 0; i < n; ++i) {
            power *= remainder;
        }
        result += power;
        originalNumber /= 10;
    }
    if (result == number)
        cout << number << " is an Armstrong number." << endl;
    else
        cout << number << " is not an Armstrong number." << endl;
    return 0;
}
