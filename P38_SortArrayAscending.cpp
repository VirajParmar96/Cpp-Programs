/*
  Program: Sort Array in Ascending Order
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to sort an array in ascending order using Bubble Sort.
*/

#include <iostream>
using namespace std;

int main() {
    int n;

    // Input size
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // Input elements
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    // Bubble sort logic
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Output sorted array
    cout << "Array in ascending order:\n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}



// Output:
// Enter the number of elements: 6
// Enter 6 elements:
// 5 3 9 1 4 2
// Array in ascending order:
// 1 2 3 4 5 9
