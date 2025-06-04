/*
  Program: Binary Search
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to perform binary search in a sorted array.
*/

#include <iostream>
using namespace std;

int main() {
    int n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " sorted elements:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;

    int low = 0, high = n - 1, mid;
    
    // Binary Search
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            cout << key << " found at index " << mid << endl;
            return 0;
        } else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << key << " not found in the array.\n";
    return 0;
}



// Output:
// Enter number of elements: 5
// Enter 5 sorted elements:
// 5 10 15 20 25
// Enter element to search: 20
// 20 found at index 3
