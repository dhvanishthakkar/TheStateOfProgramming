/*
 * FindAvgSubArrThreshold.cc
 *
 *  Created on: 13-May-2024
 *      Author: Dhvanish Thakkar
 */

#include <iostream>
#include <vector>

using namespace std;

/********************************************************************************************************************************
 *  Description :
 *      -  WAP where number of Sub-arrays of Size K and Average Greater than or Equal to Threshold 
 *         -  Given an array of integers arr and two integers k and threshold, return the number of sub-arrays of size k and
 *            average greater than or equal to threshold.
 *      - Example : arr = [2,2,2,2,5,5,5,8], k = 3, threshold = 4 ==> Output: 3 ==> Sub-arrays [2,5,5],[5,5,5] and [5,5,8] 
 *
 *  Solution :
 *      - This is sliding window problem where we need to take sum of window size and if average of these element becomes greater
 *        than threshold value than you need return the all possible pairs.
 *
 ********************************************************************************************************************************/


vector<vector<int>> FindAvgSubArrThreshold(vector<int> &nums, int winSize, int threshold)
{
	int currSum = 0;
	vector<vector<int>> result;

	for (int i = 0; i < nums.size(); i++)
	{
		currSum = 0;
		if (i + winSize - 1 < nums.size())
		{	
			vector<int> ans;
		    for (int j = i; j < winSize + i; j++)
		    {
		    	ans.push_back(nums[j]);
		    	currSum+=nums[j];
		    }

		    if (currSum/winSize >= threshold)
		    {
		    	result.push_back(ans);
		    }
		}
		else
			break;
	}

	return result;
}

int main()
{
	vector<int> nums = {2,2,2,2,5,5,5,8};
	vector<vector<int>> result;
	int windowSize = 3;
	int thresholdVal = 4;
	
	cout << "Display Input Array : " << endl;
	for (auto num : nums)
		cout << num << ",";
	cout << endl;
	
	// Function call
	result = FindAvgSubArrThreshold(nums, windowSize, thresholdVal);
	
	if (result.size())
	{
		for (auto output:result)
		{
			for(int num:output)
				cout << num << ",";
		    cout<< endl;
		}
	}
	else
	{
	    cout << "There is no sub array pair which has average greater than equals to given threshold value !!"<< endl;	
	}

	return 0;
}