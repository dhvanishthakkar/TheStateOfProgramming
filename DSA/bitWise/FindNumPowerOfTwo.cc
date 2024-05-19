/*
 * FindNumPowerOfTwo.cc
 *
 *  Created on: 19-May-2024
 *      Author: Dhvanish Thakkar
 */
#include<iostream>
#include<vector>

using namespace std;

/*************************************************************************
 *  Description :
 *    - WAP to find number is power of 2 or not
 *
 *  Solution :
 *    - There are multiple ways to solve but easiest way is below
 *    - If number end with (num - 1) and result is 0 then it is power of 2. 
 *************************************************************************/

bool FindNumPowerOfTwo(int num) {
	bool result = false;

	if ((num & (num - 1)) == 0)
		result = true;

	return result;
}

// Main function call
int main() {
	int inputNum = 0;
	cout << "Enter the number you want to check if that is power of 2 or not : "
			<< endl;
	cin >> inputNum;
	cout << endl;

	// Function call
	bool result = FindNumPowerOfTwo(inputNum);

	if (result)
		cout << "Entered number is power of 2 !! " << endl;
	else
		cout << "Entered number is not power of 2 !! " << endl;

	return 0;
}
