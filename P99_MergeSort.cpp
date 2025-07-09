/*
  Program: Merge Sort
  Level  : Advanced
  Author : Viraj Parmar
  Description:
    A program to sort an array using the Merge Sort algorithm.
*/

#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temp arrays
    int L[n1], R[n2];

    // Copy data
    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    // Merge the temp arrays back into arr[]
    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    // Copy remaining elements
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge them
        merge(arr, left, mid, right);
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

    mergeSort(arr, 0, n - 1);
    printArray(arr, n);

    return 0;
}





// Output:
// Enter number of elements: 6
// Enter 6 elements:
// 38 27 43 3 9 82
// Sorted Array: 3 9 27 38 43 82
