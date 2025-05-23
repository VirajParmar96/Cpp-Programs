/*
  Program: Fibonacci Series
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to print the Fibonacci series up to N terms.
    (Fibonacci: 0, 1, 1, 2, 3, 5, 8, ...)
*/

#include <iostream>
using namespace std;

int main() {
    int n;

    // Input
    cout << "Enter the number of terms: ";
    cin >> n;

    int t1 = 0, t2 = 1, nextTerm;

    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; ++i) {
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    cout << endl;
    return 0;
}



// Output:
// Enter the number of terms: 7
// Fibonacci Series: 0 1 1 2 3 5 8
