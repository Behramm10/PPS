#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Resultant array after multiplying each element by 5: ";
    for (int i = 0; i < size; i++) {
        arr[i] *= 5;
        cout << arr[i] << " ";
    }

    return 0;
}
