/*
  Program: Factorial of a Number
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to calculate the factorial of a non-negative integer.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long factorial = 1;

    // Input
    cout << "Enter a non-negative integer: ";
    cin >> n;

    // Error check
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        // Calculate factorial
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        // Output
        cout << "Factorial of " << n << " is " << factorial << endl;
    }

    return 0;
}



// Output:
// Enter a non-negative integer: 5
// Factorial of 5 is 120
