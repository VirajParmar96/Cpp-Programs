/*
  Program: String Concatenation
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to concatenate two strings without using strcat().
*/

#include <iostream>
using namespace std;

int main() {
    char str1[100], str2[50];
    int i = 0, j = 0;

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 50);

    // Move to the end of str1
    while (str1[i] != '\0')
        i++;

    // Append str2 to str1
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';  // Null-terminate the result

    cout << "Concatenated string: " << str1 << endl;

    return 0;
}



// Output:
// Enter first string: Hello
// Enter second string: World
// Concatenated string: HelloWorld
