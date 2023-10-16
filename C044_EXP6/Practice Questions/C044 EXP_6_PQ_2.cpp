#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr1[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr1[i];
    }

    int arr2[size];
    for (int i = 0; i < size; i++) {
        arr2[i] = arr1[size - 1 - i];
    }

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr1[i] << " ";
    }

    cout << "\nReversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}
