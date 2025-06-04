/*
  Program: Reverse Array
  Level  : Basic
  Author : Viraj Parmar
  Description:
    A program to reverse the elements of an array.
*/

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    // Reverse logic
    for (int i = 0; i < n / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    // Output reversed array
    cout << "Reversed array:\n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}



// Output:
// Enter number of elements: 5
// Enter 5 elements:
// 10 20 30 40 50
// Reversed array:
// 50 40 30 20 10
