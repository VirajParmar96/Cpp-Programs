/*
  Program: Add Two Numbers
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A simple program to add two numbers and display the result.
*/

#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum;

    // Input
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Process
    sum = num1 + num2;

    // Output
    cout << "Sum = " << sum << endl;

    return 0;
}

// Output:
// Enter first number: 12
// Enter second number: 8
// Sum = 20
