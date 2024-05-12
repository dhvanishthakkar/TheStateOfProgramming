/*
 * FindPivotIndex.cc
 *
 *  Created on: 12-May-2024
 *      Author: Dhvanish Thakkar
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**********************************************************************************************
 *  Description : 
 *      WAP to find the pivot index from the array
 *      
 *
 *  Solution :
 *      - Use prefix sum technique
 *          - Do total sum of array, use below formula
 *          - Formula = TotalSum - RunningSum == RunningSum - CurrIndex;
 *
 *  Time Complexity =  O(N) + O(N) = O(2N) ==> Removing constant so Final Tc = O(N)
 *  Space Complexity = O(1) as we have not used any extra space
 **********************************************************************************************/

int FindPivotIndex(vector<int> &nums)
{
    int totalSum = 0;
    int runningSum = 0;
    
    for (int i = 0; i < nums.size(); i++)
    {
    	totalSum += nums[i];
    }
 
    runningSum = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
    	runningSum += nums[i]; 
        if (totalSum - runningSum  == runningSum - nums[i])
        	return i;
    }
	
	return -1;
}

int main()
{
	vector<int> nums = {1, 7, 3, 6, 5, 6};
	
	// Display input array
	cout << "Display Input Array : " << endl;
	for (auto num : nums)
	    cout << num << ",";
	cout << endl;
	
	// Function call
	int pivotIndex = FindPivotIndex(nums);
	
	// Display output array
	if (pivotIndex != -1)
	    cout << "Found Pivot index : " << pivotIndex << endl;
	else
		cout << "No found any Pivot index in the array " << endl;
	
	return 0;
}
