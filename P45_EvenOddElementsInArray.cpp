/*
  Program: Count Even and Odd Elements in Array
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to count the number of even and odd elements in an integer array.
*/

#include <iostream>
using namespace std;

int main() {
    int n;

    // Input array size
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    // Input array elements
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int evenCount = 0, oddCount = 0;

    // Count even and odd
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    // Output result
    cout << "Even elements count: " << evenCount << endl;
    cout << "Odd elements count : " << oddCount << endl;

    return 0;
}



// Output:
// Enter number of elements: 6
// Enter 6 elements:
// 10 23 4 7 8 9
// Even elements count: 3
// Odd elements count : 3
