/*
  Program: Merge Two Arrays
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A program to merge two arrays into a third array.
*/

#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    // Input size for first array
    cout << "Enter number of elements in first array: ";
    cin >> n1;

    int arr1[n1];
    cout << "Enter " << n1 << " elements for first array:\n";
    for (int i = 0; i < n1; ++i)
        cin >> arr1[i];

    // Input size for second array
    cout << "Enter number of elements in second array: ";
    cin >> n2;

    int arr2[n2];
    cout << "Enter " << n2 << " elements for second array:\n";
    for (int i = 0; i < n2; ++i)
        cin >> arr2[i];

    // Merge arrays
    int merged[n1 + n2];
    for (int i = 0; i < n1; ++i)
        merged[i] = arr1[i];
    for (int i = 0; i < n2; ++i)
        merged[n1 + i] = arr2[i];

    // Output merged array
    cout << "Merged array:\n";
    for (int i = 0; i < n1 + n2; ++i)
        cout << merged[i] << " ";

    cout << endl;
    return 0;
}



// Output:
// Enter number of elements in first array: 3
// Enter 3 elements for first array:
// 1 2 3
// Enter number of elements in second array: 3
// Enter 3 elements for second array:
// 4 5 6
// Merged array:
// 1 2 3 4 5 6
