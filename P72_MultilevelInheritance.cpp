/*
  Program: Multilevel Inheritance
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to demonstrate multilevel inheritance in C++.
*/

#include <iostream>
using namespace std;

// Base class
class Grandparent {
public:
    void grandparentFunc() {
        cout << "I am the grandparent." << endl;
    }
};

// Derived from Grandparent
class Parent : public Grandparent {
public:
    void parentFunc() {
        cout << "I am the parent." << endl;
    }
};

// Derived from Parent
class Child : public Parent {
public:
    void childFunc() {
        cout << "I am the child." << endl;
    }
};

int main() {
    Child c;
    c.grandparentFunc();
    c.parentFunc();
    c.childFunc();

    return 0;
}



// Output:
// I am the grandparent.
// I am the parent.
// I am the child.
