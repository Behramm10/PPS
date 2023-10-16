#include <iostream>
using namespace std;

int main() {
    int w1, w2, M, x1, x2;
    cout << "Enter Krish's weight before lockdown (w1 in kg): ";
    cin >> w1;
    cout << "Enter Krish's weight after M months of lockdown (w2 in kg): ";
    cin >> w2;
    cout << "Enter the number of months during lockdown (M): ";
    cin >> M;
    cout << "Enter the minimum weight increase per month for growing kids (x1 in kg): ";
    cin >> x1;
    cout << "Enter the maximum weight increase per month for growing kids (x2 in kg): ";
    cin >> x2;

    int weightIncrease = w2 - w1;
    int minIncrease = x1 * M;
    int maxIncrease = x2 * M;

    if (weightIncrease >= minIncrease && weightIncrease <= maxIncrease) {
        cout << "Krish's home scale could be giving correct results.\n";
    } else {
        cout << "Krish's home scale is not giving correct results.\n";
    }

    return 0;
}
