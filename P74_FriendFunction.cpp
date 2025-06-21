/*
  Program: Friend Function
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to demonstrate the use of a friend function to access private members of a class.
*/

#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box() {
        length = 0;
    }

    void setLength(int l) {
        length = l;
    }

    // Friend function declaration
    friend void printLength(Box b);
};

// Friend function definition
void printLength(Box b) {
    cout << "Length of box: " << b.length << endl;
}

int main() {
    Box b1;
    b1.setLength(10);

    printLength(b1); // Access private member using friend function

    return 0;
}



// Output:
// Length of box: 10
