/*
 * InsertionSort.cpp
 *
 *  Created on: 20-Jun-2022
 *  Author    : Dhvanish Thakkar
 *      
 */

#include<iostream>
#include<vector>

using namespace std;

void InsertionSort(vector<int> &vctr)
{
  int curr = 0, prev = 0;
  
  cout << "Print the Vector Size : " << vctr.size() << endl;
  
  for (int i = 1; i < vctr.size()-1; i++)
  {
      curr = vctr[i];
      
      prev = i - 1;
      
      while (prev >= 0 && vctr[prev] > curr)
      {
          vctr[prev + 1] = vctr[prev];
          prev --;
      }
      
      vctr[prev + 1] = curr;
  }
}

int main()
{
    vector<int> vctr = {3, 6, -12, 1, 4, 9, 2, 0};
    
    cout << "Print the Inputs : " << endl;
    
    for(auto print: vctr)
      cout << print << ",";
    cout << endl;
    
    InsertionSort(vctr);
  
    cout << "Print the Output : " << endl;
      
      for(auto print: vctr)
        cout << print << ",";
      cout << endl;
      
      return 0;
}

