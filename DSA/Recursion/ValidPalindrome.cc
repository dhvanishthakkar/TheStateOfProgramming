/*
 * ValidPalindrome.cc
 *
 *  Created on: 20-May-2024
 *      Author: Dhvanish Thakkar
 */

#include<iostream>

using namespace std;

/************************************************************************
 *  Description :
 *    - WAP to validate string is palindrome or not using recursion.
 *
 *  Solution :
 *    - You need to use two pointer approach using recursion.
 *
 *  Time Complexity  : O(N/2)
 *  Space Complexity : 0(1)
 *
 ************************************************************************/

bool ValidatePalinDrome(string str, int start, int end)
{
	if (start >= end)
		return true;
	
	if (str[start] != str[end])
		return false;

	// Recursive call
	return ValidatePalinDrome(str, start+1, end-1);
}

// Main function call
int main()
{
	string inputStr1 = "racecar";
	int start = 0, end = inputStr1.size()-1;

	// Function call
	bool result = ValidatePalinDrome(inputStr1, start, end);

	if (result)
		cout << "Output 1 : Given string is palindrom : " << inputStr1 << endl;
	else
		cout << "Output 1 : Given string is not palindrom : " << inputStr1 << endl;

	cout << "======================================================" << endl;

	string inputStr2 = "madam";
	start = 0, end = inputStr2.size()-1;

	// Function call
	result = ValidatePalinDrome(inputStr2, start, end);
		
    if (result)
		cout << "Output 2 : Given string is palindrom : " << inputStr2 << endl;
	else
		cout << "Output 2 : Given string is not palindrom : " << inputStr2 << endl;

    cout << "======================================================" << endl;

    string inputStr3 = "raceacar";
    start = 0, end = inputStr3.size()-1;
   
    // Function call
    result = ValidatePalinDrome(inputStr3, start, end);

    if (result)
   		cout << "Output 3 : Given string is palindrom : " << inputStr3 << endl;
    else
    	cout << "Output 3 : Given string is not palindrom : " << inputStr3 << endl;

    return 0;
}
