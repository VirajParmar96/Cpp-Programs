/*
  Program: Fibonacci Using Recursion
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to print the Fibonacci series using recursion.
*/

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int terms;
    cout << "Enter number of terms: ";
    cin >> terms;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < terms; ++i)
        cout << fibonacci(i) << " ";

    cout << endl;
    return 0;
}



// Output:
// Enter number of terms: 7
// Fibonacci Series: 0 1 1 2 3 5 8
