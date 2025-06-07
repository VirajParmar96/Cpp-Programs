/*
  Program: Transpose of a Matrix
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to find the transpose of a given matrix.
*/

#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int matrix[rows][cols], transpose[cols][rows];

    // Input matrix
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            cin >> matrix[i][j];

    // Transpose logic
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            transpose[j][i] = matrix[i][j];

    // Output result
    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j)
            cout << transpose[i][j] << " ";
        cout << endl;
    }

    return 0;
}



// Output:
// Enter number of rows and columns: 2 3
// Enter elements of the matrix:
// 1 2 3
// 4 5 6
// Transpose of the matrix:
// 1 4
// 2 5
// 3 6
