/*
 * SelectionSort.cc
 *
 *  Created on: 24-May-2024
 *      Author: Dhvanish Thakkar
 */

#include<iostream>
#include<vector>

using namespace std;

/***********************************************************************************
 *
 *  Description :   
 *    - WAP to sort the array using bubble sort
 *
 *  Solution : 
 *   - Here we need to find the min element of the array and bring at front
 *
 *  Time  Complexity : O(N^2)
 *  Space Complexity : 0(1)
 *
 ************************************************************************************/

void SelectionSort(vector<int> &nums)
{
	for (int i = 0; i < nums.size(); i++)
	{
	    int min_index = i;
	    for (int j = i+1; j < nums.size(); j++)
        {
	        if (nums[j] < nums[min_index])	
	        	min_index = j;
	    }
	    swap(nums[i], nums[min_index]);
	}
	return;
}

// Main Function
int main()
{
	vector<int> nums = {2,4,0,1,5,3};
	
	cout << "Display Input Array : " << endl;
	for(auto ele : nums)
		cout << ele << ",";
	cout << endl;
			
	// Function call
	SelectionSort(nums);
	
	cout << "Display Output Array : " << endl;
	for(auto ele : nums)
		cout << ele << ",";
	cout << endl;

	return 0;
}