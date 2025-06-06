/*
  Program: Matrix Subtraction
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to subtract two matrices of the same dimensions.
*/

#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int A[rows][cols], B[rows][cols], diff[rows][cols];

    // Input first matrix
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            cin >> A[i][j];

    // Input second matrix
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            cin >> B[i][j];

    // Matrix subtraction
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            diff[i][j] = A[i][j] - B[i][j];

    // Output result
    cout << "Resultant Matrix (Subtraction):\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            cout << diff[i][j] << " ";
        cout << endl;
    }

    return 0;
}




// Output:
// Enter number of rows and columns: 2 2
// Enter elements of first matrix:
// 5 6
// 7 8
// Enter elements of second matrix:
// 1 2
// 3 4
// Resultant Matrix (Subtraction):
// 4 4
// 4 4
