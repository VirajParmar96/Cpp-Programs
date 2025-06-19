/*
  Program: Single Inheritance
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to demonstrate single inheritance in C++.
*/

#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Dog d;
    d.sound();  // Inherited function
    d.bark();   // Own function

    return 0;
}


// Output:
// Animal makes a sound.
// Dog barks.
