#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
    string str1, str2, str3;
    int choice;

    cout << "Enter string 1: ";
    getline(cin, str1);

    cout << "Enter string 2: ";
    getline(cin, str2);

    cout << "Menu:" << endl;
    cout << "1. Find length of a string" << endl;
    cout << "2. Compare two strings for equality" << endl;
    cout << "3. Copy one string to another" << endl;
    cout << "4. Concatenate two strings" << endl;
    cout << "5. Find reverse of a string" << endl;
    cout << "Enter your choice (1-5): ";
    cin >> choice;

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer

    switch (choice) {
        case 1:
            cout << "Length of str1: " << str1.length() << endl;
            break;
        case 2:
            if (str1 == str2) {
                cout << "str1 and str2 are equal" << endl;
            } else {
                cout << "str1 and str2 are not equal" << endl;
            }
            break;
        case 3:
            str3 = str1;
            cout << "Copied string: " << str3 << endl;
            break;
        case 4:
            str3 = str1 + str2;
            cout << "Concatenated string: " << str3 << endl;
            break;
        case 5: {
            string reversed = string(str1.rbegin(), str1.rend());
            cout << "Reversed string: " << reversed << endl;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}
