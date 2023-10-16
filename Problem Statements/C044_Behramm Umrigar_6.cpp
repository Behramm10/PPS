#include <iostream>
using namespace std;

int main() {
    int N, K;
    cout << "Enter the number of people (N): ";
    cin >> N;
    cout << "Enter the total amount of money (K): ";
    cin >> K;

    int A[N];
    cout << "Enter the amount of money each person wants to withdraw:\n";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    cout << "Result:\n";
    int remMoney = K;
    for (int i = 0; i < N; i++) {
        if (A[i] <= remMoney) {
            cout << "Person " << (i + 1) << " will get the required amount of money.\n";
            remMoney -= A[i];
        } else {
            cout << "Person " << (i + 1) << " will not get the required amount of money.\n";
        }
    }

    return 0;
}
