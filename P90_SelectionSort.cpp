/*
  Program: Selection Sort
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to sort an array using selection sort algorithm.
*/

#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;

        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }

        if (minIndex != i)
            swap(arr[i], arr[minIndex]);
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

    selectionSort(arr, n);
    printArray(arr, n);

    return 0;
}




// Output:
// Enter number of elements: 5
// Enter 5 elements:
// 64 25 12 22 11
// Sorted Array: 11 12 22 25 64
