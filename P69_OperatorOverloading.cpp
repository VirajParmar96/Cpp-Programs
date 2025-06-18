/*
  Program: Operator Overloading
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to overload the '+' operator to add two complex numbers using a class.
*/

#include <iostream>
using namespace std;

class Complex {
public:
    float real, imag;

    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    // Overload + operator
    Complex operator + (const Complex &obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.5, 2.5), c2(1.5, 4.5);
    Complex result = c1 + c2;

    cout << "Result of addition: ";
    result.display();

    return 0;
}


// Output:
// Result of addition: 5 + 7i
