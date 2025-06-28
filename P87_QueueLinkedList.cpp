/*
  Program: Queue Using Linked List
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to implement queue operations using linked list.
*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = rear = nullptr;
    }

    void enqueue(int val) {
        Node* newNode = new Node{val, nullptr};
        if (!rear) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << val << " enqueued." << endl;
    }

    void dequeue() {
        if (!front) {
            cout << "Queue Underflow!" << endl;
            return;
        }
        Node* temp = front;
        front = front->next;
        if (!front) rear = nullptr;
        cout << temp->data << " dequeued." << endl;
        delete temp;
    }

    void display() {
        Node* temp = front;
        cout << "Queue (Front to Rear): ";
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(100);
    q.enqueue(200);
    q.enqueue(300);
    q.display();
    q.dequeue();
    q.display();

    return 0;
}



// Output:
// 100 enqueued.
// 200 enqueued.
// 300 enqueued.
// Queue (Front to Rear): 100 200 300
// 100 dequeued.
// Queue (Front to Rear): 200 300
