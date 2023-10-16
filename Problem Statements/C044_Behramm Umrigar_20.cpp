#include <iostream>
using namespace std;

int findSingleNumber(int nums[], int n) {
    int singleNumber = 0;

    for (int i = 0; i < n; i++) {
        singleNumber ^= nums[i];
    }

    return singleNumber;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int nums[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int singleNumber = findSingleNumber(nums, n);

    cout << "The single number is: " << singleNumber << endl;

    return 0;
}
