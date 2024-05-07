/*
 * BinarySearchVctr.cpp
 *
 *  Created on: 03-Jan-2022
 *      Author: dhvanish
 */
#include<iostream>
#include<vector>

using namespace std;

/* Binary Search Using Array
 *
 * Time Complexity Analysis :
 *
 *   N/2^0, N/2^1, N/2^2, N/2^3.....N/2^k
 *   Where 2 ^ k = Log 2 ^ N
 *   TCA = O(Log2^N)
 */
int BinarySearch(vector<int> vctr, int key) {
	int start = 0;
	int end =  vctr.size();
	int mid = 0;

	while (start <= end)
	{
		mid = (start + end) / 2;

		if (vctr[mid] == key)
		{
			return vctr[mid];
		}
		else if (vctr[mid] > key)
		{
			
		//	if ( ((mid -1) >= 0) && (vctr[mid - 1] < key))
		//	{
		//	    return vctr[mid - 1];
		//	}
							
			end = mid - 1;
		}
		else
		{
			//if ((vctr[mid + 1] > key ) && (mid + 1 <= end))
				//return vctr[mid];
							
			start = mid + 1;
		}
	}

	return vctr[end];
}

// Main Function 
int main()
{

	vector<int>vctr1 = {-1,-1,2,3,5};
	vector<int>vctr2 = {1,2,3,4,6};
	int key = 0;
	
	cout << "Enter the key which you want to find from the below list : "
			<< endl;

	for (int i = 0; i < vctr1.size(); i++) {
		cout << vctr1[i] << ", ";
	}

	cout << "\nEnter the Key : ";
	cin >> key;

	// Binary Search Using Array Function Call 
	int result = BinarySearch(vctr1, key);

	cout <<"Lower Bound Number is : " << result << endl << endl;
	
	

	cout << "Enter the key which you want to find from the below list : "
			<< endl;
     
	for (int i = 0; i < vctr2.size(); i++) {
		cout << vctr2[i] << ", ";
	}
	
	cout << "\nEnter the Key : ";
			cin >> key;

	result = BinarySearch(vctr2, key);
	
	cout <<"Lower Bound Number is : " << result << endl;
	
	return 0;
}

