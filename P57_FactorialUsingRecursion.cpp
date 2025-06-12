/*
  Program: Factorial Using Recursion
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to calculate the factorial of a number using recursion.
*/

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Factorial of " << num << " = " << factorial(num) << endl;
    return 0;
}



// Output:
// Enter a number: 5
// Factorial of 5 = 120
