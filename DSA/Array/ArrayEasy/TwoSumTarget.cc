/*
 * TwoSumTarget.cc
 *
 *  Created on: 10-May-2024
 *      Author: Dhvanish Thakkar
 */

/*****************************************************************************************************
 *  WAP to add two numbers and it should be equal to given target value, Return the both index
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
 *****************************************************************************************************/

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> FindTwoSumTargetVal_Map(vector<int> &nums, int target) {
	map<int, int> mp;
	vector<int> result;
	int targetSum = 0;

	for (int i = 0; i < nums.size(); i++) {
		mp.insert( { nums[i], i });
		targetSum = target - nums[i];

		if (mp.count(targetSum)) {
			result.push_back(mp[targetSum]);
			result.push_back(i);
			return result;
		}
	}

	result.push_back(-1);
	return result;
}

vector<int> FindTwoSumTargetVal_Pointer(vector<int> &nums, int target) {
	int start = 0;
	int end = nums.size() - 1;
	vector<int> result;
	int currSum = 0;

	while (start <= end) {
		currSum = nums[start] + nums[end];
		if (currSum == target) {
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

int main() {

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
		cout << "MAP     : FirstIndex: " << result1[0] << ", SecondIndex: " << result1[1] << endl;
	else
		cout << "There is no 2 values which has sum of target value in the Array: "	<< target << endl;

	// Function call
	vector<int> result2 = FindTwoSumTargetVal_Pointer(nums, target);

	// validations and display result
	if (result2.size() == 2)
		cout << "POINTER : FirstIndex : " << result2[0] << ", SecondIndex : "
				<< result2[1] << endl;
	else
		cout << "There is no 2 values which has sum of target value in the Array : " << target << endl;

	return 0;
}
