/*
 * FindSingleNumber.cc
 *
 *  Created on: 09-May-2024
 *      Author: dhvanish
 */
#include <iostream>
#include <vector>
#include <map>
#include<algorithm>

using namespace std;


/*
 * Time Complexity = O(N)
 * Space Complexity = O(1)
 */

// Approch 1 : Use map and solve the problem
int FindSingleNumber_1(vector<int> nums)
{
	int result = 0;
    map<int, int> mp; 

	for (int i = 0; i < nums.size(); i++)
	{
		if (mp.count(nums[i]) > 0)
		{
			int value = mp[nums[i]];
			value++;
			mp[nums[i]] = value; 
		}
		else
		{
			mp.insert({nums[i], 1});
		}
	}
	
	for (auto itr = mp.begin(); itr != mp.end(); itr++)
	    if (itr->second == 1)
	    	return itr->first;
	return -1;
}

/*
 * Approch 2 : sort the array and find the element
 *
 * Time  Complexity = O(N^2)
 * Space Complexity = O(1)
 */
int FindSingleNumber_2(vector<int> nums)
{
	sort(nums.begin(), nums.end());
	
	int currNum = 0, count = 0, j = 0; 
	for (int i = 0; i < nums.size(); i++)
	{
		currNum = nums[i];
		count = 1;
		
		for (j = i + 1; j < nums.size(); j++)
		{
		
			if (nums[j] == currNum)
				count++;
			else
				break;	
		}

		if (count == 1)
			return nums[i];
		
		// start from new number
		i = j-1;	
	}
	return -1;
}

int main()
{
	vector<int> nums = {2, 2, 1, 3, 3, 1,4};
	
	cout << "Display Input Array : " << endl;
	for (auto num : nums)
		cout << num << ",";
	cout << endl;

	// Function call
	int result = FindSingleNumber_1(nums);

	cout << "Function 1 : Single num is " << result << endl;
	
	// Function call
	result = FindSingleNumber_2(nums);

	cout << "Function 2 :  Single num is " << result << endl;
	return 0;
}





