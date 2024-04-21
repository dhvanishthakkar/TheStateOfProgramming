/*
 * PrintSubArray.cpp
 *
 *  Created on: 31-Dec-2021
 *      Author: Dhvanish Thakkar
 */

#include <iostream>

using namespace std;


/* Time complexity :
 *		First loop  = O(N)
 *      Second loop = O(N)
 *      Third Loop  = O(N)
 *  So TCA = N * N * N = N ^ 3
 */
void PrintSubArrPairs(int arr[], int size) {

	for (int i = 0; i < size; i++)
	{
	  for(int j = i; j < size; j++)
	  {
	    for (int k = i; k <=j; k++)
	    {
	      cout << arr[k] << ",";
	    }
	    cout << endl;
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
  PrintSubArrPairs(arr, size);

  return 0;
}





