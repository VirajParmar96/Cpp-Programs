/*
  Program: Swap Two Numbers (Using Temp)
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to swap two numbers using a temporary variable.
*/

#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    // Input
    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    // Swap using temp
    temp = a;
    a = b;
    b = temp;

    // Output
    cout << "After swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}


// Output:
// Enter value of a: 5
// Enter value of b: 10
// After swapping:
// a = 10
// b = 5
