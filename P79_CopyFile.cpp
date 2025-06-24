/*
  Program: Copy One File to Another
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to copy content from one file to another.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream source("output.txt");
    ofstream destination("copy_output.txt");

    if (!source || !destination) {
        cout << "Error opening files!" << endl;
        return 1;
    }

    char ch;
    while (source.get(ch)) {
        destination.put(ch);
    }

    cout << "File copied successfully from 'output.txt' to 'copy_output.txt'." << endl;

    source.close();
    destination.close();
    return 0;
}



// Output:
// File copied successfully from 'output.txt' to 'copy_output.txt'.

