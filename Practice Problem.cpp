//A user-defined package 'DemoPackage contains a class named
//"Amount" which accepts a users name and balance amount and also displays a person's
//details. Create another class Pack_use that makes above use of the package and accepts three entries by the user.

#include <iostream>
using namespace std;

const int MAX_ENTRIES = 100;

struct Entry {
    string name;
    string balanceAmount;
};

struct Pack_use {
    Entry entries[MAX_ENTRIES];
    int numEntries;

    void acceptEntries() {
        numEntries = 0;
        char choice;

        do {
            cout << "Enter details for Entry " << numEntries + 1 << ":" << endl;
            cout << "Name: ";
            getline(cin, entries[numEntries].name);
            cout << "Balance Amount: ";
            getline(cin, entries[numEntries].balanceAmount);
            cout << endl;

            numEntries++;

            if (numEntries >= MAX_ENTRIES) {
                cout << "Maximum limit of entries reached." << endl;
                break;
            }

            cout << "Do you want to enter another entry? (y/n): ";
            cin >> choice;
            cin.ignore(); // Ignore the newline character
            cout << endl;
        } while (choice == 'y' || choice == 'Y');
    }

    void displayEntries() {
        cout << "User Entries:" << endl;
        for (int i = 0; i < numEntries; i++) {
            cout << "Entry " << i + 1 << ":" << endl;
            cout << "Name: " << entries[i].name << endl;
            cout << "Balance Amount: " << entries[i].balanceAmount << endl;
            cout << endl;
        }
    }
};

int main() {
    Pack_use pack;
    pack.acceptEntries();
    pack.displayEntries();

    return 0;
}

