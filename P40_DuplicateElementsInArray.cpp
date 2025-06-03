/*
  Program: Find Duplicate Elements in Array
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to find and display duplicate elements from an integer array.
*/

#include <iostream>
using namespace std;

int main() {
    int n;

    // Input array size
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // Input array elements
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << "Duplicate elements are:\n";
    bool found = false;

    // Check for duplicates
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                found = true;
                break;
            }
        }
    }

    if (!found)
        cout << "No duplicates found.";

    cout << endl;
    return 0;
}



// Output:
// Enter the number of elements: 6
// Enter 6 elements:
// 1 4 2 7 4 1
// Duplicate elements are:
// 1 4
