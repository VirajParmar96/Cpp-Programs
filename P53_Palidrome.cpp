/*
  Program: Check Palindrome String
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to check whether a given string is a palindrome or not.
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    bool isPalindrome = true;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int len = strlen(str);

    // Compare characters from both ends
    for (int i = 0; i < len / 2; ++i) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}


// Output:
// Enter a string: madam
// The string is a palindrome.

