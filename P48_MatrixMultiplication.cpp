/*
  Program: Matrix Multiplication
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to multiply two matrices (Matrix A x Matrix B).
*/

#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;

    // Input dimensions
    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication not possible. Columns of first must equal rows of second.\n";
        return 1;
    }

    int A[r1][c1], B[r2][c2], result[r1][c2];

    // Input matrix A
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c1; ++j)
            cin >> A[i][j];

    // Input matrix B
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r2; ++i)
        for (int j = 0; j < c2; ++j)
            cin >> B[i][j];

    // Initialize result matrix
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c2; ++j)
            result[i][j] = 0;

    // Matrix multiplication
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c2; ++j)
            for (int k = 0; k < c1; ++k)
                result[i][j] += A[i][k] * B[k][j];

    // Output result
    cout << "Resultant Matrix (Multiplication):\n";
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j)
            cout << result[i][j] << " ";
        cout << endl;
    }

    return 0;
}



// Output:
// Enter rows and columns of first matrix: 2 3
// Enter rows and columns of second matrix: 3 2
// Enter elements of first matrix:
// 1 2 3
// 4 5 6
// Enter elements of second matrix:
// 7 8
// 9 10
// 11 12
// Resultant Matrix (Multiplication):
// 58 64
// 139 154
