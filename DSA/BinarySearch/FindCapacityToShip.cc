/*
 * FindCapacityToShip.cc
 *
 *  Created on: 16-May-2024
 *      Author: Dhvanish Thakkar
 */

#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

/**********************************************************************************************
*  Description : 
*    -  WAP to find capacity to ship packages within D days.
*    -  Return the least weight capacity of the ship that will result in all the packages on the
*       conveyor belt being shipped within days days.
*
*    - Leet Code Problem num : 1011
*
*  Example : 
*    - Input: weights = [1,2,3,4,5,6,7,8,9,10], days = 5 
*    - Output: 15
*
*  Solution :
*    -  This is binary search problem.
*
*  Time  Complexity : O(NLogN)
*  Space Complexity : O(1)
*
************************************************************************************************/

int FindNumDays(vector<int> &weights, int capacity)
{
	int currWeight = 0;
	int days = 1;
	
	for (int i = 0; i < weights.size(); i++)
	{	
		if (weights[i] <= (capacity - currWeight))
			currWeight += weights[i];
		else
		{
			days++;
			currWeight = weights[i];
			
		}		
	}
	return days;
}

int FindCapacityToShip(vector<int> &weights, int days)
{
	int maxCap = 0, minCap = INT_MIN;

	//Find max and min capacity
	for (auto weight : weights)
	{
		minCap = max(weight, minCap);
		maxCap += weight;
	}
	
	int start = minCap, end = maxCap, mid = 0, result = -1;
	
	while (start <= end)
	{
		mid = (start + end)/2;
        
		if (FindNumDays(weights, mid) <= days)
		{
			result = mid;
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}
	
	return result;
}

int main()
{
	vector<int> shipWeight = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int days = 5;
	
	cout << "Display input array : " << endl;    
	for (auto weight : shipWeight)
	    cout << weight << ",";
	cout << endl;

	// Function call
	int minCapacity = FindCapacityToShip(shipWeight, days);
	
	cout << "Ship needs minimum capacity = " << minCapacity << " to ship given packages" << endl;

	return 0;
}
