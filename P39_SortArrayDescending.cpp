/*
  Program: Sort Array in Descending Order
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to sort an array in descending order using Bubble Sort.
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

    // Bubble Sort in descending order
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Output sorted array
    cout << "Array in descending order:\n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}



// Output:
// Enter the number of elements: 6
// Enter 6 elements:
// 7 2 9 5 1 4
// Array in descending order:
// 9 7 5 4 2 1
