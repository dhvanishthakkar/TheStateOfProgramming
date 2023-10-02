/*
 * ArrayReverse.cpp
 *
 *  Created on: 30-Dec-2022
 *  Author    : Dhvanish Thakkar
 *
 */

#include <iostream>

using namespace std;

/*
 * Time Complexity of this code is O(N/2) --> (Big O of N/2)
 * Space Complexity is O(1)
 *
 */
void ArrayReverse(int arr[], int size) {
  cout << "INFO : Inside the Array Reverse Function..." << endl;
  for (int i = 0, j = size - 1; i < j; i++, j--)
    swap(arr[i], arr[j]);

  return;
}

int main() {
  cout << "INFO : This is Reversing the Array Program..." << endl;

  int arr[] = { 1, 3, 5, 7, 9, 10, 13 };
  int size = sizeof(arr) / sizeof(int);

  cout << "INFO : Print the elements" << endl;

  for (auto print : arr)
    cout << print << ",";
  cout << endl;

  ArrayReverse(arr, size);

  cout << "INFO : After Reversing the Array" << endl;

  for (auto print : arr)
    cout << print << ",";

  cout << endl;

  return 0;
}
