/*
  Program: Check Vowel or Consonant
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to check whether a given alphabet is a vowel or a consonant.
*/

#include <iostream>
using namespace std;

int main() {
    char ch;

    // Input
    cout << "Enter an alphabet: ";
    cin >> ch;

    // Check if alphabet
    if (!isalpha(ch)) {
        cout << "Invalid input. Please enter an alphabet." << endl;
    } else {
        // Convert to lowercase for simplicity
        ch = tolower(ch);

        // Vowel check
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            cout << ch << " is a vowel." << endl;
        } else {
            cout << ch << " is a consonant." << endl;
        }
    }

    return 0;
}



// Output:
// Enter an alphabet: E
// e is a vowel.
