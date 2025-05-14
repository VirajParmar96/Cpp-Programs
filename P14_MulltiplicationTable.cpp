/*
  Program: Multiplication Table
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to print the multiplication table of a given number.
*/

#include <iostream>
using namespace std;

int main() {
    int number;

    // Input
    cout << "Enter a number to display its multiplication table: ";
    cin >> number;

    // Output multiplication table
    cout << "Multiplication table of " << number << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}


// Output:
// Enter a number to display its multiplication table: 6
// Multiplication table of 6:
// 6 x 1 = 6
// 6 x 2 = 12
// 6 x 3 = 18
// 6 x 4 = 24
// 6 x 5 = 30
// 6 x 6 = 36
// 6 x 7 = 42
// 6 x 8 = 48
// 6 x 9 = 54
// 6 x 10 = 60
