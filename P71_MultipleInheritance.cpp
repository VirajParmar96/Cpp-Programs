/*
  Program: Multiple Inheritance
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to demonstrate multiple inheritance in C++.
*/

#include <iostream>
using namespace std;

// Base class 1
class Engine {
public:
    void showEngine() {
        cout << "This is an engine." << endl;
    }
};

// Base class 2
class Wheels {
public:
    void showWheels() {
        cout << "This has wheels." << endl;
    }
};

// Derived class
class Car : public Engine, public Wheels {
public:
    void showCar() {
        cout << "This is a car." << endl;
    }
};

int main() {
    Car c;
    c.showEngine();
    c.showWheels();
    c.showCar();

    return 0;
}



// Output:
// This is an engine.
// This has wheels.
// This is a car.
