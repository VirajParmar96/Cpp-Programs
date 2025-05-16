/*
  Program: Reverse a Number
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to reverse the digits of a given number.
*/

#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0;

    // Input
    cout << "Enter an integer: ";
    cin >> num;

    int original = num;

    // Reverse logic
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    // Output
    cout << "Reversed number of " << original << " is " << reversed << endl;

    return 0;
}


// Output:
// Enter an integer: 12345
// Reversed number of 12345 is 54321
