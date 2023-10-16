#include <iostream>
using namespace std;

int main() {
    int m, n, p, q;
    cout << "Enter the number of rows for matrix A: ";
    cin >> m;
    cout << "Enter the number of columns for matrix A: ";
    cin >> n;
    cout << "Enter the number of rows for matrix B: ";
    cin >> p;
    cout << "Enter the number of columns for matrix B: ";
    cin >> q;

    if (n != p) {
        cout << "Matrix multiplication is not possible." << endl;
        return 0;
    }

    int matrixA[m][n];
    int matrixB[p][q];
    int result[m][q];

    cout << "Enter the elements of matrix A:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrixA[i][j];
        }
    }

    cout << "Enter the elements of matrix B:" << endl;
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            cin >> matrixB[i][j];
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    cout << "Resultant matrix after multiplication:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

