/*
 * LargestElement.cpp
 *
 *  Created on: 02-Jan-2022
 *  Author: Dhvanish Thakkar
 */

#include<iostream>
#include<vector>

using namespace std;
/*
* Sample Input : -3, 4, 3, 2, 1     ==> O/P = 4
*              : -1, -2, -3, -3, 8  ==> O/P = 8
*
*/

int LargestElement(vector<int> vctr)
{
	int largeNum = vctr[0];

	for(int i = 0; i < vctr.size(); i++)
	{
		if (vctr[i] > largeNum)
		{
			largeNum = vctr[i];
		}
	}
	return largeNum;
}

int MaxSumArray(vector<int> arr)
{
	int currSumArray = 0;
	int maxSumArray = 0;
	
	for(int i = 0; i < arr.size(); i++)
	{
		currSumArray = currSumArray + arr[i];
		
		if (currSumArray < 0)
			currSumArray = 0;
		
		if (currSumArray > maxSumArray)
			maxSumArray = currSumArray;
	}
	
	return maxSumArray;
}

/* Main Function */
int main()
{
	int result = 0;
	vector<int> vctr1 = {-3,4,3,2,1};
	vector<int> vctr2 = {-1,-2,-3,-3,8};
	vector<int> vctr3 = {-1, -2, 3, 4, 4,-2};
	vector<int> vctr4 = {5, 0, -1, 0, 1, 2, -1};
	
	/* Print Vector 1*/
	cout << "Printing Vector1 elements : " << endl;
	
	for(int i = 0; i < vctr1.size(); i++)
	{
		cout << vctr1[i] << ",";
	}
	
	cout << endl;
	
	/* calling function for vctr1 */
	result = LargestElement(vctr1);
	
	cout << "Largest element in vctr1 is : " << result << endl;
	
	/* Print Vector2 */
	cout << "Printing Vector2 elements : " << endl;
		
	for(int i = 0; i < vctr2.size(); i++)
	{
		cout << vctr2[i] << ",";
	}
	
	cout << endl;	
	
	/* calling function for vctr2 */
	result = LargestElement(vctr2);
	
	cout << "Largest element in vctr2 is : " << result << endl;
	
	
	result = MaxSumArray(vctr3);
	cout << "MaxSumArray element in vctr3 is : " << result << endl;
	
	result = MaxSumArray(vctr4);
	cout << "MaxSumArray element in vctr4 is : " << result << endl;
	
	
	return 0;
}



