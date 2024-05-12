/*
 * MoveZeroAtEnd.cc
 *
 *  Created on: 09-May-2024
 *      Author: Dhvanish Thakkar
 */

/****************************************************************
 * WAP to remove duplicates from sorted array
 ****************************************************************/

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

/************************************************************************************************
 *
 * There are few ways to approach this problem
 *     1) Two pointer method
 *     2) Search for non-zero element and take it forward and remaining place put default zeros
 *
 * Time Complexity = O(N)
 * space Complexity = O(1)
 *
 ************************************************************************************************/
void MoveZeroAtEnd_1(vector<int> &nums)
{
	int start = 0;
	int end = nums.size() - 1;

	while (start <= end)
	{
		if (nums[start] == 0)
		{
			swap(nums[start], nums[end]);
			end--;
		} else
		{
			start++;
		}
	}

	return;
}

/***********************************************************************
 *
 * Time Complexity = O(N)
 * space Complexity = O(1)
 *
 ***********************************************************************/
void MoveZeroAtEnd_2(vector<int> &nums)
{
	int curr = 0;
	int run = 0;

	while (run < nums.size())
	{
		if (nums[run] != 0)
		{
			nums[curr++] = nums[run];
		} else
			run++;
	}

	while (curr < nums.size())
		nums[curr++] = 0;

	return;
}

int main()
{
	vector<int> nums1 = { 0, 1, 0, 3, 12, 0 };

	cout << "Before moving zero's in nums1 array : " << endl;
	for (auto num : nums1)
		cout << num << ",";
	cout << endl;

	// Function call
	MoveZeroAtEnd_1(nums1);

	cout << "After moving zero's nums1 array : " << endl;
	for (auto num : nums1)
		cout << num << ",";
	cout << endl;

	cout << "==========================================" << endl;

	vector<int> nums2 = { 0, 1, 0, 3, 12, 0 };
	cout << "Before moving zero's in nums2 array : " << endl;

	for (auto num : nums2)
		cout << num << ",";
	cout << endl;

	// Function call
	MoveZeroAtEnd_1(nums2);

	cout << "After moving zero's nums2 array : " << endl;
	for (auto num : nums2)
		cout << num << ",";
	cout << endl;

	return 0;
}

