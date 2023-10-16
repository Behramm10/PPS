#include <iostream>
using namespace std;

int main() {
    int X;
    cout << "Enter the amount of water Kamal drank today (in ml): ";
    cin >> X;
    if (X >= 2000) {
        cout << "Kamal followed the doctor's advice\n";
    } else {
        cout << "Kamal did not follow the doctor's advice .\n";
    }

    return 0;
}

