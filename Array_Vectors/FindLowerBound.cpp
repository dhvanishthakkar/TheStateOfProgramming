/*
 * FindLowerBound.cpp
 *
 *  Created on: 30-Dec-2022
 *  Author    : Dhvanish Thakkar
 *      
 */

#include<iostream>
#include<vector>

using namespace std;

/*
 * Binary Search Algorithm used for searching
 * Time Complexity of this function is O(Log2N) --> (Big O of Log2N)
 * Space complexity is O(1)
 */
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
  cout << "INFO : This is FindLowerBound Program..." << endl;

  vector<int> vctr1 = {10,20,30,40,50,60,70,80,90,100,110};
  int key = 0;
  cout << "INFO : Print the inputs : " << endl;
  
  for(auto print : vctr1)
    cout << print << ",";
  cout << endl;
  
  cout << "INPUT : Enter the Key you want " << endl;
  cin >> key;
  
  int lowerBound = FindLowerBound(vctr1, key);
  
  cout << "OUTPUT : Lower Bound is = "  << lowerBound << endl;
  
  return 0;
}
