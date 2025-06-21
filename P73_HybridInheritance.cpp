/*
  Program: Hybrid Inheritance
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to demonstrate hybrid inheritance in C++.
*/

#include <iostream>
using namespace std;

// Base class
class Person {
public:
    void personInfo() {
        cout << "This is a person." << endl;
    }
};

// First level derived
class Employee : public Person {
public:
    void employeeInfo() {
        cout << "This is an employee." << endl;
    }
};

// Second base class
class Student {
public:
    void studentInfo() {
        cout << "This is a student." << endl;
    }
};

// Derived from both Employee and Student
class Intern : public Employee, public Student {
public:
    void internInfo() {
        cout << "This is an intern (hybrid inheritance)." << endl;
    }
};

int main() {
    Intern i;
    i.personInfo();
    i.employeeInfo();
    i.studentInfo();
    i.internInfo();

    return 0;
}



// Output:
// This is a person.
// This is an employee.
// This is a student.
// This is an intern (hybrid inheritance).
