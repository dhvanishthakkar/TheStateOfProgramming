/*
 * MaxSumSubArray.cpp
 *
 *  Created on: 02-Jan-2022
 *      Author: dhvanish
 */
#include<iostream>

using namespace std;

/* Using Kedanse Algorithm */
void MaxSumSubArray(int arr[], int size)
{
	int currSum = 0, maxSum = 0;
	
	for (int i = 0; i < size; i++)
	{
		currSum = currSum + arr[i];
	    if (currSum < 0)
		{
			currSum = 0;
		}
		
		if (currSum > maxSum)
		{
			maxSum = currSum;
		}
	}
	
	cout << "Max sum of sub array is : " << maxSum << endl;
	return;
}

/* Main Fuction */
int main()
{
	int arr[] = {-2,3,4,-1,5,-12,6,1,3};
	int size = sizeof(arr)/sizeof(int);
	
	/* Print the all elements */
	cout << "Print all the elements from the Array : " << endl;
	for(int i = 0; i < size; i++)
		cout << arr[i] << ",";
	
	cout << endl;
	
	/* Call the function */
	MaxSumSubArray(arr, size);

	cout << endl;
		
    return 0;	
}

