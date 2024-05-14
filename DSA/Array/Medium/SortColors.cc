/*
 * SortColors.cc
 *
 *  Created on: 11-May-2024
 *      Author: Dhvanish Thakkar
 */

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

/******************************************************************************************************
 *  Description :
 *     WAP to sort the color, max num in input n = 0, 1, 2
 * 
 *  Solution : This problem easy solve by using 3 temp variables, we can count the freq of given
 *             number and put back to array again.
 *
 *   Time  Complexity = O(2N)  --> Removing constant then 0(N)
 *   Space Complexity = O(1)  --> Here we have used only 3 variable so Space complexity is constant O(1)
 *
 ******************************************************************************************************/

void SortColors(vector<int> &nums)
{
	int zero = 0, one = 0, two = 0;
	
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] == 0)
		    zero++;
		else if (nums[i] == 1)
			one++;
		else
			two++;
	}
	
	for (int i = 0; i < nums.size(); i++)
	{
		if (zero)
		{
			nums[i] = 0;
			zero--;
		}
		else if (one)
		{
			nums[i] = 1;
			one--;
		}
		else
		{
			nums[i] = 2; 
			two--;
		}
	}
    return;
}

int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    
    // Display input array
	cout << "Display Input Array : " << endl;
	for (auto num : nums)
		cout << num << ",";
	cout << endl;
	
    // Function call
    SortColors(nums);
    
    // Display result
	cout << "Display Result : " << endl;
	for (auto num : nums)
		cout << num << ",";
	cout << endl;
    
    return 0;
}
