/*
 * PrefixSumLargSubArr.cpp
 *
 *  Created on: 02-Jan-2022
 *      Author: Dhvanish Thakkar
 */
#include<iostream>

using namespace std;

void PrefixSumLargSubArr(int arr[], int size)
{
   int prefixArr[size] = {0};
   int currentSum = 0, LargestSum = 0;
   prefixArr[0] = arr[0];
   
   cout <<"Prefix Sum Array : " << endl << prefixArr[0] << ",";
   for(int i = 1; i < size; i++)
   {
     prefixArr[i] = prefixArr[i-1] + arr[i];
     cout << prefixArr[i] << ",";
   }
   cout << endl;
   for (int i = 0; i < size; i++)
   {
     for (int j = i; j < size; j++)
     {
       currentSum = 0;
       currentSum = i > 0 ? prefixArr[j] - prefixArr[i-1] : prefixArr[j];
       if (currentSum > LargestSum)
       {
         LargestSum = currentSum;
       }
     }  
   }
   
   cout << "Largest Sum is : " << LargestSum << endl;
          
   return;
}

/* Main Funcation */
int main()
{
  int arr[] = {10,-20,-5,-10,2,-13,20,11};
  int size = sizeof(arr)/sizeof(int);
  
  /* Print the Existing Array */
  cout << "Printing Input Array : " << endl;
  
  for(int i = 0; i < size; i++)
  {
    cout << arr[i] << ",";
  }
  cout << endl;
  /* Call the PreFixSumLargeSubArr funcation */
  PrefixSumLargSubArr(arr, size);
  cout << endl;
  return 0;
}
