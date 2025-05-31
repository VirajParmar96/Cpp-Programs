/*
  Program: Find Smallest Element in Array
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to find the smallest element in an integer array.
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

    int min = arr[0];

    // Find minimum
    for (int i = 1; i < n; ++i)
        if (arr[i] < min)
            min = arr[i];

    // Output result
    cout << "Smallest element: " << min << endl;

    return 0;
}



// Output:
// Enter the number of elements: 5
// Enter 5 elements:
// 32 11 98 4 21
// Smallest element: 4
