/*
  Program: Class and Object Example
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A basic example to demonstrate class and object in C++.
*/

#include <iostream>
using namespace std;

// Define a class
class Student {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age : " << age << endl;
    }
};

int main() {
    Student s1; // Create object of Student

    s1.name = "Viraj";
    s1.age = 20;

    s1.display(); // Call member function

    return 0;
}


// Output:
// Name: Viraj
// Age : 20
