/*
  Program: Count Vowels in a String
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to count the number of vowels in a given string.
*/

#include <iostream>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char str[100];
    int vowelCount = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; ++i) {
        if (isVowel(str[i]))
            vowelCount++;
    }

    cout << "Total number of vowels: " << vowelCount << endl;

    return 0;
}


// Output:
// Enter a string: Hello World!
// Total number of vowels: 6
