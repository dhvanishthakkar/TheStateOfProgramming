/*
 * QuickSort.cc
 *
 *  Created on: 24-May-2024
 *      Author: Dhvanish Thakkar
 */

#include<iostream>
#include<vector>

using namespace std;

/***************************************************************************************
 *
 *  Description :  
 *   - WAP to sort an array using merge sort
 *
 *  Solution :
 *   - This is also divide and conquar technique.
 *   - We will first first pivot element and rest of the task handle by recursion
 *   - We need to divide array into 2 parts, 1st part small num and another big num
 *
 *  Time  Complexity : O(NLogN)
 *  Space Complexity : O(1)
 *
 ****************************************************************************************/
int FindPivot(int start, int end, vector<int>&nums)
{
	int pivotIndex = start;
	int pivot = nums[end];

	while(start < end)
	{
		if (nums[start] < pivot)
		{
			swap(nums[start], nums[pivotIndex]);
			pivotIndex++;
		}
		start++;
	}
	
	// Replace the pivot element at it's right location
	swap(nums[pivotIndex], nums[pivot]);

	return pivotIndex;
}

void QuickSort(int start, int end, vector<int> &nums)
{
	if (start > end)
		return;
	
	int pivot = FindPivot(start, end, nums);
	QuickSort(start, pivot-1, nums);
	QuickSort(pivot+1, end, nums);
	return;
}

// Main Function
int main()
{
	vector<int> nums = {6,2,1,10,7,9,0,5};

	cout << "Display Input Array : " << endl;
	for (auto ele : nums)
		cout << ele << ",";
	cout << endl;
	
	// Quick sort
	QuickSort(0, nums.size()-1,nums);
	
	cout << "Display Output Array : " << endl;
	for (auto ele : nums)
		cout << ele << ",";
	cout << endl;

    return 0;	
}



