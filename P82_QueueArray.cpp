/*
  Program: Implement Queue (Array)
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A menu-driven program to implement a queue using an array.
*/

#include <iostream>
using namespace std;

#define SIZE 100

class Queue {
private:
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = rear = -1;
    }

    void enqueue(int val) {
        if (rear >= SIZE - 1) {
            cout << "Queue Overflow!" << endl;
            return;
        }
        if (front == -1) front = 0;
        arr[++rear] = val;
        cout << val << " enqueued." << endl;
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow!" << endl;
            return;
        }
        cout << arr[front++] << " dequeued." << endl;
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    int choice, value;

    do {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.display();
                break;
        }
    } while (choice != 4);

    return 0;
}




// Output:
// 1. Enqueue
// 2. Dequeue
// 3. Display
// 4. Exit
// Enter choice: 1
// Enter value to enqueue: 15
// 15 enqueued.
