/*
 *  LargestSumSubArray.cpp
 *
 *  Created on: 31-Dec-2021
 *  Author: Dhvanish Thakkar
 */

#include<iostream>

using namespace std;
/*
*   Function Name : LargestSumSubArray 
*   
*   Time Complexity Analysis : 
*
*   1st loop = O(N)
*   2nd loop = O(N)
*   3rd loop = O(N)
*   So, TCA = N * N * N = N ^ 3
*/
int LargestSumSubArray(int arr[], int size)
{
	int currentSum = 0;
	int largestSum = 0;

	for(int i = 0; i < size; i++)
	{
	  for(int j = i; j < size; j++)
	  {
	    currentSum = 0;
	    for(int k = i; k <= j; k++)
	    {
	    	currentSum += arr[k];  
	    }
	    largestSum = max(largestSum, currentSum);
	  }
	}
	return largestSum;
}

/* Main Funcation */
int main()
{
  int arr[] = {0,1,5,-1,6,-15,7,2,8};
  int size = sizeof(arr)/sizeof(int);
  
  /* Printing all the elements in the array */
  cout << "Print the elements before serching largest sub array sum : " << endl;
  for(int i = 0; i < size; i++)
    cout << arr[i] << ",";
  cout << endl << endl;
  
  /* Call the function */
  cout << "LargestSum of Sub Array is : " << LargestSumSubArray(arr, size) << endl;
  
  return 0;
}