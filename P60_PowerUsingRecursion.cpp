/*
  Program: Power Function Using Recursion
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A recursive program to calculate a^b (a raised to power b).
*/

#include <iostream>
using namespace std;

int power(int base, int exponent) {
    if (exponent == 0)
        return 1;
    return base * power(base, exponent - 1);
}

int main() {
    int base, exponent;
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;

    cout << base << "^" << exponent << " = " << power(base, exponent) << endl;
    return 0;
}



// Output:
// Enter base and exponent: 2 5
// 2^5 = 32
