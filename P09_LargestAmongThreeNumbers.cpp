/*
  Program: Largest Among Three Numbers
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to find the largest number among three given numbers.
*/

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Input
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // Check largest
    if (a >= b && a >= c)
        cout << a << " is the largest." << endl;
    else if (b >= a && b >= c)
        cout << b << " is the largest." << endl;
    else
        cout << c << " is the largest." << endl;

    return 0;
}


// Output:
// Enter three numbers: 7 12 9
// 12 is the largest.
