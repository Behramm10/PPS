#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int matrix[rows][cols];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    int sum = 0;
    int minDim = min(rows, cols);

    for (int i = 0; i < minDim; i++) {
        sum += matrix[i][i];
    }

    cout << "Sum of diagonal elements: " << sum << endl;

    return 0;
}
