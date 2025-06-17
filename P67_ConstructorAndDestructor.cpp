/*
  Program: Constructor and Destructor
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to demonstrate the use of constructor and destructor in a class.
*/

#include <iostream>
using namespace std;

class Demo {
public:
    // Constructor
    Demo() {
        cout << "Constructor called: Object created!" << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called: Object destroyed!" << endl;
    }

    void greet() {
        cout << "Hello from the Demo class!" << endl;
    }
};

int main() {
    Demo d1;       // Object created -> Constructor called
    d1.greet();    // Use the object

    return 0;      // Object destroyed -> Destructor called automatically
}



// Output:
// Constructor called: Object created!
// Hello from the Demo class!
// Destructor called: Object destroyed!
