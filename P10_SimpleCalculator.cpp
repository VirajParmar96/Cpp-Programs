/*
  Program: Simple Calculator (Switch Case)
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A simple calculator using switch-case to perform basic arithmetic operations.
*/

#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;

    // Input
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform operation
    switch(op) {
        case '+':
            cout << "Result = " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result = " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result = " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}


// Output:
// Enter an operator (+, -, *, /): *
// Enter two numbers: 5 4
// Result = 20
