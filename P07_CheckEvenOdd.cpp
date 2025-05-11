/*
  Program: Check Even or Odd
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to check whether a number is even or odd.
*/

#include <iostream>
using namespace std;

int main() {
    int number;

    // Input
    cout << "Enter an integer: ";
    cin >> number;

    // Check even or odd
    if (number % 2 == 0)
        cout << number << " is even." << endl;
    else
        cout << number << " is odd." << endl;

    return 0;
}

// Output:
// Enter an integer: 9
// 9 is odd.
