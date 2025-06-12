/*
  Program: GCD Using Recursion
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to calculate the GCD (HCF) of two numbers using recursion.
*/

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "GCD = " << gcd(num1, num2) << endl;
    return 0;
}



// Output:
// Enter two numbers: 36 60
// GCD = 12
