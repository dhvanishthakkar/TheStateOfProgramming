/*
 * FibonacciNumber.cc
 *
 *  Created on: 20-May-2024
 *      Author: Dhvanish Thakkar
 */

#include<iostream>
#include<vector>

using namespace std;

/********************************************************************************************
 *  Description : 
 *    - WAP to find out Fibonacci number for the given input
 *
 *  Solution : 
 *    - Efficient way to solve this problem using recursion and DP
 *    - If we can store the value whatever we have already calculated previously 
 *      so next time same values comes then we should not calculate and return the answer 
 *      using DP(storage) that way we can save the time complexity.
 *
 *  Time Complexity : 0(N)
 *  Space Complexity : O(N)
 *      
 *******************************************************************************************/

int FibonacciNumber(int num, vector<int> &dp)
{
	int a = 0, b = 0;
	if (num == 0 || num == 1)
		return num;
	if(dp[num] != -1)
		return dp[num];
	a = FibonacciNumber(num - 1, dp);
	b = FibonacciNumber(num - 2, dp);
	dp[num] = a+b;
	return a+b;
}

int main()
{
	
	int input = 0;
	cout << "Enter the number : " ;
	cin >> input;
	
	vector<int> dp(100, -1);
	int result = FibonacciNumber(input, dp);
	
	cout << "Fibonacci output of given nuber is : " << result << endl;
}



