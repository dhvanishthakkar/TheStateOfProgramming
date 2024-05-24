/*
 * MergeSort.cc
 *
 *  Created on: 24-May-2024
 *      Author: Dhvanish Thakkar
 */

#include<iostream>
#include<vector>

using namespace std;

/***********************************************************************************
 *
 *  Description :  
 *   - WAP to sort an array using merge sort
 *
 *  Solution :
 *   - It's divide and conquer strategy
 *   - We need to first half the array, send first half to recursion for sort 
 *   - Send second half to recursion for sorting
 *   - Merge both array sorted array using seperate function
 *
 *  Time  Complexity : O(NLogN)
 *  Space Complexity : O(N)
 *
 ***********************************************************************************/
void mergeArray(int start, int mid, int end, vector<int>&nums)
{
	int n = mid - start + 1;
	int m = end - mid;
	
	vector<int> num1(n,0);
	vector<int> num2(m,0);
    
	// copy start to mid element to first array
	int l = 0;
	for (int i = start; i <= mid; i++)
	{
		num1[l] = nums[i];
		l++;
	}

	// copy mid+1 to end element to second array
	l = 0;
	for (int i = mid+1; i <= end; i++)
	{
		num2[l] = nums[i];
		l++;
	}
    
	// merge the both array into 3rd array
	int i = 0, j = 0, k = start;
	while(i < n && j < m)
	{
		if (num1[i] < num2[j])
		{
			nums[k] = num1[i];
			i++;
			k++;		   
		}
		else
		{
			nums[k] = num2[j];
			j++;
			k++;
		}
	}
	
	// copy remaining elements from num1
	while(i < n)
	{
		nums[k] = num1[i];
		i++;
		k++;
	}

	// copy remaining elements from num2
	while(j < m)
	{
		nums[k] = num2[j];
		j++;
		k++;
	}

	return;
}


void MergeSort(int start, int end, vector<int>&nums)
{
	if (start < end)
	{
        int mid = (start+end) / 2;
	    MergeSort(start, mid, nums);
	    MergeSort(mid+1, end, nums);
	    mergeArray(start, mid, end, nums);
	}
	return;
}

// Main Function
int main()
{
	vector<int> nums = {6,2,1,10,7,9,5,0};
	
	cout << "Display Input Array : " << endl;
	for (auto ele : nums)
		cout << ele << ",";
	cout << endl;
	
	// Insertion sort
	MergeSort(0, nums.size()-1, nums);
	
	cout << "Display Output Array : " << endl;
	for (auto ele : nums)
		cout << ele << ",";
	cout << endl;

    return 0;	
}