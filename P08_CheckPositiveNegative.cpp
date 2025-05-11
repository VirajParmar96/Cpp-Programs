/*
  Program: Check Positive or Negative
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to check whether a number is positive, negative, or zero.
*/

#include <iostream>
using namespace std;

int main() {
    float number;

    // Input
    cout << "Enter a number: ";
    cin >> number;

    // Check sign
    if (number > 0)
        cout << "The number is positive." << endl;
    else if (number < 0)
        cout << "The number is negative." << endl;
    else
        cout << "The number is zero." << endl;

    return 0;
}


// Output:
// Enter a number: -4.5
// The number is negative.
