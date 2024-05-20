/*
 * ClimbStair.cc
 *
 *  Created on: 20-May-2024
 *      Author: Dhvanish Thakkar
 */

#include<iostream>
#include<vector>

using namespace std;

/******************************************************************************
*  Description :
*    - WAP to find how many distinct ways to climb a stair to reach the top.
*    - You are climbing a staircase. It takes n steps to reach the top.
*    - Each time you can either climb 1 or 2 steps. In how many distinct ways
*      can you climb to the top?
*
*  Solution :
*    - We can solve this problem similar to fibonacci series
*    - Normal recursion will take O(2^N) time complexity so to optimize upon it
*       We can use DP method to store the answer if we have already calculated it
*
*  Time  Complexity : O(N)
*  Space Complexity : O(N)
*
*  Constraints:
*    1 <= n <= 45
*
*******************************************************************************/

int FindWaysToReachTop(int start, int end, vector<int> &dp)
{
	if (start > end)
		return 0;
	
	if (start == end)
		return 1;
	
	// check if we already calculated previously or not if yes the return the ans
	if (dp[start] != -1)
		dp[start];
	
	// Recursive call
    int x = FindWaysToReachTop(start+1, end, dp);
    int y = FindWaysToReachTop(start+2, end, dp);

    // storing output so that we can use in future reference
    dp[start] = x+y;

    return x+y;
}

// main function call
int main()
{
	int start = 0, end = 0;
	vector<int> dp(45,-1);

	cout << "Enter the N steps of stair case : ";
	cin >> end;
    cout << endl;
	
    // Function call 
	int result = FindWaysToReachTop(start, end, dp);

	cout << "There are total : " << result << "  number of ways to reach the top !! " << endl; 

	return 0;
}