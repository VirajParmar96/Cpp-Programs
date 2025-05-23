/*
  Program: GCD of Two Numbers
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to find the Greatest Common Divisor (GCD) of two integers using Euclidean algorithm.
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Input
    cout << "Enter two positive integers: ";
    cin >> a >> b;

    int originalA = a, originalB = b;

    // Euclidean Algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    // Output
    cout << "GCD of " << originalA << " and " << originalB << " is: " << a << endl;

    return 0;
}



// Output:
// Enter two positive integers: 36 60
// GCD of 36 and 60 is: 12
