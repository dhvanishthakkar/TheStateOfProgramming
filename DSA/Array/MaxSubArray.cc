/*
 * MaxSubArray.cc
 *
 *  Created on: 09-May-2024
 *      Author: dhvanish
 */

/*
 * WAP for Max Sub Array 
 *
 * Here we can use Kadane's algorithm
 * Expected Answer should be 6, From index 3 to 6 => (4-1+2+1=6)
 *
 * Time Complexity  = O(N)  
 * Space Complexity = O(1)
 *
 *
 */

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

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
	vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
	
	cout << "Display Input Array : " << endl;
	for (auto num : nums)
		cout << num <<",";
	cout << endl;
	
	int result = MaxSubArray(nums);
	
	cout << "Max Sub Array is " << result << endl;
	return 0;
}