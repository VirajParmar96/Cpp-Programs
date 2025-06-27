/*
  Program: Linear Search in Array
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to perform linear search on an array.
*/

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key)
            return i; // Return index if found
    }
    return -1; // Not found
}

int main() {
    int arr[100], n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;

    int index = linearSearch(arr, n, key);

    if (index != -1)
        cout << "Element found at index " << index << "." << endl;
    else
        cout << "Element not found in array." << endl;

    return 0;
}



// Output:
// Enter number of elements: 5
// Enter 5 elements:
// 2 4 6 8 10
// Enter element to search: 6
// Element found at index 2.
