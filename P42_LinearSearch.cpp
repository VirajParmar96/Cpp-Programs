/*
  Program: Linear Search
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to perform linear search in an integer array.
*/

#include <iostream>
using namespace std;

int main() {
    int n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;

    // Linear Search
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key) {
            cout << key << " found at index " << i << endl;
            return 0;
        }
    }

    cout << key << " not found in the array.\n";
    return 0;
}



// Output:
// Enter number of elements: 5
// Enter 5 elements:
// 10 20 30 40 50
// Enter element to search: 30
// 30 found at index 2
