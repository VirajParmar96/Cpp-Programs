/*
  Program: Swap Using Call by Reference
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to swap two numbers using call by reference.
*/

#include <iostream>
using namespace std;

// Function to swap two variables using reference
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Before swapping: x = " << x << ", y = " << y << endl;

    swap(x, y); // call by reference

    cout << "After swapping:  x = " << x << ", y = " << y << endl;

    return 0;
}


// Output:
// Enter two numbers: 10 20
// Before swapping: x = 10, y = 20
// After swapping:  x = 20, y = 10
