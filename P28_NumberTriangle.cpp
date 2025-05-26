/*
  Program: Print Number Triangle
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to print a triangle pattern using numbers.
*/

#include <iostream>
using namespace std;

int main() {
    int rows;

    // Input
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Number triangle pattern
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}


// Output:
// Enter the number of rows: 5
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
