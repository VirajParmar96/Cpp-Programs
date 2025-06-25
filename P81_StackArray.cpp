/*
  Program: Implement Stack (Array)
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A menu-driven program to implement a stack using an array.
*/

#include <iostream>
using namespace std;

#define SIZE 100

class Stack {
private:
    int arr[SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int val) {
        if (top >= SIZE - 1) {
            cout << "Stack Overflow!" << endl;
        } else {
            arr[++top] = val;
            cout << val << " pushed into stack." << endl;
        }
    }

    void pop() {
        if (top < 0) {
            cout << "Stack Underflow!" << endl;
        } else {
            cout << arr[top--] << " popped from stack." << endl;
        }
    }

    void display() {
        if (top < 0) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; --i) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.display();
                break;
        }
    } while (choice != 4);

    return 0;
}




// Output:
// 1. Push
// 2. Pop
// 3. Display
// 4. Exit
// Enter choice: 1
// Enter value to push: 10
// 10 pushed into stack.
