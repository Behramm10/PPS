#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    int largestElement = INT_MIN;

    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] > largestElement) {
                largestElement = matrix[i][j];
            }
        }
    }

    cout << "The largest element in the matrix is: " << largestElement << endl;

    return 0;
}
