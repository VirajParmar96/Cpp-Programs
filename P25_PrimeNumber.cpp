/*
  Program: Prime Number Check
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to check if a given number is a prime number.
*/

#include <iostream>
using namespace std;

int main() {
    int num, i;
    bool isPrime = true;

    // Input
    cout << "Enter a positive integer: ";
    cin >> num;

    // Prime check
    if (num <= 1) {
        isPrime = false;
    } else {
        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    // Output
    if (isPrime)
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}



// Output:
// Enter a positive integer: 29
// 29 is a prime number.
