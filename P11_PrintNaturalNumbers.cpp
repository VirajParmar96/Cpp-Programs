/*
  Program: Print All Natural Numbers
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to print all natural numbers from 1 to a given number N.
*/

#include <iostream>
using namespace std;

int main() {
    int n;

    // Input
    cout << "Enter the value of N: ";
    cin >> n;

    cout << "Natural numbers from 1 to " << n << ":" << endl;

    // Loop to print natural numbers
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}


// Output:
// Enter the value of N: 10
// Natural numbers from 1 to 10:
// 1 2 3 4 5 6 7 8 9 10
