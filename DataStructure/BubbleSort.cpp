/*
 * BubbleSort.cpp
 *
 *  Created on: 05-Jan-2022
 *      Author: Dhvanish Thakkar
 */

#include<iostream>

using namespace std;

void BubbleSort(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i; j++)
		{
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j+1]);
		}
	}
	
	return;
}

int main()
{
	int arr[] = {-2, 0, 4, -1, 5, -12, 6, 7, 8};
	int size = sizeof(arr) / sizeof(int);
	
	/* Print the array */
	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << ",";
	}
	
	cout << endl;
	
	/* call the bubble sort functionality */
    BubbleSort(arr, size);
    
    /* After sorting array is */
    for(int i = 0; i < size; i++)
    {
    	cout << arr[i] << ",";
    }
    	
    cout << endl;
    
    return 0;
}