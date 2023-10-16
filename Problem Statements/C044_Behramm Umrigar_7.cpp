#include <iostream>
using namespace std;

int main() {
    int N, X, P;
    cout << "Enter the total number of questions (N): ";
    cin >> N;
    cout << "Enter the number of questions Khushi got correct (X): ";
    cin >> X;
    cout << "Enter the minimum required marks to pass (P): ";
    cin >> P;

    int totalScore = (X * 3) - ((N - X) * 1);

    if (totalScore >= P) {
        cout << "Khushi can pass the course.\n";
    } else {
        cout << "Khushi cannot pass the course.\n";
    }

    return 0;
}
