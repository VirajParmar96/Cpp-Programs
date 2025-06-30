/*
  Program: Binary Search Tree - Insert and Search
  Level  : Intermediate / Advanced
  Author : Viraj Parmar
  Description:
    A program to implement insertion and search in a Binary Search Tree (BST).
*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

class BST {
private:
    Node* root;

    Node* insert(Node* node, int val) {
        if (!node)
            return new Node{val, nullptr, nullptr};

        if (val < node->data)
            node->left = insert(node->left, val);
        else if (val > node->data)
            node->right = insert(node->right, val);

        return node;
    }

    bool search(Node* node, int key) {
        if (!node)
            return false;
        if (node->data == key)
            return true;
        if (key < node->data)
            return search(node->left, key);
        return search(node->right, key);
    }

    void inorder(Node* node) {
        if (node) {
            inorder(node->left);
            cout << node->data << " ";
            inorder(node->right);
        }
    }

public:
    BST() {
        root = nullptr;
    }

    void insert(int val) {
        root = insert(root, val);
    }

    void search(int key) {
        if (search(root, key))
            cout << key << " found in the tree." << endl;
        else
            cout << key << " not found in the tree." << endl;
    }

    void displayInorder() {
        cout << "Inorder Traversal: ";
        inorder(root);
        cout << endl;
    }
};

int main() {
    BST tree;
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);

    tree.displayInorder();

    tree.search(30);
    tree.search(90);

    return 0;
}



// Output:
// Inorder Traversal: 20 30 40 50 70 
// 30 found in the tree.
// 90 not found in the tree.
