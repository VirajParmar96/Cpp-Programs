/*
  Program: Pascal’s Triangle
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to print Pascal's Triangle up to n rows.
    Each number is the sum of the two numbers above it.
*/

#include <iostream>
using namespace std;

int factorial(int n) {
    int f = 1;
    for (int i = 2; i <= n; ++i)
        f *= i;
    return f;
}

int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int rows;

    // Input
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Pascal’s Triangle
    for (int i = 0; i < rows; ++i) {
        // Print spaces
        for (int space = 1; space <= rows - i; ++space)
            cout << " ";

        // Print values
        for (int j = 0; j <= i; ++j)
            cout << combination(i, j) << " ";

        cout << endl;
    }

    return 0;
}



// Output:
// Enter the number of rows: 5
//      1 
//     1 1 
//    1 2 1 
//   1 3 3 1 
//  1 4 6 4 1
