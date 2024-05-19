/*
 * ConvertNumToHex.cc
 *
 *  Created on: 19-May-2024
 *      Author: Dhvanish Thakkar
 */
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/**********************************************************************************
 *
 *  Description : 
 *    WAP to convert num into Hexadecimal num.
 *
 *  Example : Input: num = 26 ==> Output: "1a"
 *
 *  Example : Input: num = -1 ==> Output: "ffffffff"
 *
 *  Solution :
 *    - Here, You need to take modulo of 16 and indetify the remender into hex array
 *      After that you need to divide the num untill it becomes zero.
 *    - For nagative num, assign input to unsign variable and do same process.
 *
 **********************************************************************************/

string ConvertNumToHex(int input)
{
	string Hex = "0123456789abcdef";
	string hexNum = "";
	int rem = 0;

	// base condition
	if (input == 0)
	    return to_string(0);

	unsigned int num = input;
	while(num != 0)
	{
		rem = num % 16;
		if (rem <= 9)
			hexNum += rem + '0';
		else
			hexNum += Hex[rem];

		num /= 16;
	}

	reverse(hexNum.begin(), hexNum.end());
	return hexNum; 
}

// Main Function Call
int main()
{
	int input1 = 26;

	cout << "Input1 number is : " << input1 << endl;
	string result = ConvertNumToHex(input1);
	cout << "Output1 is : " << result << endl;

	cout << "=================================" << endl;

	int input2 = -1;
	result = "";
	cout << "Input2 number is : " << input2 << endl;
	result = ConvertNumToHex(input2);

	cout << "Output2 is : " << result << endl;
}
