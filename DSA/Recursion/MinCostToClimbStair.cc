/*
 * MinCostToClimbStair.cc
 *
 *  Created on: 21-May-2024
 *      Author: Dhvanish Thakkar
 */

#include<iostream>
#include<vector>
#include<climits>

using namespace std;

/**************************************************************************************
 *  Description : 
 *    - WAP to find minimum cost to climb stair
 *    - You are given an integer array cost where cost[i] is the cost of ith step on a
 *      staircase. Once you pay the cost, you can either climb one or two steps.
 *    - You can either start from the step with index 0, or the step with index 1.
 *    - Return the minimum cost to reach the top of the floor.
 *
 *    Example : Input: cost = [1,100,1,1,1,100,1,1,100,1] ==> Output: 6
 *
 *  Solution : 
 *    - Solve using recursion and dynamic programming
 *
 *  Time  Complexity  : O(N)
 *  Space Complexity  : O(N)
 *
 ***************************************************************************************/

int FindMinCostToClimbStair(vector<int>&cost, int start, int end, vector<int> &dp)
{
	if (start >= end)
		return 0;

	if (dp[start] != -1)
		return dp[start];

    // Recursive call
	int cost1 = FindMinCostToClimbStair(cost, start+1, end, dp);
	int cost2 =	FindMinCostToClimbStair(cost, start+2, end, dp);
	
	return dp[start] = cost[start] + min(cost1, cost2);
}

// Main Function
int main()
{
	vector<int> cost = {1,100,1,1,1,100,1,1,100,1};
	int start = 0, end = cost.size()-1, result = 0;
	vector<int> dp = {100, -1};
	
	// Function call
	result = FindMinCostToClimbStair(cost, start, end, dp);

	cout << "Min Cost to reach to top is : " << result << endl;
	return 0;
}