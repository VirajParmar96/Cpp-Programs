/*
  Program: Armstrong Number
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to check whether a number is an Armstrong number.
    (Armstrong number: sum of cubes of its digits equals the number itself)
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, original, remainder, result = 0;

    // Input
    cout << "Enter a 3-digit number: ";
    cin >> num;

    original = num;

    // Armstrong check
    while (original != 0) {
        remainder = original % 10;
        result += remainder * remainder * remainder;
        original /= 10;
    }

    // Output
    if (result == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}


// Output:
// Enter a 3-digit number: 153
// 153 is an Armstrong number.
