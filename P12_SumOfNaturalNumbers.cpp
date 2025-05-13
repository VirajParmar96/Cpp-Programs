/*
  Program: Sum of First N Natural Numbers
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to calculate the sum of the first N natural numbers.
*/

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    // Input
    cout << "Enter the value of N: ";
    cin >> n;

    // Loop to calculate sum
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Output
    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;

    return 0;
}


// Output:
// Enter the value of N: 5
// Sum of first 5 natural numbers is: 15
