/*
  Program: Sum of Digits of a Number
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to find the sum of digits of a given number.
*/

#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    // Input
    cout << "Enter a number: ";
    cin >> num;

    int original = num;

    // Digit sum logic
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    // Output
    cout << "Sum of digits of " << original << " is: " << sum << endl;

    return 0;
}


// Output:
// Enter a number: 1234
// Sum of digits of 1234 is: 10
