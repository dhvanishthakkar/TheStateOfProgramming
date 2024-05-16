/*
 * MinDayMakeBouquets.cc
 *
 *  Created on: 16-May-2024
 *      Author: Dhvanish Thakkar
 */

#include <iostream>
#include <vector>

using namespace std;

/*******************************************************************************************************
 *  Description :
 *     - WAP to find minimum number of days to make M bouquets.
 *     - Return the minimum number of days you need to wait to be able to make m bouquets from the garden.
 *       If it is impossible to make m bouquets return -1.
 *     - LeetCode : 1482
 *
 *  Example :
 *     - bloomDay = [1,10,3,10,2], m = 3, k = 1
 *       Output : 3
 *
 *  Solution :
 *      - This binary search problem where we need to find the min days which depends on bouquets
 *
 *  Time Complexity  : O(NLogN)
 *
 *  Space Complexity : 0(1)
 *
 *******************************************************************************************************/

int FindBouquets(vector<int>& bloomDay, int numFlowers, int minDays)
{
	vector<int> boomedFlowers(bloomDay.size(), 0);
	for (int i = 0; i < bloomDay.size(); i++)
	{
		if (bloomDay[i] <= minDays)
		    boomedFlowers[i] = 1;
	}
	int bouquets  = 0;
	int flowers = 0;
	
	for (int i = 0; i < bloomDay.size(); i++)
	{
	    if (boomedFlowers[i] == 1)
	        flowers++;
		else
	       flowers = 0; 
				
		if (flowers == numFlowers)
		{
		   bouquets++;
           flowers = 0;
		}
	}
	return bouquets;
}

int MinDayMakeBouquets(vector<int> &bloomDays, int flower, int bouquet)
{
	int start = 0, end = 0, mid = 0;
	int minDays = 0, maxDays = 0, result = -1;
	
	for (auto day : bloomDays)
	{
		minDays = min(day, minDays);
		maxDays = max(day, maxDays);
	}
	
	// Binary Search
	start = minDays;
	end = maxDays;
	while(start <= end)
 	{
        mid = (start+end)/2;
        int ans = FindBouquets(bloomDays, flower, mid);
        if (ans >= bouquet)		
        {
            result = mid;
            end = mid - 1;
        }
        else
        {
            start = mid+1;	
        }
    }
	return result;
}

// Main Function call
int main()
{
	vector<int> bloomDays = {1,10,3,10,2};
	int flower = 1;
	int bouquet = 3;

	// Function call
	int result = MinDayMakeBouquets(bloomDays, flower, bouquet);

	// Display output
	if (result != -1)
	{
        cout << result << " Minimum days required to make given bouquet " << endl;
	}
	else
	{
	    cout << "There is no bouquet possible with given days " << endl;
	}

    return 0;	
}