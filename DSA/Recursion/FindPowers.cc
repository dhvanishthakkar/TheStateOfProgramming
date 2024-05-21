/*
 * FindPowers.cc
 *
 *  Created on: 21-May-2024
 *      Author: Dhvanish Thakkar
 */
#include<iostream>

using namespace std;

/**********************************************************************
 *  Solution :
 *    - This is nomal recursive approach
 *
 *  Time  Complexity : O(N)
 *  Space Complexity : O(N)
 *
 **********************************************************************/
int FindPowers_Normal(int base, int power)
{
	if (power == 0)
		return 1;

	// Recursive call
	return base * FindPowers_Normal(base, power - 1); 
}

/***************************************************************************
 *  Solution :
 *    - In optimized approach, We will find the power of half power only
 *      remaining part can multiply the same result and get it
 *    - We need to handle the odd number of power condition
 *
 *  Time  Complexity : O(LogN)
 *  Space Complexity : O(LogN) --> This because it used that num times stack
 *
 ****************************************************************************/
int FindPowers_Optimized(int base, int power)
{
	if (power == 0)
		return 1;

	// Recursive call
    if (power % 2 == 0)
        return FindPowers_Optimized(base, power / 2) * FindPowers_Optimized(base, power / 2);
    else
        return base * FindPowers_Optimized(base, power / 2) * FindPowers_Optimized(base, power / 2);
}

// Main Function
int main()
{
	int base = 0, power = 0; 
	cout << "Enter the base for powers : " << endl;
	cin >> base;
	cout << "Enter the power which you want to see output " << endl;
	cin >> power;

	// Function call 
	int result = FindPowers_Normal(base, power);

	cout << "Normal Output : Power of " << base << " ^ " << power << " : " << result << endl;

	cout << "=======================================================" << endl;

	// Function call 
	result = FindPowers_Optimized(base, power);
	cout << "Optimized Output : Power of " << base << " ^ " << power << " : " << result << endl;
	return 0;
}