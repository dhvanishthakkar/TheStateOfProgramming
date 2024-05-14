/*
 * SecondSmallNumber.cc
 *
 *  Created on: 09-May-2024
 *      Author: Dhvanish Thakkar
 */

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

/***************************************************************************
 *
 *   Time Complexity O(N)
 *   Space Complexity O(1)
 *
 ***************************************************************************/

int SecondSmallNumber(vector<int> &nums)
{
	int smallest = INT_MAX;
	int secSmallest = INT_MAX;

	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] < smallest)
		{
			secSmallest = smallest;
			smallest = nums[i];
		} else if (nums[i] < secSmallest)
		{
			if (nums[i] != smallest)
				secSmallest = nums[i];
		}
	}

	return secSmallest;
}

int main()
{
	int numElement = 0;
	int data = 0;
	vector<int> nums;

	cout << "How many element you want to enter => ";
	cin >> numElement;
	cout << endl;

	cout << "Enter the numbers : ";
	for (int i = 0; i < numElement; i++)
	{
		cin >> data;
		nums.push_back(data);
	}
	cout << endl;

	cout << "You have entered : ";
	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << ",";
	}
	cout << endl;

	// Function call
	int result = SecondSmallNumber(nums);

	cout << "Second Smallest Number in the Array is " << result << endl;
	return 0;
}
