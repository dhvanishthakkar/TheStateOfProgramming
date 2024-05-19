/*
 * SingleNumber.cc
 *
 *  Created on: 19-May-2024
 *      Author: Dhvanish Thakkar
 */

#include<iostream>
#include<vector>

using namespace std;


/****************************************************************************************
 *  Description :
 *    WAP to find the single num present in the array.
 *
 *  Solution:
 *    This problem can be solver couple of ways
 *        - Counting freq of the num and find out single num using MAP
 *        - Efficient way to find out using XOR method as implemented below
 *
 ****************************************************************************************/

int SingleNumber (vector<int> inputs)
{
	int result = 0;
	for (auto num : inputs)
		result ^= num;
	return result;
}

// Main Function Call
int main()
{
	vector<int> inputs = {1,1,2,3,2,5,4,4,5};

	cout << "Display Input : " << endl;
	for (auto num : inputs)
		cout << num << ",";
	cout << endl;

	int result = SingleNumber(inputs);

	cout << "Single number in the array is : " << result << endl;

	return 0;
}