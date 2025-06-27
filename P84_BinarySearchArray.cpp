/*
  Program: Binary Search in Array
  Level  : Basic / Intermediate
  Author : Viraj Parmar
  Description:
    A program to perform binary search on a sorted array.
*/

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1; // Not found
}

int main() {
    int arr[100], n, key;

    cout << "Enter number of elements (sorted array): ";
    cin >> n;

    cout << "Enter " << n << " sorted elements:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;

    int index = binarySearch(arr, n, key);

    if (index != -1)
        cout << "Element found at index " << index << "." << endl;
    else
        cout << "Element not found in array." << endl;

    return 0;
}




// Output:
// Enter number of elements (sorted array): 5
// Enter 5 sorted elements:
// 10 20 30 40 50
// Enter element to search: 30
// Element found at index 2.
