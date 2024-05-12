/*
 * TwoSumTarget.cc
 *
 *  Created on: 10-May-2024
 *      Author: Dhvanish Thakkar
 */

/************************************************************************************************************************
 *  There are 2 ways to which interviewer can ask this question :
 *      1) WAP to add two numbers and it should be equal to given target value, Return first pair you found
 *      2) WAP to add two numbers which should be equal to target value, Return all possible pairs without duplication.
 *
 *  Solution :
 *    We can approach this problem many ways but we will implement only 2 solution.
 *
 *     1)  Using Map : Store all the given inputs as key and index num as value in MAP,
 *                     Start with first element and subtract it from target value,
 *                     Remaining value you need to find in the map if remaining target value
 *                     preset in the map then return the index number or move forward with other num.
 *
 *     2) Two Pointer Approach : (Binary Search Technique)
 *                    Take two pointer, First pointer (start pointer) point to first element of the array, 
 *                    Second pointer(end pointer) points to the last element of the array,
 *                    Add first element + last element and compare with target, If possible target value is greater then actual target
 *                    then you need to decrement end pointer by 1, Similar if possible target value is less then actual target
 *                    then increment the start pointer by 1. You need to do this until you find exact actual target or
 *                    Start <= end pointer. If you don't fine actual target then return -1.
 *
 *     Note : Here, They have asked us to return the pair not index, so we can also use two pointer approach and implement it.
 *            but when they ask us to return the index then you will not be able to use two pointer approach because for 2 pointer approach you need sorted array
 *            and while sorting an array you will miss the original index position. So in-case you need to return the index, You need to use MAP only.
 *
 ***************************************************************************************************************************/

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

/****************************************************************************
 * Description :
 *     WAP to find 1 pair which has sum of target number using MAP.
 *     Return the first pair you found.
 *
 * Time  Complexity :
 * Space Complexity :
 *
 ****************************************************************************/
vector<int> FindTwoSumTargetVal_Map(vector<int> &nums, int target)
{
	map<int, int> mp;
	vector<int> result;
	int targetSum = 0;

	for (int i = 0; i < nums.size(); i++)
	{
		mp.insert( { nums[i], i });
		targetSum = target - nums[i];

		if (mp.count(targetSum))
		{
			result.push_back(mp[targetSum]);
			result.push_back(i);
			return result;
		}
	}

	result.push_back(-1);
	return result;
}

/********************************************************************************
 *
 * Description :
 *     WAP to find target by adding 2 numbers. Return the first pair you found.
 *
 * Time  Complexity :
 * Space Complexity :
 *
 *********************************************************************************/
vector<int> FindTwoSumTargetVal_Pointer(vector<int> &nums, int target)
{
	int start = 0;
	int end = nums.size() - 1;
	vector<int> result;
	int currSum = 0;

	while (start <= end)
	{
		currSum = nums[start] + nums[end];
		if (currSum == target)
		{
			result.push_back(start);
			result.push_back(end);
			return result;
		} else if (currSum > target)
			end--;
		else
			start++;
	}

	result.push_back(-1);
	return result;
}

/***************************************************************************************************
 *
 * Description :
 *     WAP to find target by adding 2 numbers. Return the all possible pair without duplicating
 *
 * Time  Complexity :
 * Space Complexity :
 *
 ***************************************************************************************************/
vector<int> Find2SumTargetVal_Pointer(vector<int> &nums, int target)
{
	int start = 0;
	int end = nums.size() - 1;
	vector<int> result;
	int currSum = 0;

	while (start <= end)
	{
		currSum = nums[start] + nums[end];
		if (currSum == target)
		{
			result.push_back(start);
			result.push_back(end);

			int preStart = nums[start];
			int preEnd = nums[end];
			start++;
			end--;

			while (start <= end && (nums[end] == nums[preEnd]))
				end--;
			while (start <= end && (nums[preStart] == nums[start]))
				++start;

		} else if (currSum > target)
			end--;
		else
			start++;
	}

	return result;
}

// Main function start from here
int main()
{
	vector<int> nums = { 2, 7, 11, 15, 21 };
	int target = 0;

	cout << "Display Input Array : " << endl;
	for (auto num : nums)
		cout << num << ",";
	cout << endl;

	cout << "Enter the target value for above inputs  : ";
	cin >> target;
	cout << endl;

	// Function call
	vector<int> result1 = FindTwoSumTargetVal_Map(nums, target);

	// validations and display result
	if (result1.size() == 2)
		cout << "MAP         : Index1: " << result1[0] << ", Index2: "
				<< result1[1] << endl;
	else
		cout << "There is no match found for target value " << target << endl;

	// Function call
	vector<int> result2 = FindTwoSumTargetVal_Pointer(nums, target);

	// validations and display result
	if (result2.size() == 2)
		cout << "Two Pointer : Index1 : " << result2[0] << ", Index2 : "
				<< result2[1] << endl;
	else
		cout << "There is no match found for target value " << target << endl;

	// Function call
	target = 18;
	vector<int> dupNums = { 2, 3, 3, 5, 5, 5, 7, 11, 13, 13, 13, 15, 21 };
	vector<int> result3 = Find2SumTargetVal_Pointer(dupNums, target);

	// validations and display result
	if (result3.size() >= 2)
	{
		for (int i = 0; i < result3.size(); i++)
		{
			if (i == 0 || i % 2 == 0)
				cout << "No Duplicate pair: Index1 = " << result3[i];
			else
			{
				cout << ",  Index2 = " << result3[i] << endl;
			}
		}

	} else
	{
		cout << "There is no match for the target value : " << target << endl;
	}

	return 0;
}
