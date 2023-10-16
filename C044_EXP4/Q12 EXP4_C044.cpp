#include <iostream>
using namespace std;
int main() {
    cout << "Uppercase letters: ";
    for (char ch = 'A'; ch <= 'Z'; ++ch) { //loop
        cout << ch << " ";
        if (ch == 'z') {
            continue;
        }
    }
    cout << endl;
    cout << "Lowercase letters: ";
    for (char ch = 'a'; ch <= 'z'; ++ch) { //loop
        cout << ch << " ";
    }
    cout << endl;
    return 0;
}
