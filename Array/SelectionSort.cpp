/*
 * SelectionSort.cpp
 *
 *  Created on: 20-Jun-2022
 *  Author    : Dhvanish Thakkar
 *      
 */

#include<iostream>
#include<vector>

using namespace std;

void SelectionSort(vector<int> &vctr)
{ 
  int min = 0;
  
  cout << "Vector Size = " << vctr.size()<< endl;
  
  for (int pos = 0; pos < vctr.size() - 1; pos++)
  {
      min = pos;
    
      for (int j = pos + 1; j < vctr.size(); j++)
      {
          if (vctr[j] < vctr[min] )
              min = j;
      }
      
      if (min != pos)
          swap(vctr[min], vctr[pos]);
  }
  
  return;
}

int main()
{
  vector<int> vctr= {3,6,-12,1,4,9,2,14};
  
  cout <<"Print the inputs" << endl;
  
  for(auto print : vctr)
    cout << print << ",";
  cout << endl;
  
  SelectionSort(vctr);
  
  for(auto print : vctr)
      cout << print << ",";
    cout << endl;
  
  return 0;  
}

