/*
 * LongestRepeatingChar.cc
 *
 *  Created on: 14-May-2024
 *      Author: Dhvanish Thakkar
 */


#include <iostream>
#include <vector>
#include<string>
#include <algorithm>

using namespace std;

/********************************************************************************************
 *  Description :
 *    - WAP for longest repeating character replacement.
 *    - You are given a string inputStr and an integer k. You can choose any character of the string
 *      and change it to any other uppercase English character.
 *    - You can perform this operation at most k times. Return the length of the longest substring
 *      containing the same letter you can get after performing the above operations.
 *
 *  Example : Input: s = "AABABBA", k = 1 
 *            Output: 4
 *  
 *  Solution :
 *    - This is sliding window problem
 *
 *********************************************************************************************/
int LongestRepeatingCharReplace(string inputStr, int k)
{
    int maxCount = 0, result = 0;
	vector <int> cnt(26);
	int end = 0;
 
	for (int start = 0; start < inputStr.size(); start++)
	{
	    cnt[inputStr[start] - 'A']++;
	    maxCount = max(maxCount, cnt[inputStr[start] - 'A']);

	    while(end <= start && start - end + 1 - maxCount > k)
		{
	        cnt[inputStr[end] - 'A']--;
	        end++;
	    }
	    result = max(result, start - end + 1);
	}
    return result;
}

// Main function
int main()
{
	int k = 1;
	string inputStr = "AABABBA";
	
	cout << "Input string  : " << inputStr << endl;

	// Function call
	int result = LongestRepeatingCharReplace(inputStr, k);
	
	cout << "Longest repeating char length after replacing k char is : " << result << endl;
	
	return 0;
}