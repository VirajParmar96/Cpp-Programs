/*
  Program: Check Leap Year
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to check whether a given year is a leap year.
*/

#include <iostream>
using namespace std;

int main() {
    int year;

    // Input
    cout << "Enter a year: ";
    cin >> year;

    // Leap year check
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        cout << year << " is a leap year." << endl;
    else
        cout << year << " is not a leap year." << endl;

    return 0;
}


// Output:
// Enter a year: 2024
// 2024 is a leap year.
