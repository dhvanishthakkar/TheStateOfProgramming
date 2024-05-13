/*
 * ThreeSum.cc
 *
 *  Created on: 13-May-2024
 *      Author: Dhvanish Thakkar
 */

#include <iostream>
#include <vector>

using namespace std;

/************************************************************************************************************************
 *  Description :
 *      Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, 
 *      and nums[i] + nums[j] + nums[k] == 0. Notice that the solution set must not contain duplicate triplets.  
 *
 *  Solution :
 *      - Here we have to add 3 numbers and if sum of 3 numbers is 0 then we need to return the 3 index value.
 *      - Make sure array should be sorted if not then sort first, sorting will take nlogn time complexity
 *      - This question can be ask 2 ways : 
 *            1) Add 3 index and return the 3 index value if sum is 0.
 *            2) Add 3 index and return all possible trippletes without duplication of pair
 *
 ***************************************************************************************************************************/

/*
 * Given array is sorted but if it is not sorted then sort it
 * 
 * Time complexity = O(N) * O(N) = O(N^2) + if you need to sort the array then (NLogN^2)
 *                   Here removing constant so we go final time complexity = O(N^2)
 */

vector<int> ThreeSum_1(vector<int> &nums)
{	
	vector<int> result;
	int start = 0, end = 0, threeSum = 0;

	for (int i = 0; i < nums.size(); i++)
	{
		start = i+1;
		end = nums.size()-1;

		while (start < end)
		{
			threeSum = nums[start] + nums[end] + nums[i]; 
			if (threeSum == 0)
			{
				result.push_back(nums[i]);
				result.push_back(nums[start]);
				result.push_back(nums[end]);
				return result;
			}
			else if (threeSum > 0)
			{
				start --;
			}
			else
				end--;
		}
	}	
	return result;
}

/*
 * Given array is sorted but if it is not sorted then sort it
 * 
 * Time complexity = O(N) * O(N) = O(N^2) + if you need to sort the array then nLogN^2
 *                   Here removing constant so we go final time complexity = O(N^2)
 */
vector<vector<int>> ThreeSum_2(vector<int> &nums)
{
	vector<vector<int>> result;
	int start = 0, end = 0, threeSum = 0;

	for (int i = 0; i < nums.size(); i++)
	{
		if (i > 0 && (nums[i] == nums[i-1]))
			continue;

		start = i+1;
		end = nums.size()-1;
		

		while (start < end)
		{
			threeSum = nums[start] + nums[end] + nums[i]; 
			if (threeSum == 0)
			{
				vector<int> ans = {nums[i], nums[start], nums[end]};
				result.push_back(ans);
				start++;
				end --;
				
				while(start <= end && (nums[start] == nums[start-1])) start++;
				while(start <= end && (nums[end] == nums[end+1])) end--;
			}
			else if (threeSum > 0)
			{
				start --;
			}
			else
				end--;
		}
	}	
	return result;
}

int main()
{
	vector<int> nums = {-4, -1, -1, 0, 1, 2, -3};
	
	cout << "Display Input Array : " << endl;
	for (auto num : nums)
		cout << num << ",";
	cout << endl;

	// Function_1 call
	vector<int> result_1 = ThreeSum_1(nums);
	
	if (result_1.size())
	{
		cout << "Display Output : " << endl;
		for (auto num : result_1)
			cout << num << ",";
		cout << endl;
	}
	else
	{
		cout << "Did not find any index's which has sum 0 with tripplets in the given array" << endl;
	}

	// Function_2 call
	vector<vector<int>> result_2 = ThreeSum_2(nums);
	
	if (result_2.size())
	{
		cout << "Display Output : " << endl;
		for (auto result : result_2)
		{
			for (auto num: result)
			    cout << num << ",";
			cout << endl;
		}
	}
	else
	{
		cout << "Did not find any index's which has sum 0 with tripplets in the given array " << endl;
	}
	
	return 0;
}