/*
 * FindLowerBound.cpp
 *
 *  Created on: 29-Jun-2022
 *  Author    : Dhvanish Thakkar
 *      
 */

#include<iostream>
#include<vector>

using namespace std;

int FindLowerBound(vector<int> vctr2, int key)
{
  int start = 0;
  int mid = 0;
  int end = vctr2.size()-1;
  
  while (start <= end)
  {
    mid = (end + start) / 2;
    
    if (vctr2[mid] == key)
    {
       return vctr2[mid-1];
    }
    else if (vctr2[mid] > key)
    {
       end = mid - 1;
    }
    else
    {
       start = mid + 1;
    }
  }
  
  if (vctr2[mid] > key)
  {
      return vctr2[mid-1];
  }
  return vctr2[mid];
}


int main()
{
  vector<int> vctr1 = {10,20,30,40,50,60,70,80,90,100,110};
  int key = 0;
  cout << "Print the inputs : " << endl;
  
  for(auto print : vctr1)
    cout << print << ",";
  cout << endl;
  
  cout << "Enter the Key you want " << endl;
  cin >> key;
  
  int lowerBound = FindLowerBound(vctr1, key);
  
  cout << "Lower Bound is = "  << lowerBound << endl;
  
  return 0;

}
