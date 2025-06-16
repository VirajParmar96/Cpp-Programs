/*
  Program: Check Armstrong Using Function
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to check whether a number is an Armstrong number using a function.
*/

#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int original = num, sum = 0, digits = 0;

    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    return sum == original;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number))
        cout << number << " is an Armstrong number." << endl;
    else
        cout << number << " is not an Armstrong number." << endl;

    return 0;
}



// Output:
// Enter a number: 153
// 153 is an Armstrong number.
