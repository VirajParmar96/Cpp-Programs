/*
  Program: Count Digits Using Recursion
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A recursive program to count the number of digits in a number.
*/

#include <iostream>
using namespace std;

int countDigits(int num) {
    if (num == 0)
        return 0;
    return 1 + countDigits(num / 10);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number == 0)
        cout << "Number of digits = 1" << endl;
    else
        cout << "Number of digits = " << countDigits(number) << endl;

    return 0;
}



// Output:
// Enter a number: 5429
// Number of digits = 4
