/*
  Program: Function Overloading
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to demonstrate function overloading by defining multiple functions with the same name.
*/

#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator calc;

    cout << "add(5, 10) = " << calc.add(5, 10) << endl;
    cout << "add(3.2f, 4.8f) = " << calc.add(3.2f, 4.8f) << endl;
    cout << "add(1, 2, 3) = " << calc.add(1, 2, 3) << endl;

    return 0;
}
/*
  Program: Function Overloading
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to demonstrate function overloading by defining multiple functions with the same name.
*/

#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator calc;

    cout << "add(5, 10) = " << calc.add(5, 10) << endl;
    cout << "add(3.2f, 4.8f) = " << calc.add(3.2f, 4.8f) << endl;
    cout << "add(1, 2, 3) = " << calc.add(1, 2, 3) << endl;

    return 0;
}



// Output:
// add(5, 10) = 15
// add(3.2f, 4.8f) = 8
// add(1, 2, 3) = 6
