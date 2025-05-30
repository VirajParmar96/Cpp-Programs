/*
  Program: Sum of Prime Numbers in a Range
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to calculate the sum of all prime numbers in a given range.
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
    int start, end, sum = 0;

    // Input
    cout << "Enter range (start and end): ";
    cin >> start >> end;

    // Calculate sum of primes
    for (int i = start; i <= end; ++i) {
        if (isPrime(i))
            sum += i;
    }

    // Output
    cout << "Sum of prime numbers from " << start << " to " << end << " is: " << sum << endl;

    return 0;
}



// Output:
// Enter range (start and end): 1 10
// Sum of prime numbers from 1 to 10 is: 17
