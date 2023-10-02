/*
 * CountSort.cpp
 *
 *  Created on: 31-Dec-2022
 *  Author    : Dhvanish Thakkar
 *      
 */

#include<iostream>
#include<vector>

using namespace std;

/*
 * Time Complexity is N + Range + N = 2N + K
 * Space Compexity is O(Range)
 *
 */

void CountSortAlgo(vector<int> &vctr)
{
  // Find the largest element from the input vector
  int maxElement = 0;
  
  for (auto a: vctr)
    if(maxElement < a)
      maxElement = a;
  
  cout << "INFO : Largest Elememt = " << maxElement << endl;
  
  // Created the largest elment of vector with 0 initialization
  vector<int> countFreq(maxElement+1, 0);
  
  cout << "INFO : CountFreq Capacity = " << countFreq.capacity() << endl;
  cout << "INFO : Before CountFreq Operation : " << endl;
  for(auto a: countFreq)
      cout << a << ",";
    cout << endl;
    
  // Increment the frequency index using orginal array
  for (int i = 0; i < (int)vctr.size(); i++)
    countFreq[vctr[i]]++;
  
  cout << "INFO : After CountFreq Operation : " << endl;
    for(auto a: countFreq)
        cout << a << ",";
      cout << endl;
    
  // Update the Original Vector
  int j = 0;
  for (int i = 0, j = 0; i < (int)countFreq.size() || j < (int)vctr.size(); i++)
  {
    while (countFreq[i] > 0)
    {
      --countFreq[i];
      vctr[j] = i;
      j++;
    }   
  }
  
  cout << "INFO : After Sorting Original Vector : " << endl;
      for(auto a: vctr)
          cout << a << ",";
        cout << endl;
    
  return;
}

int main()
{
  cout << "INFO : This is CountSort Program..." << endl;
  
  vector<int> vctr = {3,1,9,7,1,2,4};
  
  cout << "INFO : Printing the input elements..." << endl;
  
  for(auto a: vctr)
    cout << a << ",";
  cout << endl;
  
  // Call the Count Sort Algo
  CountSortAlgo(vctr);
  
  cout << "OUTPUT : Printing the output elements..." << endl;
  
  for(auto a: vctr)
      cout << a << ",";
    cout << endl;
  
  return 0;
}


