/*
 * InsertionSort.cpp
 *
 *  Created on: 08-Jan-2022
 *      Author: Dhvanish Thakkar
 */
#include<iostream>
#include<vector>

using namespace std;

void InsertionSort(vector<int> &vctr)
{
	int current, prev;
	
	for (int i = 1; i < vctr.size(); i++)
	{
		current = vctr[i];
		prev = i - 1;
		
		while(prev >=0 and vctr[prev] > current)
		{
			vctr[prev + 1] = vctr[prev];
			prev = prev - 1;
		}
		
		vctr[prev + 1] = current;
	}
	
	return;
}

/* Main Function */
int main()
{
	vector<int> vctr = {-2, 0, 4, -1, 5, -12, 6, 7, 8};
	
	/* Print the array */
	cout << "Printing Array Before Insertion Sort :" << endl;
	
	for (int i = 0; i < vctr.size(); i++)
	{
		cout << vctr[i]	<< ",";	
	}
	
	cout << endl;
	
	/* calling the insertion functionality */	
	InsertionSort(vctr);
	
	cout << "Printing Array After Insertion Sort :" << endl;
		
	for (int j = 0; j < vctr.size(); j++)
	{
		cout << vctr[j]	<< ",";	
	}
	
	cout << endl;
	
	return 0;
}
