/*
 * BubbleSort.cpp
 *
 *  Created on: 19-Jun-2022
 *  Author    : Dhvanish Thakkar
 *      
 */


#include<iostream>
#include<vector>
using namespace std;

void BubbleSort(vector<int> &vctr)
{
  
  for (int i = 0; i < vctr.size(); i++)
  {
      for (int j = 0; j < vctr.size() - i; j++)
	  {
	      if (vctr[j] > vctr[j+1])
	          swap(vctr[j], vctr[j+1]);
	  }
  }
  
}

int main()
{
  vector<int> vctr = {1,5,2,-12,3,9,0};
  
  cout << "Print the input data : " << endl;
  
  for(auto print: vctr)
    cout << print << ",";
  cout << endl;
  
  BubbleSort(vctr);
  
  cout << "Print the output data : " << endl;
  
  for(auto print: vctr)
    cout << print << ",";
  cout << endl;
  
  return 0;
}
