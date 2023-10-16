//Write a menu driven program to compute sum of digits of a number, to find reverse of a number, to count number of digits by writing three different functions with parameters and return type.
#include <iostream>
using namespace std;

int sumOfDigits(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int reverseNumber(int number) {
    int reverse = 0;
    while (number != 0) {
        reverse = reverse * 10 + number % 10;
        number /= 10;
    }
    return reverse;
}

int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        count++;
        number /= 10;
    }
    return count;
}

int main() {
    int choice, number;

    do {
        cout << "Menu:" << endl;
        cout << "1. Compute sum of digits" << endl;
        cout << "2. Find reverse of number" << endl;
        cout << "3. Count number of digits" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a number: ";
                cin >> number;
                cout << "Sum of digits: " << sumOfDigits(number) << endl;
                break;
            case 2:
                cout << "Enter a number: ";
                cin >> number;
                cout << "Reverse of number: " << reverseNumber(number) << endl;
                break;
            case 3:
                cout << "Enter a number: ";
                cin >> number;
                cout << "Number of digits: " << countDigits(number) << endl;
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl;
    } while (choice != 4);

    return 0;
}

