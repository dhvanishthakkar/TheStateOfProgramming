/*
 * MissingNum.cc
 *
 *  Created on: 09-May-2024
 *      Author: dhvanish
 */

/*
 *
 * WAP to find missing number
 */
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

/*
 * Time Complexity = O(N) + O(N) = 0(2N), Removing constant then TC = O(N)
 * Space Complexity = 0(1)
 */
int MissingNum(vector<int> &nums)
{
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] != i)
		{
			swap(nums[nums[i]], nums[i]);	
		}
	}

	for (int j = 0; j < nums.size(); j++)
		if (nums[j] != j)
			return j;
	return -1;
}

int main()
{
    //vector<int> nums = {0,1,2,3,5,6,7};
    vector<int> nums = {6,7,1,3,5,4,2};
    cout << "Dispaly the Input Array : " << endl;
    
    for (auto num:nums)
    		cout << num << ",";
    cout << endl;
    
    int result = MissingNum(nums);
    
    cout << "Result : Missing number is " << result <<endl;
	return 0;
}



