/*
  Program: Function to Add Two Numbers
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program that defines and uses a function to add two numbers.
*/

#include <iostream>
using namespace std;

// Function declaration
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, sum;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Function call
    sum = add(num1, num2);

    cout << "Sum = " << sum << endl;

    return 0;
}


// Output:
// Enter two numbers: 15 30
// Sum = 45
