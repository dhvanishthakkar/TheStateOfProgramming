/*
 * RemoveDuplicates.cc
 *
 *  Created on: 09-May-2024
 *      Author: dhvanish
 */

/**************************************************************
 *
 * WAP to remove duplicates from sorted array
 *
 **************************************************************
 */

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

/*
 * Time Complexity = O(N)
 * Space Complexity = O(1)
 */
void RemoveDuplicate(vector<int> &nums)
{
	int j = 1;
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] != nums[i+1])
		{
			nums[j] = nums[i+1];
			j++;
		}
	}
	nums.resize(j-1);
	return;
}


int main()
{
	vector<int> nums = {1,2,3,3,4,4,4,5};
	
	cout << "Before removing duplicates : " << endl;
	for (auto num:nums)
			cout << num << ",";
		cout << endl;
	
	RemoveDuplicate(nums);	
	cout << "After removing duplicates : " << endl;

	for (auto num:nums)
		cout << num << ",";
	cout << endl;

	return 0;
}