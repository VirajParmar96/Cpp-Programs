/*
  Program: Create and Write to a File
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to create a text file and write user input into it using fstream.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file; // Output file stream

    file.open("output.txt"); // Create and open file

    if (!file) {
        cout << "File could not be created!" << endl;
        return 1;
    }

    string data;
    cout << "Enter text to write to the file: ";
    getline(cin, data);

    file << data << endl; // Write to file

    file.close(); // Always close the file
    cout << "Data written to 'output.txt' successfully." << endl;

    return 0;
}




// Output:
// Enter text to write to the file: Hello, this is Viraj.
//Data written to 'output.txt' successfully.


// File Content:
// Hello, this is Viraj.

