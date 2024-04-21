/*
 * SelectionSort.cpp
 *
 *  Created on: 06-Jan-2022
 *      Author: Dhvanish Thakkar
 */

#include<iostream>
#include<vector>

using namespace std;

void SelectionSort(vector<int> &vctr)
{
	cout << "In SelectionSort Function.." << endl;
	
	int minIndexVal = 0;
	
	for (int i = 0; i < vctr.size() - 1; i++)
	{
		minIndexVal = i;
		
		for (int j = i; j < vctr.size() - 1; j++)
		{
			if (vctr[j] < vctr[minIndexVal])
			{
				minIndexVal = j;			
			}
		}
		
		swap(vctr[i], vctr[minIndexVal]);
	}


	return;
}

int main()
{
	vector<int> vctr = {-2, 0, 4, -1, 5, -12, 6, 7, 8};
	
	for (int i = 0; i < vctr.size(); i++)
	{
		cout << vctr[i] << ",";
	}
	
	cout << endl;
	
	/* SelectioSort function call */
	SelectionSort(vctr);

	for (int k = 0; k < vctr.size(); k++)
	{
		cout << vctr[k] << ",";
	}
			
	cout << endl;

	return 0;
}




