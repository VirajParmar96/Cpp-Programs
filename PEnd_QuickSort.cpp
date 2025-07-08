/*
  Program: Quick Sort
  Level  : Advanced
  Author : Viraj Parmar
  Description:
    A program to sort an array using the Quick Sort algorithm.
*/

#include <iostream>
using namespace std;

// Partition function
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Choose the last element as pivot
    int i = low - 1;

    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot) {
            ++i;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Recursive Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        // Sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Utility function
void printArray(int arr[], int size) {
    cout << "Sorted Array: ";
    for (int i = 0; i < size; ++i)
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

    quickSort(arr, 0, n - 1);
    printArray(arr, n);

    return 0;
}





// Output:
// Enter number of elements: 6
// Enter 6 elements:
// 10 7 8 9 1 5
// Sorted Array: 1 5 7 8 9 10
