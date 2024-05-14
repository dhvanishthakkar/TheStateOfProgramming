/*
 * FindMaxSubArray.cc
 *
 *  Created on: 12-May-2024
 *      Author: Dhvansh Thakkar
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*****************************************************************************************************
 *  Description : 
 *      WAP to find the maximum of every sub-array of size K
 *      - Here you need to find out max element in widowsize and store it.
 *
 *  Solution :
 *      - This problem can be solve using Sliding window technique
 *
 *  Time Complexity = O(N*WidowSize)      
 *  Space Complexity = Algorithm is not using any extra space but storing output takings 0(N) space.
 ******************************************************************************************************/

vector<int> MaxSubArray(vector<int> &nums, int windowSize)
{
	int maxElement = 0;
	vector<int> result;

	for (int i = 0; i < nums.size(); i++)
	{
		if (i + windowSize-1 < nums.size())
		{
		    maxElement = 0;	
		    for (int j = i; j < windowSize + i; j++)
		    {
			    maxElement = max(nums[j], maxElement);
		    }
		    result.push_back(maxElement);
		}
		else
			break;
	}
	
	return result;
}

// Main function
int main()
{
	vector<int> nums = {1, 2, 3, 1, 4, 5, 2, 3, 6};
	int windowSize = 3;
	
	// Display input array
	cout << "Display input array : " << endl;
	for (auto num : nums)
		cout << num << ",";
	cout << endl;
	
	cout << "Window Size = " << windowSize << endl;
	
	// Function call
	vector<int> result = MaxSubArray(nums, windowSize);
	
	// Display output array
	cout << "Display Output: " << endl;
	for (auto num : result)
	    cout << num << ",";
	cout << endl;
	
	return 0;
}