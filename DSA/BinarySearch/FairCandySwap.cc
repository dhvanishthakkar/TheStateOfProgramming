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

/*****************************************************************************************************************
 *  Solution using binary search :
 *  
 *  Here you need to use the formula as below explained
 *       aliceSum -x(removing from alince) + y(adding from nik) = nikSum -y(removing from nik) + x(adding from alice)
 *       By solving above equation : Y = ((sum1 - sum2 + (2 * x)) / 2)
 *       Search above Y in nik's array and if you found then return the answer.
 *  
 *  Time Complexity : 0(N) + Log2^N = 0(N)
 *
 * Space complexity :
 *      Used map to store the element 0(1);
 ******************************************************************************************************************/
vector<int> FairCandySwapBinSearch(vector<int> &alice, vector<int> &nik)
{
	vector<int> result;
	int aliceSum = 0, nikSum = 0, start = 0, end = 0, mid = 0;
	
	// taking sum of alice's candy
	for (auto num:alice)
		aliceSum += num;
	
	// taking sum of nik's candy
	for (auto num:nik)
		nikSum += num;
	
	for (int i = 0; i < alice.size(); i++)
	{
		// use here formula to search target candy in nik's array		
		int target = ( (nikSum - aliceSum + (2 * alice[i]) ) / 2);
		start = 0;
		end = nik.size()-1;	
		while (start <= end)
		{
			mid = (start+end)/2;
			if (nik[mid] == target) 
			{
				result.push_back(alice[i]);
			    result.push_back(target);   
				return result;
			}
			else if (nik[mid] > target)
				end = mid-1;
			else
				start = mid+1;
		}
	}
		
	return result;
}

/*****************************************************************************************************************
 *  Solution using MAP : 
 *
 * Time Complexity : 
 *      aliceSum = O(N) +  NikSum = O(N) + Processing O(N)  = O(3N) 
 *      After removing constant O(N)
 *
 * Space complexity :
 *      Used map to store the element 0(N);
 ******************************************************************************************************************/
vector<int> FairCandySwapMap(vector<int> &alice, vector<int> &nik)
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
	vector<int> result = FairCandySwapMap(alice1, nik1);
	
	// Display output
	cout << "Using MAP : " << endl;
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
	
	cout << "==================================================================" << endl;
	result.clear();
	cout << "Using Binary Search : " << endl;

	// Function call
	result = FairCandySwapBinSearch(alice1, nik1);
		
	// Display output
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

	cout << "==================================================================" << endl;
	
	// TestCase 2
	vector<int>	alice2 = {1,2};
	vector<int>	nik2   = {2,3};
	result.clear();

	// Function call
	result = FairCandySwapMap(alice2, nik2);

	// Display Output
	cout << "Using MAP : " << endl;
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
	
	cout << "==================================================================" << endl;
	result.clear();
	cout << "Using Binary Search : " << endl;

	// Function call
	result = FairCandySwapBinSearch(alice2, nik2);
			
	// Display Input
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
