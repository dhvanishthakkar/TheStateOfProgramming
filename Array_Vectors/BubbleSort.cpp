/*
 * BubbleSort.cpp
 *
 *  Created on: 30-Dec-2022
 *  Author    : Dhvanish Thakkar
 *      
 */


#include<iostream>
#include<vector>

using namespace std;

/*
 * Time Complexity of this algorithm is O(N2) means (Big O of N-Square)
 * Space Complexity is O(1)
 */

void BubbleSort(vector<int> &vctr)
{
  cout << "INFO : Inside the BubbleSort Function.." << endl;
  for(int i = 0; i < (int)vctr.size() - 1; i++)
  {
    for(int j = 0; j < (int)vctr.size() - 1 - i; j++)
       if (vctr[j] > vctr[j + 1])
         swap(vctr[j], vctr[j+1]);
  }
  
  return;
}

int main()
{
  cout << "INFO : This is BubbleSort Program.." << endl;

  vector<int> vctr = {1,5,2,-12,3,9,0};

  cout << "INFO : Print the input data : " << endl;
  for(auto print: vctr)
    cout << print << ",";
  cout << endl;
  
  BubbleSort(vctr);
  
  cout << "INFO : Print the output data : " << endl;
  
  for(auto print: vctr)
    cout << print << ",";
  cout << endl;
  
  return 0;
}
