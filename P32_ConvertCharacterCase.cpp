/*
  Program: Convert Case of Character
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to convert lowercase to uppercase and vice versa for a given character.
*/

#include <iostream>
using namespace std;

int main() {
    char ch;

    // Input
    cout << "Enter a character: ";
    cin >> ch;

    // Check and convert case
    if (isupper(ch)) {
        cout << "Lowercase: " << char(tolower(ch)) << endl;
    } else if (islower(ch)) {
        cout << "Uppercase: " << char(toupper(ch)) << endl;
    } else {
        cout << "Invalid input. Please enter an alphabet character." << endl;
    }

    return 0;
}


// Output:
// Enter a character: a
// Uppercase: A
