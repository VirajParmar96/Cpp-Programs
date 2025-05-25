/*
  Program: Print Star Pyramid
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to print a pyramid pattern using stars (*).
*/

#include <iostream>
using namespace std;

int main() {
    int rows;

    // Input
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Pyramid pattern
    for (int i = 1; i <= rows; ++i) {
        // Print spaces
        for (int space = 1; space <= rows - i; ++space) {
            cout << " ";
        }

        // Print stars
        for (int star = 1; star <= 2 * i - 1; ++star) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}



// Output:
// Enter the number of rows: 5
//     *
//    ***
//   *****
//  *******
// *********
