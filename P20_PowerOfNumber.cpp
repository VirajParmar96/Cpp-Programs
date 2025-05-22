/*
  Program: Power of a Number (Exponentiation)
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to compute the result of base raised to the power of exponent.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double base, result;
    int exponent;

    // Input
    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    // Calculate power
    result = pow(base, exponent);

    // Output
    cout << base << " raised to the power " << exponent << " is: " << result << endl;

    return 0;
}


// Output:
// Enter the base: 2
// Enter the exponent: 5
// 2 raised to the power 5 is: 32
