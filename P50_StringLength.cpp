/*
  Program: String Length Without strlen()
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to find the length of a string without using strlen().
*/

#include <iostream>
using namespace std;

int main() {
    char str[100];
    int length = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    // Count characters until null character
    for (int i = 0; str[i] != '\0'; ++i)
        length++;

    cout << "Length of the string: " << length << endl;

    return 0;
}



// Output:
// Enter a string: Hello, World!
// Length of the string: 13
