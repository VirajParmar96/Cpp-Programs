/*
  Program: Convert String to Uppercase and Lowercase
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to convert a given string to uppercase and lowercase.
*/

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char str[100], upperStr[100], lowerStr[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    // Convert to uppercase and lowercase manually
    for (int i = 0; str[i] != '\0'; ++i) {
        upperStr[i] = toupper(str[i]);
        lowerStr[i] = tolower(str[i]);
    }

    cout << "Uppercase: " << upperStr << endl;
    cout << "Lowercase: " << lowerStr << endl;

    return 0;
}


// Output:
// Enter a string: Hello World
// Uppercase: HELLO WORLD
// Lowercase: hello world
