/*
  Program: Count Words and Lines in File
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to count the number of lines and words in a text file.
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    ifstream file("output.txt");

    if (!file) {
        cout << "File could not be opened!" << endl;
        return 1;
    }

    string line;
    int lineCount = 0, wordCount = 0;

    while (getline(file, line)) {
        lineCount++;
        stringstream ss(line);
        string word;
        while (ss >> word)
            wordCount++;
    }

    file.close();

    cout << "Total Lines: " << lineCount << endl;
    cout << "Total Words: " << wordCount << endl;

    return 0;
}



// Output:
// Total Lines: 2
// Total Words: 7


// File content:
// Hello, this is Viraj.
// Adding more data.
