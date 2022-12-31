/*
 * RemoveDuplicates.cpp
 *
 *  Created on: 30-Dec-2022
 *      Author: Dhvanish
 */

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// Brute force Approach
int RemoveDuplicates (int arr[], int size)
{
	int curr = 1, i = 1;
	int newArr[size + 1] = {'\0'};
	
	newArr[0] = arr[0];
	
	do {
			if (newArr[curr - 1] != arr[i])
			{
				newArr[curr] = arr[i];
				curr++;
			}
			i++;
			
	}while(i < size);
	
	for(auto print: newArr)
			cout << print << ",";
	cout << endl;
	
    return curr;
}

// Another method using vector
int RemoveDuplicatesFromVector(vector<int> vctr)
{
	int curr = 1;
	
	while(curr < (int)vctr.size())
	{
		if ( vctr.at(curr - 1) == vctr.at(curr) )
			vctr.erase(vctr.begin()+curr);
		else
			curr++;
	}	
	
	for (auto print: vctr)
	    cout << print << ",";
	cout << endl;

	return vctr.size();
}

// Optimum solution
int RemoveDuplicatesAlgo(vector<int> vctr)
{
	auto itr = std::unique(vctr.begin(), vctr.end());
	
	vctr.resize(std::distance(vctr.begin(), itr));
	
	for(auto print: vctr)
		cout << print << ",";
	cout << endl;
	
	return vctr.size();
}

int main()
{
  cout << "This is RemoveDuplicates Programs..." << endl;

	int arr[] = {0,0,1,1,1,2,2,3,3,4};
	int size = sizeof(arr) / sizeof(int);
	
	cout << "INFO : After Removing Duplicates from Array" << endl;
	
	// remove duplicates using Array
	int result = RemoveDuplicates(arr, size);
	
	cout << endl;
	
	vector<int> vctr = {0,0,0,0,1,1,1,2,2,3,3,4};
	cout << "INFO : After Removing Duplicates from Vector " << endl;

	// remove duplicates using vector
	result = RemoveDuplicatesFromVector(vctr);
	cout << "INFO : Size of New Array/Vecotr = " << result << endl;
	
	result = RemoveDuplicatesAlgo(vctr);
	cout << "INFO : Size of New Array/Vecotr = " << result << endl;
	
	return 0;
}


