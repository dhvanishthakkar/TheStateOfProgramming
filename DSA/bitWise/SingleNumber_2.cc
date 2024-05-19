/*
 * SingleNumber_2.cc
 *
 *  Created on: 19-May-2024
 *      Author: Dhvanish Thakkar
 */

#include<iostream>
#include<vector>
#include<map>
#include <math.h>

using namespace std;

/*****************************************************************************************************
 *  Description :
 *    - WAP to single number where all other number repeating 3 times.
 *
 *  Example : Input: nums = [2,2,3,2]         ==> Output: 3
 *  Example : Input: nums = [0,1,0,1,0,1,99]  ==> Output: 99
 * 
 *  Solution :
 *    - We can solve this problems 2 ways
 *        1) Using bitwise operations
 *           - Here you need to count frequency of every set bit of the number
 *             store this freq into seperate array, After that you need to take modulo with 3
 *             of freq array, You will get binary representation of single number left.
 *             You need to convert that binary to decimal num using power of two and return the ans.
 *
 *        2) Using MAP 
 *           - This very easiest method to find out, we just need to get track of freq of any given num 
 *             using MAP and at the end we need to go throught entire MAP and whatever key has
 *             value 1 return as ans.
 *
 *********************************************************************************************************/

/*
 *  Time Complexity  : O(N) 
 *  Space Complexity : O(N)
 */
int FindSingleNumber2_MAP(vector<int> &inputs)
{
    map<int, int> freqMap;
    
    for (int num : inputs)
    	freqMap[num]++;
    
    for (auto data : freqMap)
    	if (data.second == 1)
    		return data.first;

    return -1;
}

/*
 *  Time Complexity  :  O(N)
 *  Space Complexity :  O(1)
 */

int FindSingleNumber2_Bitwise(vector<int> &inputs)
{
	int result = 0;
	vector<int> freqBits(32,0);
	
	for (auto num : inputs)
	{

		for(int i = 0; i < 32; i++)
		{
			result = (num & 1);
			if (result != 0)
				freqBits[i]++;
			num = num >> 1;
		}
	}
	
	for (int i = 0; i < 32; i++)
	{
		if (freqBits[i] % 3 == 1)
		{
			if (i == 0)
				result += 1;
			else
				result += pow(2, i);
		}
	}

	return result;
}
// Main funtion call
int main()
{
    vector<int> input1 = {2,2,3,2};

    cout << "Display Input : " << endl;
    for (auto num : input1)
    	cout << num << ",";
    cout << endl;

    // Function call MAP
    int result = FindSingleNumber2_MAP(input1);

    if (result != -1)
    	cout << "MAP Solution : Single number in given array is : " << result << endl;
    else
    	cout << "Did not found any single num in the array " << endl;

    // Function call Bitwise
    result = FindSingleNumber2_Bitwise(input1);

    if (result != -1)    
   		cout << "Bitwise Solution : Single number in given array is : " << result << endl;
    else
    	cout << "Did not found any single num in the array " << endl;

    cout << "===========================================" << endl;

    vector<int> input2 = {0,1,0,1,0,1,99};

    cout << "Display Input : " << endl;
    for (auto num : input2)
    	cout << num << ",";
    cout << endl;

    // Function call MAP
    result = FindSingleNumber2_MAP(input2);

    if (result != -1)
    	cout << "MAP Solution : Single number in given array is : " << result << endl;
    else
    	cout << "Did not found any single num in the array " << endl;

    // Function call Bitwise
    result = FindSingleNumber2_Bitwise(input2);

    if (result != -1)
        cout << "Bitwise Solution : Single number in given array is : " << result << endl;
    else
        cout << "Did not found any single num in the array " << endl;

    return 0;
}
