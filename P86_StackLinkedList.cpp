/*
  Program: Stack Using Linked List
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to implement stack operations using linked list.
*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    void push(int val) {
        Node* newNode = new Node{val, top};
        top = newNode;
        cout << val << " pushed to stack." << endl;
    }

    void pop() {
        if (!top) {
            cout << "Stack Underflow!" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        cout << temp->data << " popped from stack." << endl;
        delete temp;
    }

    void display() {
        Node* temp = top;
        cout << "Stack (Top to Bottom): ";
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();

    return 0;
}




// Output:
// 10 pushed to stack.
// 20 pushed to stack.
// 30 pushed to stack.
// Stack (Top to Bottom): 30 20 10 
// 30 popped from stack.
// Stack (Top to Bottom): 20 10
