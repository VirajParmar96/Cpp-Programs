/*
  Program: Sum of Array Elements Using Recursion
  Level  : Intermediate
  Author : Viraj Parmar
  Description:
    A recursive program to find the sum of elements in an array.
*/

#include <iostream>
using namespace std;

int sumArray(int arr[], int size) {
    if (size == 0)
        return 0;
    return arr[size - 1] + sumArray(arr, size - 1);
}

int main() {
    int arr[100], n;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << "Sum of array elements = " << sumArray(arr, n) << endl;

    return 0;
}




// Output:
// Enter size of array: 5
// Enter 5 elements:
// 1 2 3 4 5
// Sum of array elements = 15
