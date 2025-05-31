/*
  Program: Find Largest Element in Array
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to find the largest element in an integer array.
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

    int max = arr[0];

    // Find maximum
    for (int i = 1; i < n; ++i)
        if (arr[i] > max)
            max = arr[i];

    // Output result
    cout << "Largest element: " << max << endl;

    return 0;
}



// Output:
// Enter the number of elements: 5
// Enter 5 elements:
// 10 55 23 9 44
// Largest element: 55
