/*
 * FindAnagramStr.cc
 *
 *  Created on: 13-May-2024
 *      Author: Dhvanish Thakkar
 */

#include <iostream>
#include <vector>
#include<string>
#include <algorithm>

using namespace std;


/****************************************************************************************************
*  Description : 
*    - WAP to find anagrams string in given array.
*    - Given two strings s and p, return an array of all the start indices of p's anagrams in s.
*      You may return the answer in any order. An Anagram is a word or phrase formed by rearranging
*      the letters of a different word or phrase, typically using all the original letters exactly once.
*  Example : 
*       s = "cbaebabacd", p = "abc" ==> Output (0,6) 
*
*  Solution : 
*    - It's sliding window problem.
*    - Go through entire array, take window size elements, sort it and compare with anagram string, 
*      if it matches with anagram string then store the index and return the all possible index.
*
*****************************************************************************************************/

/*
 * Time Complexity : Traversing to Array -> 0(N) + Log*windowSize for sorting
 *                   So removing constant final time complexity is O(N)
 * Space Complexity : We have used 1 temp string which is mostly constant space so O(string size) => O(1)
 */

vector<int> FindAnagramStr(string inputStr, string ans)
{
	vector<int> result;
	result.clear();
	int windowSize = ans.size();
	
	for (int i = 0; i < inputStr.size(); i++)
	{
        string tempStr = "";
		for (int j = i; j < windowSize + i; j++)
		{			
			tempStr.push_back(inputStr[j]);
		}

		// sort the temp string to check the anagram
		sort(tempStr.begin(), tempStr.end());

		if (ans == tempStr)
			result.push_back(i);
	}
	return result;
}


int main()
{
	string str = "cbaebabacd";
	string ans = "abc";
	
	// Function call
	vector<int> result = FindAnagramStr(str, ans);
	
	if (result.size())
	{
		cout << "Anagram string present at : ";
		for (auto index :result)
			cout << index << ",";
	    cout << endl;
	}
	else
	{
		cout << "There is no anagram string present in the input array !!" << endl;
	}
	return 0;
}