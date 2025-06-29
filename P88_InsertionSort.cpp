/*
  Program: Insertion Sort
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to sort an array using insertion sort algorithm.
*/

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        // Shift elements greater than key to the right
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
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

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}


// Output:
// Enter number of elements: 5
// Enter 5 elements:
// 5 3 1 4 2
// Sorted Array: 1 2 3 4 5
