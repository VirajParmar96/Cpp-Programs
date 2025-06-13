/*
  Program: Prime Check Using Function
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to check whether a number is prime using a separate function.
*/

#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number))
        cout << number << " is a prime number." << endl;
    else
        cout << number << " is not a prime number." << endl;

    return 0;
}



// Output:
// Enter a number: 29
// 29 is a prime number.
