/*
  Program: Number is Prime in a Range
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to find and print all prime numbers in a given range.
*/

#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int start, end;

    // Input
    cout << "Enter the range (start and end): ";
    cin >> start >> end;

    cout << "Prime numbers between " << start << " and " << end << " are:\n";

    // Print prime numbers in range
    for (int i = start; i <= end; ++i) {
        if (isPrime(i))
            cout << i << " ";
    }

    cout << endl;
    return 0;
}



// Output:
// Enter the range (start and end): 10 30
// Prime numbers between 10 and 30 are:
// 11 13 17 19 23 29
