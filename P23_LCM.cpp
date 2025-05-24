/*
  Program: LCM of Two Numbers
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to calculate the Least Common Multiple (LCM) of two integers.
*/

#include <iostream>
using namespace std;

int main() {
    int a, b, max;

    // Input
    cout << "Enter two positive integers: ";
    cin >> a >> b;

    // Start from the greater number
    max = (a > b) ? a : b;

    // Find LCM
    while (true) {
        if (max % a == 0 && max % b == 0) {
            cout << "LCM of " << a << " and " << b << " is: " << max << endl;
            break;
        }
        ++max;
    }

    return 0;
}


// Output:
// Enter two positive integers: 4 6
// LCM of 4 and 6 is: 12
