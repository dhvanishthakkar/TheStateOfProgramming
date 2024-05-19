/*
 * CountingBits.cc
 *
 *  Created on: 19-May-2024
 *      Author: Dhvanish Thakkar
 */

#include<iostream>
#include<vector>

using namespace std;

/***************************************************************************************
 *  Description : Counting set bits until given number starts from 0.
 *
 *  Solution :
 *    We can solve this problem many ways but efficient way is to count set bit using
 *    right shift num until it becomes 0.
 *
 ***************************************************************************************/
int CountingBits(int num) {
	int count = 0;
	int i = 0;
	while (num != 0) {
		if (num & 1)
			count++;
		num = num >> 1;
	}
	return count;
}

// Main Function Call
int main() {
	int nums = 0;
	cout << "Insert the number you want to count the set bit : ";
	cin >> nums;
	cout << endl;

	vector<int> result;

	for (int i = 0; i <= nums; i++) {
		result.push_back(CountingBits(i));
	}

	cout << "Output is : ";
	for (auto num : result)
		cout << num << ",";
	cout << endl;
	return 0;
}
