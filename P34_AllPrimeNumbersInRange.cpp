/*
  Program: Print All Prime Numbers in a Range
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to print all prime numbers between a given range.
*/

#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
    int start, end;

    // Input
    cout << "Enter range (start and end): ";
    cin >> start >> end;

    cout << "Prime numbers from " << start << " to " << end << " are:\n";

    // Output primes in range
    for (int i = start; i <= end; ++i) {
        if (isPrime(i))
            cout << i << " ";
    }

    cout << endl;
    return 0;
}



// Ouṇ