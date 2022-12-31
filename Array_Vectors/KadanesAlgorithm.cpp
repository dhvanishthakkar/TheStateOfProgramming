/*
 * KadanesAlgorithm.cpp
 *
 *  Created on: 30-Dec-2022
 *  Author    : Dhvanish Thakkar
 *      
 */


/**********************************************************************************************************************
 * W.A.P to  find the largest sum or maximum sum of the sub-array
 * This solution known as Kadanes Algorithm
 *  Beauty of this algorithm is :
 *     - Not require any extra space to calculate the max sum, Space Complexity is O(1), No Extra space used
 *     - Time Complexity is -->  0(n), We can solve this in linear time
 *
 ***********************************************************************************************************************
 */

#include<iostream>
using namespace std;

int MaxSumArray(int arr[], int elements)
{
  int currSum = 0, maxSum = 0;
  
  for (int i = 0; i < elements; i++)
  {
    currSum = (arr[i] + currSum) > 0 ? (arr[i] + currSum) : 0;
    
    maxSum = max(currSum, maxSum);
  }
  
  return maxSum;
}

int main()
{
  
  int arr[]={-2, 6, 4, -1, 5, -12, 6, 1, 3 };
  int arrElements = sizeof(arr)/sizeof(int);
  
  cout << "INFO : Printing the Input Array " << endl;
  
  for(auto a: arr)
    cout << a << ",";
  cout << endl;
  
  int maxSum = MaxSumArray(arr, arrElements);
  
  cout << "OUTPUT : Max Sum is " << maxSum << endl;
  
  return 0;
}