/*
 * ClosestSum.cpp
 *
 *  Created on: 29-Jun-2022
 *  Author    : Dhvanish Thakkar
 *      
 */

#include <iostream>
#include <vector>

using namespace std;

int ClosestSum(vector<int> vctr, int findSum)
{
   int currSum = 0;
   
   for (int i = 0; i < vctr.size(); i++)
   {
       if ( (currSum + vctr[i]) > findSum)
           return currSum;
       else if (currSum == findSum)
           return currSum;
       else
          currSum += vctr[i];
   } 
   
   return currSum;
}

int main ()
{
  vector<int> vctr = {1, 2, 3, 4, 5, 6, 7, 8};
  
  int findSum = 0;
  cout << "Print the input file " << endl;
  
  for (auto print : vctr)
    cout << print << ",";
  
  cout << endl;
  
  cout << "Enter the Sum for which you want to find the sum" << endl;
  cin >> findSum;
  
  int result = ClosestSum(vctr, findSum);
  
  cout << "Closest Sum is = " << result << endl;
  
  return 0;
}