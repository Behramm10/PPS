#include <iostream>
using namespace std;

int sequence(int N) {
    int maxLength = 0;
    int Length = 0;
    int sum = 0;

    for (int i = 1; i <= N; i++) {
        sum += i;
        Length++;

        if (sum % 2 == 0) {
            maxLength = max(maxLength, Length);
        }
    }

    return maxLength;
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    int maxLength = sequence(N);
    cout << "Maximum length of contiguous subsequence with even sum: " << maxLength << endl;

    return 0;
}

