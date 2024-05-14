/*
 * MaxSubArray.cc
 *
 *  Created on: 09-May-2024
 *      Author: Dhvanish Thakkar
 */

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

/*************************************************************************************************
 *  Description :
 *      WAP to find Max Sub Array
 *
 *  Solution:
 *      - Here we can use Kadane's algorithm.
 *      - Expected Answer should be 6, From index 3 to 6 => (4-1+2+1=6)
 *
 *  Time Complexity  = O(N)
 *  Space Complexity = O(1)
 *
 **************************************************************************************************/

int MaxSubArray(vector<int> nums)
{
	int currSum = 0;
	int maxSum = 0;

	for (int i = 0; i < nums.size(); i++)
	{
		currSum += nums[i];
		maxSum = max(maxSum, currSum);

		if (currSum < 0)
			currSum = 0;
	}

	return maxSum;
}

int main()
{
	vector<int> nums = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };

	// display input
	cout << "Display Input Array : " << endl;
	for (auto num : nums)
		cout << num << ",";
	cout << endl;

	// Function call
	int result = MaxSubArray(nums);

	cout << "Max Sub Array is " << result << endl;
	return 0;
}
