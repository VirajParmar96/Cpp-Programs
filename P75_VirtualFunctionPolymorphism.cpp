/*
  Program: Virtual Functions and Polymorphism
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to demonstrate runtime polymorphism using virtual functions.
*/

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows." << endl;
    }
};

int main() {
    Animal* a;

    Dog d;
    Cat c;

    a = &d;
    a->sound(); // Calls Dog's version

    a = &c;
    a->sound(); // Calls Cat's version

    return 0;
}



// Output:
// Dog barks.
// Cat meows.
