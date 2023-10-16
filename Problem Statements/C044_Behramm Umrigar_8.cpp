#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the total number of people in Chef's team: ";
    cin >> N;

    // Check if the team is eligible to participate
    if (N >= 6 && N <= 8) {
        cout << "Chef's team is eligible to participate in the puzzle hunt event.\n";
    } else {
        cout << "Chef's team is not eligible to participate in the puzzle hunt event.\n";
    }

    return 0;
}
