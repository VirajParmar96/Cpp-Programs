/*
  Program: Bubble Sort
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to sort an array using bubble sort algorithm.
*/

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    bool swapped;

    for (int i = 0; i < n - 1; ++i) {
        swapped = false;

        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap adjacent elements
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) break; // Array already sorted
    }
}

void printArray(int arr[], int n) {
    cout << "Sorted Array: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[100], n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    bubbleSort(arr, n);
    printArray(arr, n);

    return 0;
}




// Output:
// Enter number of elements: 5
// Enter 5 elements:
// 4 2 5 1 3
// Sorted Array: 1 2 3 4 5
