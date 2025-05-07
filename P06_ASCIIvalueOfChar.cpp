/*
  Program: Find ASCII Value of Character
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to input a character and display its ASCII value.
*/

#include <iostream>
using namespace std;

int main() {
    char ch;

    // Input
    cout << "Enter a character: ";
    cin >> ch;

    // Output
    cout << "ASCII value of '" << ch << "' is " << int(ch) << endl;

    return 0;
}


// Output:
// Enter a character: A
// ASCII value of 'A' is 65
