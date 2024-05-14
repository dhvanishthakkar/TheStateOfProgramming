/*
 * MaxDiffBinSubStr.cc
 *
 *  Created on: 14-May-2024
 *      Author: Dhvansh Thakkar
 */

#include <iostream>
#include <vector>
#include<string>
#include <algorithm>

using namespace std;

/***************************************************************************************************************
 *  Description :
 *    - WAP to find maximum difference of zeros and ones in a binary string.
 *    - Given a binary string s of 0's and 1's. The task is to find the maximum difference
 *      between the number of 0s and the number of 1s (number of 0s — number of 1s) for a substring.
 *      In case of all 1s print -1.
 *
 *  Example : Input  : str = "11000010001";
 *            Output : 6 (Index 2 to 9)
 *
 *  Solution :
 *    - This problem can be solve using kaden's algorithm.
 *    - Here you need to find max diff of sub string length.
 *    - While processing string consider, 1's as -1 and 0's as 1's and return the count as per kaden's algorithm
 *
 *****************************************************************************************************************/

int FindMaxDiffBinSubStr(string inputStr)
{
	int maxDiff = -1;
	int currDiff = 0;
	
	for (int i = 0; i < inputStr.size(); i++)
	{
		if (inputStr[i] == '0')
			currDiff+=1;
		else
			currDiff+=-1;

		maxDiff = max(maxDiff, currDiff);
		
		if (currDiff < 0)
			currDiff = 0;
	}

	return maxDiff;	
}

// Main function
int main()
{
	string inputStr1 = "11000010001";

	cout << "Input string  : " << inputStr1 << endl;

    // Function call
	int result = FindMaxDiffBinSubStr(inputStr1);

	cout << "Max diff of binary substring is : " << result << endl;
	
	cout << "============================================" << endl;
	
	string inputStr2 = "11";
	cout << "Input string  : " << inputStr2 << endl;
	// Function call
	result = FindMaxDiffBinSubStr(inputStr2);

	cout << "Max diff of binary substring is : " << result << endl;
	return 0;
}



