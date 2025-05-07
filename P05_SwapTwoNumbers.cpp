/*
  Program: Swap Two Numbers (Without Temp)
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to swap two numbers without using a temporary variable.
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Input
    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    // Swap without temp
    a = a + b;
    b = a - b;
    a = a - b;

    // Output
    cout << "After swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}


// Output:
// Enter value of a: 7
// Enter value of b: 3
// After swapping:
// a = 3
// b = 7
