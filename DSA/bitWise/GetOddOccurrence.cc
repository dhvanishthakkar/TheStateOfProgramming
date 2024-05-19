/*
 * GetOddOccurrence.cc
 *
 *  Created on: 19-May-2024
 *      Author: Dhvanish Thakkar
 */
#include<iostream>
#include<vector>

using namespace std;

/*************************************************************************************
 *  Description :
 *    - WAP to find odd occerance of pair.
 *
 *  Example : Input: arr = [1, 2, 3, 2, 3, 1, 3] ==> Output: 3
 *
 *  Solution :
 *    - This is XOR problem where duplicate pair will cancel out and  odd pair remain
 *
 *************************************************************************************/

int GetOddOccurrence(vector<int> &inputs)
{
	int result = 0;
	for (auto num : inputs)
		result ^= num;
	return result;
}

int main()
{
	vector<int> inputs = {1, 2, 5, 2, 5, 1, 5};
	cout << "Display Input : " << endl;
	
	for (auto num : inputs)
		cout << num << ",";
	cout << endl;

	int result = GetOddOccurrence(inputs);

	cout << "Odd occurrence is : " << result << endl;

    return 0;
}



