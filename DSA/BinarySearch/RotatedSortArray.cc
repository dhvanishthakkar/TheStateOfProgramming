/*
 * RotatedSortArray.cc
 *
 *  Created on: 15-May-2024
 *      Author: Dhvanish Thakkar
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/***********************************************************************************************
 *  Description :
 *    - WAP to search in rotated sorted array
 * 
 *  Example : Input: nums = [4,5,6,7,0,1,2], target = 0 
 *
 *  Solution :
 *    - This is binary search problem where array is in rotated fashion and we need to identify
 *      the target element and return it's index.
 *
 *  Time Complexity  : O(Log2^N)
 *  Space Complexity : O(1) 
 *
 ***********************************************************************************************/

int RotatedArray(vector<int> &inputs, int target)
{
	int start = 0, end = inputs.size()-1, mid = 0;
	
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (inputs[mid] == target)
			return mid;
		else if (inputs[mid] >= inputs[0] && target < inputs[0])
		{
		    start = mid+1;
		}
		else if (inputs[mid] < target && target >= inputs[0])
		{
			end = mid-1;
		}
		else
		{
		    if (inputs[mid] > target)
		    	end = mid - 1;
		    else
		    	start = mid + 1;
		}
	}	
	return -1;
}

int main()
{
	vector<int> inputs = {4, 5, 6, 7, 0, 1, 2};
	int target = 0;

	cout << "Display input array : " << endl;    
	for (auto num : inputs)
	    cout << num << ",";
	cout << endl;

	// Function call
	int result = RotatedArray(inputs, target);
	
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



