/*
  Program: Append Data to File
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to append new content to an existing text file.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("output.txt", ios::app); // Open in append mode

    if (!file) {
        cout << "File could not be opened for appending!" << endl;
        return 1;
    }

    string data;
    cout << "Enter text to append to the file: ";
    getline(cin, data);

    file << data << endl;
    file.close();

    cout << "Data appended to 'output.txt' successfully." << endl;

    return 0;
}
/*
  Program: Append Data to File
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to append new content to an existing text file.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("output.txt", ios::app); // Open in append mode

    if (!file) {
        cout << "File could not be opened for appending!" << endl;
        return 1;
    }

    string data;
    cout << "Enter text to append to the file: ";
    getline(cin, data);

    file << data << endl;
    file.close();

    cout << "Data appended to 'output.txt' successfully." << endl;

    return 0;
}



// Output:
// Enter text to append to the file: Adding more data.
// Data appended to 'output.txt' successfully.


// File content:
// Hello, this is Viraj.
// Adding more data.
