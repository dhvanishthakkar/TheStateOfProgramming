/*
 * ReverseArray.cpp
 *
 * Created on: 31-Dec-2021
 * 
 * Author: Dhvanish Thakkar
 */

#include<iostream>

using namespace std;

/* Funcation for reversing the array elements */
void ReverseArray(int arr[], int size)
{
	int start = 0;
	int end = size - 1;
	
	while(start < end)
	{
		swap(arr[start], arr[end]);
		start++;
		end --;
	}
    return;	
}

/* Main Function */

int main()
{
	int arr[] = {1,2,3,5,7,8,9,11,13,15,17,19,21,25,30};
	int size = sizeof(arr)/sizeof(int);
	
	cout << "Before Reversing the Array : " << endl;
	
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ",";
	}
	
	cout << endl;
	
	ReverseArray(arr, size);
	
	cout << "After Reversing the Array : " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ",";
	}
	return 0;
}




