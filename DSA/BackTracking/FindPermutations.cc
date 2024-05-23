/*
 * FindPermutations.cc
 *
 *  Created on: 23-May-2024
 *      Author: Dhvanish Thakkar
 */

#include<iostream>
#include<vector>

using namespace std;

/*************************************************************************************************
 *
 *  Description :  
 *    - Given an array nums of distinct integers, return all the possible permutations.
 *      You can return the answer in any order.
 *
 *  Example : Input: nums = [1,2,3] ==> Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
 *
 *  LeetCode : 46
 *
 *  Solution :
 *    - To solve this We need to use recursion with backtracking
 *    - Here we will fix the first index and remaining index we will tell recursion
 *      to permute it using backtracking
 *
 *  Time  Complexity :  
 *  Space Complexity : 
 *
 *************************************************************************************************/

void FindPermutations(int i, vector<int> &nums, vector<vector<int>> &ans)
{
	// Base condition
	if (i == nums.size())
	{
	    ans.push_back(nums);
	    return;
	}
	
	for (int j = i; j < nums.size(); j++)
	{
		swap(nums[i], nums[j]);

        // Recursively call function to compute rest of permutations
		FindPermutations(i + 1, nums, ans);

		// Back Tracking / Undo the things
		swap(nums[i], nums[j]);
	}
	
	return;
}

// Main Function
int main()
{
	vector<int> input = {1,2,3};
	vector<vector<int>> ans;
	
	cout << "Display the input array : " << endl;
	for (auto ele : input)
		cout <<ele<<",";
	cout << endl;

	// Function call
	FindPermutations(0, input, ans);
	
	// Display Output 
	cout << "Output : " << endl;
	for (auto output : ans) 
	{
		cout << "[";
		for (int i = 0; i < output.size(); i++)
		{
			cout << output[i];
			if(i != output.size()-1)
				cout << ",";
		}
	}
	cout << endl;

    return 0;
}