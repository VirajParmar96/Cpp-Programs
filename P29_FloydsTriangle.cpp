/*
  Program: Floyd’s Triangle
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to print Floyd's Triangle using natural numbers.
    Pattern:
    1
    2 3
    4 5 6
    7 8 9 10
    ...
*/

#include <iostream>
using namespace std;

int main() {
    int rows, num = 1;

    // Input
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Floyd’s Triangle
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << num << " ";
            ++num;
        }
        cout << endl;
    }

    return 0;
}



// Output:
// Enter the number of rows: 5
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
