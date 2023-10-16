#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout<<"Enter the Parties:";
    cin >> a >> b >> c;
    int total_votes = a + b + c;
    if (a > total_votes / 2) {
        cout << "A" << endl;
    } else if (b > total_votes / 2) {
        cout << "B" << endl;
    } else if (c > total_votes / 2) {
        cout << "C" << endl;
    } else {
        cout << "King's & Queen's Rule" << endl;
    }

    return 0;
}

