/*
  Program: Print Name and Age
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A simple C++ program to take name and age as input from the user
    and display them.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;

    // Input from user
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    // Output
    cout << "\nHello, " << name << "! You are " << age << " years old." << endl;

    return 0;
}

// Output:
// Enter your name: Viraj
// Enter your age: 21

// Hello, Alice! You are 21 years old.
