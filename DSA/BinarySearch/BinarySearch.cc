/*
 * BinarySearch.cc
 *
 *  Created on: 15-May-2024
 *      Author: Dhvanish Thakkar
 */

#include <iostream>
#include <vector>
#include<map>
#include <algorithm>

using namespace std;

/**************************************************************************************************
*  Description :
*   - Binary Search algorithm is very important and efficient algorithm to search any element.
*
*  Solution :
*   - Below steps you have to follow for binary search :
*       Step 1 : Firstly you need to make sure array should be sorted,
*                Binary search only works with sorted array. We need to use here two pointer approach.
*                -  Initially first pointer called as start pointer which will point at first element of the array.
*                -  Second pointer called as end pointer which will point at last element of the array initially.
*
*       Step 2 : You need to find middle element of the array and check if that is equal to target or not.
*                if you found element than return.
*       
*       Step 3 : If middle element is greater than target so bring end pointer at (middle element - 1).
*
*       Step 4 : If middle element of the array is less than target so bring start pointer at (middle element + 1).
*       
*       Step 5 : Repeat this process untill start <= end.
*
*  Time  Complexity :  O(N/2) ==> 0(log2N)
*
*  Space Complexity :  O(1)
*
***************************************************************************************************/
int BinarySearch (vector<int> &inputs, int target)
{
	int start = 0, end = inputs.size()-1, mid = 0;
	
	while(start <= end)
	{
		mid = ( (start+end)/2);
		if (inputs[mid] == target)
			return mid;
		else if (inputs[mid] > target)
			end --;
		else
			start++;
	}
	return -1;
}

// Main function
int main()
{
	vector<int> inputs = {0, 1, 2, 3, 5, 8, 9, 10};
	int target = 0;

	cout << "Display input array : " << endl;    
	for (auto num : inputs)
	    cout << num << ",";
	cout << endl;

	// Take user input for searching element in the array
	cout << "Enter the element you want to search in the array = " ;
	cin >> target;

	// Function call
	int result = BinarySearch(inputs, target);
	
	if (result != -1)
	{
		cout << "Given element is present in the array at : " << result << endl;
	}
	else
	{
		cout << "Given element is not present in the array " << endl;
	}
	return 0;
}