/*
 * FindSubsets.cc
 *
 *  Created on: 23-May-2024
 *      Author: Dhvanish Thakkar
 */
#include<iostream>
#include<vector>

using namespace std;

/***************************************************************************************************
 *  
 *  Description : 
 *   - Given an integer array nums of unique elements, return all possible subsets (the power set).
 *     The solution set must not contain duplicate subsets. Return the solution in any order.
 *
 *  Example : Input: nums = [1,2,3] ==> Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
 *
 *  LeetCode : 78
 *
 *  Solution :
 *    - This problem can be solve using recursion and backtracking
 *    - In subset, Every number can be part of the set and not part of the set
 *    - So In-Order to do that we need to make num once part of the set and then remove it.
 *
 *  Time  Complexity : 
 *  Space Complexity : 
 *
 *****************************************************************************************************/
void FindSubsets(int i, vector<int> &nums, vector<int> &subsets, vector<vector<int>> &ans)
{
	if (i == nums.size())
	{
		ans.push_back(subsets);
		return;
	}

	// Num is part of subset
	subsets.push_back(nums[i]);

	// Ask Recursion to complete rest task and backtrack it
	FindSubsets(i+1, nums, subsets, ans);

	// Num is not part of the subset
	subsets.pop_back();

	// Ask Recursion to complete rest task and backtrack it
	FindSubsets(i+1, nums, subsets, ans);

	return;
}

// Main Function
int main()
{
	vector<int> nums = {1,2,3};
	vector<int> subsets;
	vector<vector<int>> ans;

	cout << "Display Input Array " << endl;
    for (auto ele : nums)
    	cout << ele;
    cout << endl;

	// Function call
    FindSubsets(0, nums, subsets, ans);

    // Display Output
    cout << "Output : " << endl;
    for (auto output : ans)
    {
    	cout << "[";
    	for (int i = 0; i < output.size(); i++)
    	{
    		cout << output[i];
    		if (i != output.size()-1)
    			cout << ",";
    	}
    	cout << "]" << ",";
    }

    cout<< endl;

	return 0;
}