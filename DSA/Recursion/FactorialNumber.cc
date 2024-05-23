/*
 * FactorialNumber.cc
 *
 *  Created on: 20-May-2024
 *      Author: Dhvanish Thakkar
 */
#include<iostream>

using namespace std;

/*********************************************************************
 *  Description :
 *    - WAP to find factorial output of given number using recursion
 *
 *  Solution : 
 *    - Time Complexity : O(2^N)
 *    - Space complexity : 0(N) as stack is used for the operation.
 *********************************************************************/

int FindFactorial(int num)
{
	if (num == 0 || num ==1)
		return 1;
	// Recursive function call
	int result = FindFactorial(num-1);
	return result * num;
}

// Main Function
int main()
{
	int input = 0;
	cout << "Enter the number : " ;
	cin >> input;
	cout << endl;
	
	// Function call 
	int result = FindFactorial(input);
	
	cout << "Factorial output of given nuber is : " << result << endl;

	return 0;
}
