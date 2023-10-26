#include <iostream>
using namespace std;

// Sequential Search
int sequentialSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

// Binary Search (Iterative Method)
int binarySearchIterative(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

// Binary Search (Recursive Method)
int binarySearchRecursive(int arr[], int low, int high, int key) {
    if (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            return binarySearchRecursive(arr, mid + 1, high, key);
        } else {
            return binarySearchRecursive(arr, low, mid - 1, key);
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int choice, key, index;
    char repeat;
    do {
        cout << "\nMenu:\n";
        cout << "1. Sequential Search\n";
        cout << "2. Binary Search (Iterative Method)\n";
        cout << "3. Binary Search (Recursive Method)\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the key to search: ";
                cin >> key;
                index = sequentialSearch(arr, n, key);
                if (index != -1) {
                    cout << "Element found at index " << index << endl;
                } else {
                    cout << "Element not found" << endl;
                }
                break;
            case 2:
                cout << "Enter the key to search: ";
                cin >> key;
                index = binarySearchIterative(arr, n, key);
                if (index != -1) {
                    cout << "Element found at index " << index << endl;
                } else {
                    cout << "Element not found" << endl;
                }
                break;
            case 3:
                cout << "Enter the key to search: ";
                cin >> key;
                index = binarySearchRecursive(arr, 0, n - 1, key);
                if (index != -1) {
                    cout << "Element found at index " << index << endl;
                } else {
                    cout << "Element not found" << endl;
                }
                break;
            case 4:
                cout << "Exiting the program..." << endl;
                return 0;
            default:
                cout << "Invalid choice" << endl;
        }

        cout << "Do you want to perform another operation? (y/n): ";
        cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}
