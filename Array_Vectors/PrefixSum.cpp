/*
 * PrefixSum.cpp
 *
 *  Created on: 30-Dec-2022
 *  Author    : Dhvanish Thakkar
 *      
 */

/*
 * Question : W.A.P to find the largest sub array sum from the array
 */
#include <iostream>
using namespace std;

/*
 *  Time Complexity is O(N^2) --> (Big O of N^2)
 *  Space Compexity 
 */

int PrefixSum(int arr[], int elements)
{
    int array[elements] = {};
    int largestSum = 0, currSum = 0;
    array[0] = arr[0];
    
    // Create the another array with sum of the original array till that index
    for(int i = 1; i < elements; i++)
        array[i] = array[i-1] + arr[i];
    
    cout << "INFO : Printing the Prefix Array : " << endl;
    
    for(auto a:array)
      cout << a << ",";
    cout << endl;
    
    for (int i = 0; i < elements; i++)
    {
      for (int j = i; j < elements; j++)
      {
         currSum = i > 0 ? array[j] - array[i-1] : array[j];  
         largestSum = max(largestSum, currSum);
      }
    }
  
  return largestSum;
}

int main()
{
  int arr[] = {-2, 6, 4, -1, 5, -12, 6, 1, 3};
  int n = sizeof(arr)/sizeof(int);
  
  cout << "INFO : Printing the input array " << endl;
  
  for(auto a: arr)
    cout << a << ",";
  cout << endl;
  
  int result = PrefixSum(arr, n);
  
  cout << "OUTPUT : Largest sum of the sub-array is " << result << endl;
      
  return 0;
}

