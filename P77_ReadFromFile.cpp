/*
  Program: Read from a File
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to read content from a file and display it on the console.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("output.txt"); // Input file stream

    if (!file) {
        cout << "File could not be opened!" << endl;
        return 1;
    }

    string line;
    cout << "Reading content from 'output.txt':" << endl;

    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
    return 0;
}



// Output:
// Reading content from 'output.txt':
// Hello, this is Viraj.
