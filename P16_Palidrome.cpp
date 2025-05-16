/*
  Program: Palindrome Number
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to check whether a number is a palindrome or not.
*/

#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0;

    // Input
    cout << "Enter an integer: ";
    cin >> num;

    int original = num;

    // Reverse logic
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    // Output
    if (original == reversed)
        cout << original << " is a palindrome number." << endl;
    else
        cout << original << " is not a palindrome number." << endl;

    return 0;
}


// Output:
// Enter an integer: 121
// 121 is a palindrome number.
