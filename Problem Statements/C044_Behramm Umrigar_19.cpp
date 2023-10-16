#include <iostream>
using namespace std;

int findMajorityElement(int nums[], int n) {
    int majorityElement = nums[0];
    int count = 1;

    for (int i = 1; i < n; i++) {
        if (nums[i] == majorityElement) {
            count++;
        } else {
            count--;
        }

        if (count == 0) {
            majorityElement = nums[i];
            count = 1;
        }
    }

    return majorityElement;
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

    int majorityElement = findMajorityElement(nums, n);

    cout << "The majority element is: " << majorityElement << endl;

    return 0;
}
