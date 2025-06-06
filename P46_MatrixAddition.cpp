/*
  Program: Matrix Addition
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to add two matrices of the same dimensions.
*/

#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int A[rows][cols], B[rows][cols], sum[rows][cols];

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

    // Matrix addition
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            sum[i][j] = A[i][j] + B[i][j];

    // Output result
    cout << "Resultant Matrix (Addition):\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            cout << sum[i][j] << " ";
        cout << endl;
    }

    return 0;
}



// Output:
// Enter number of rows and columns: 2 2
// Enter elements of first matrix:
// 1 2
// 3 4
// Enter elements of second matrix:
// 5 6
// 7 8
// Resultant Matrix (Addition):
// 6 8
// 10 12
