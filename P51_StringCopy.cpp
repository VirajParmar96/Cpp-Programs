/*
  Program: String Copy Without strcpy()
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to copy one string to another without using the built-in strcpy() function.
*/

#include <iostream>
using namespace std;

int main() {
    char source[100], destination[100];
    int i;

    cout << "Enter a string: ";
    cin.getline(source, 100);

    // Copying character by character
    for (i = 0; source[i] != '\0'; ++i)
        destination[i] = source[i];

    destination[i] = '\0';  // Null-terminate destination

    cout << "Copied string: " << destination << endl;

    return 0;
}



// Output:
// Enter a string: CodeWithViraj
// Copied string: CodeWithViraj
