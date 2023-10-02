/*
 * PrintArrPairs.cpp
 *
 *  Created on: 31-Dec-2021
 *      Author: Dhvanish Thakkar
 */
#include <iostream>

using namespace std;

void PrintArrPairs(int arr[], int size) {

  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      cout << arr[i] << "," << arr[j] << endl;
    }
    cout << endl;
  }

  cout << "DONE" << endl;
}

/* Main Function */
int main() {
  int arr[] = { 10, 20, 30, 40, 50, 60, 70 };
  int size = sizeof(arr) / sizeof(int);

  /* Print all the elements */
  cout << "Before Pairing : " << endl;
  for (int i : arr)
    cout << i << ",";

  cout << endl << endl;

  /* Call the function */
  PrintArrPairs(arr, size);

  return 0;
}

