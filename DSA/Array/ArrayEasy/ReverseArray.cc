/*
 * ReverseArray.cc
 *
 *  Created on: 09-May-2024
 *      Author: Dhvanish Thakkar
 */

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

/*
 * Time Complexity = O(N/2)
 * Space Complexity = O(1);
 */

void ReverseArray(vector<int> &nums) {
	int start = 0;
	int end = nums.size() - 1;

	while (start <= end) {
		swap(nums[start], nums[end]);
		start++;
		end--;
	}

	return;
}

int main() {
	vector<int> nums;
	int numElement = 0;
	int data = 0;
	cout << "How many element you want to enter => ";
	cin >> numElement;
	cout << endl;

	cout << "Enter the numbers : ";
	for (int i = 0; i < numElement; i++) {
		cin >> data;
		nums.push_back(data);
	}
	cout << endl;

	// Display input
	cout << "Before Reversing an Array : ";
	for (int i = 0; i < nums.size(); i++) {
		cout << nums[i] << ",";
	}
	cout << endl;

	// Function call
	ReverseArray(nums);

	// Display output
	cout << "After Reversing Array : ";
	for (auto num : nums) {
		cout << num << ",";
	}
	cout << endl;
	return 0;
}
