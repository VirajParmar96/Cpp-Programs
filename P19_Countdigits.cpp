/*
  Program: Count Digits in a Number
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to count the number of digits in a given integer.
*/

#include <iostream>
using namespace std;

int main() {
    int num, count = 0;

    // Input
    cout << "Enter an integer: ";
    cin >> num;

    int original = num;

    // Handle 0 separately
    if (num == 0) {
        count = 1;
    } else {
        while (num != 0) {
            num /= 10;
            ++count;
        }
    }

    // Output
    cout << "Number of digits in " << original << " is: " << count << endl;

    return 0;
}


// Output:
// Enter an integer: 98765
// Number of digits in 98765 is: 5
