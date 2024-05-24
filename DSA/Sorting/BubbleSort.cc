/*
 * BubbleSort.cc
 *
 *  Created on: 24-May-2024
 *      Author: Dhvanish Thakkar
 */

#include<iostream>
#include<vector>

using namespace std;

/*****************************************************************************
 *
 *  Description :   
 *    - WAP to sort the array using bubble sort
 * 
 *  Solution : 
 *   - Here we need bubbling up largest element and push it to the end.
 *   - Bubble sort with most optimized way
 *
 *  Time  Complexity : O(N^2)
 *  Space Complexity : O(1)
 *
 *****************************************************************************/

void BubbleSort(vector<int> &nums)
{
	for (int i = 0; i < nums.size(); i++)
	{
		int count = 0;
		for (int j = 0; j < nums.size() - i -1; j++)
		{
			if (nums[j] > nums[j+1])
			{
				swap(nums[j], nums[j+1]);
				count++;
			}
		}

		// If there is no swap happen then array is already sorted which saves time
		if (count == 0)
			break;
	}

	return;
}

// Main Function
int main()
{
	vector<int> nums = {2,6,4,3,1,5,9,8,11,0};
	
	cout << "Display Input Array : " << endl;
	for(auto ele : nums)
		cout << ele << ",";
	cout << endl;
			
	// Function call
	BubbleSort(nums);
	
	cout << "Display Output Array : " << endl;
	for(auto ele : nums)
		cout << ele << ",";
	cout << endl;

	return 0;
}
