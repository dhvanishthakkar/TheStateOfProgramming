/*
 * MajorityElement.cc
 *
 *  Created on: 12-May-2024
 *      Author: Dhvanish Thakkar
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*******************************************************************************************************************
 *  Description :
 *     WAP to find the majority element of the array, Below is the conditions.
 *         1) There must be 1 major element presence (half of the array should have same element) in the array.
 *
 *  Solution :
 *      - This is moore's voting algorithm problem.
 *
 *      - There are 2 ways to solve this problem :
 *
 *        1) Loop through all the element, Make any 1 element as winning team and you loop through array
 *           if you found same element then add(++) winning team else if you found another team member then subtract(--) winning team.
 *           while doing this if winning team becomes 0 then make current team as winning team and continue till last element.
 *           you will find remaining element in winning team as majority element. Time complexity of this method is 0(N).
 *
 *        2) Easiest method is Sort the array and return n/2 element but sometime interviewer don't want to sort due to time complexity.
 *           For sorting it takes 0(nLogn), So if he wants us solve in 0(N) time complexity then we need to use first method.
 *
 ******************************************************************************************************************/

/*
 * Time Complexity = O(N)
 */
int MajorityElement(vector<int> &nums)
{
	int winningTeam = 0;
	int count = 1;
	winningTeam = nums[0];

	for (int i = 1; i < nums.size(); i++)
	{
		if (nums[i] == winningTeam)
			count++;
		else
			count--;

		if (count == 0)
		{
			winningTeam = nums[i];
			count = 1;
		}
	}

	return winningTeam;
}

/*
 * Time Complexity = O(nLogn)
 */
int MajorityElement_Sort(vector<int> &nums)
{
	sort(nums.begin(), nums.end());
	return nums[nums.size() / 2];
}

// Main function starts
int main()
{
	vector<int> inputs = { 2, 3, 2, 2, 1, 2, 1, 2, 3, 1, 2, 2, 1 };

	// Display input array
	cout << "Display Input Price Array : " << endl;
	for (auto num : inputs)
		cout << num << ",";
	cout << endl;

	// Function calls
	int majorElement = MajorityElement(inputs);

	cout << "Normal : Majority Element is " << majorElement << endl;

	// Function call
	majorElement = MajorityElement_Sort(inputs);
	cout << "Sorting : Majority Element is " << majorElement << endl;
}

