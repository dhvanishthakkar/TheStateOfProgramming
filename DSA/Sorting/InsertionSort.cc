/*
 * InsertionSort.cc
 *
 *  Created on: 24-May-2024
 *      Author: Dhvanish Thakkar
 */

#include <iostream>
#include <vector>

using namespace std;

/*******************************************************************************
 *
 *  Description :
 *   - WAP to sort array using Insertion sort
 *
 *  Solution : 
 *   - You need to divide array into 2 parts and bring the smallest element at front
 *
 *  Time  Complexity : O(N^2)
 *  Space Complexity : O(1)
 *
 *******************************************************************************/
void InsertionSort(vector<int>&nums)
{
	int i = 0;
	while (i < nums.size()-1)
	{
		int j = i;
		if (nums[j] > nums[j+1])
		{
			int temp = nums[j+1];
			// continue to replace until smallest element you found
			while(nums[j] > temp && j >= 0)
			{
				nums[j+1] = nums[j];
				j--;
			}
			nums[j+1] = temp;
		}
		i++;
	}

	return;
}

// Main Function
int main()
{
	vector<int> nums = {2,4,1,0,10,6,5,9,8,3};

	cout << "Display Input Array : " << endl;
	for (auto ele : nums)
		cout << ele << ",";
	cout << endl;

	// Insertion sort
	InsertionSort(nums);

	cout << "Display Output Array : " << endl;
	for (auto ele : nums)
		cout << ele << ",";
	cout << endl;

    return 0;	
}