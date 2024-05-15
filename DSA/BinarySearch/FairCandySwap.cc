/*
 * FairCandySwap.cc
 *
 *  Created on: 14-May-2024
 *      Author: Dhvanish Thakkar
 */

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

/***************************************************************************************************************
 *  Description :
 *    - WAP to find Fair Candy Swap
 *    - LeetCode : 888
 *    - Given 2 array, You need balance the candy in both array
 
 *
 *  Example : alice = [1,1], nik = [2,2] 
 *            Output: [1,2]  ==>  alice need pass 1 candy to nik and similary nik need pass 2 candy to alice 
 *                                so that both side balanced
 *
 *  Solution :
 *    - This problem can be solve using binary search and Map solution
 *
 *****************************************************************************************************************/


/*
 * Time Complexity : 
 *      aliceSum = O(N) +  NikSum = O(N) + Processing O(N)  = O(3N) 
 *      After removing constant O(N)
 *
 * Space complexity :
 *      Used map to store the element 0(N);
 */


vector<int> FairCandySwap(vector<int> &alice, vector<int> &nik)
{
	vector<int> result;
	map<int, int> nikMap;
	int aliceSum = 0, nikSum = 0;
	
	for (auto candy : alice)
		aliceSum += candy;
	
	for (auto candy : nik)
	{
		nikSum += candy;
		nikMap[candy] = 1;
	}
	
	int diff = ((aliceSum - nikSum)/2);

	for (auto candy : alice)
	{	
		if (nikMap[candy-diff] == 1)
		{
			result.push_back(candy);
			result.push_back(candy-diff);
			return result;
		}
	}

	return result;	
}

int main()
{
	// TestCase 1
	vector<int>	 alice1 = {1,1};
	vector<int>	 nik1   = {2,2};
	
	// Function call
	vector<int> result = FairCandySwap(alice1, nik1);
	
	// Display Input
	if (result.size())
	{
	    cout << "Input is : ";
	    for (auto candy : result)
		    cout << candy << ",";
	    cout << endl;
	}
	else
	{
	   cout << "Did not found any pair which can make both side balanced " << endl;
	}
	
	cout << "===================================" << endl;
	
	// TestCase 2
	vector<int>	alice2 = {1,2};
	vector<int>	nik2   = {2,3};
	result.clear();

	// Function call
	result = FairCandySwap(alice2, nik2);

	// Display Output
	if (result.size())
	{
	    cout << "Output is : ";
	    for (auto candy : result)
		    cout << candy << ",";
	    cout << endl;
	}
	else
	{
	   cout << "Did not found any pair which can make both side balanced " << endl;
	}

	return 0;
}
