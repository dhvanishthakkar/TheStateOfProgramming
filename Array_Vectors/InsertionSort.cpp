/*
 * InsertionSort.cpp
 *
 *  Created on: 30-Dec-2022
 *  Author    : Dhvanish Thakkar
 *      
 */

#include<iostream>
#include<vector>

using namespace std;


/*
 * Time Complexity of this algorithm is O(N2) means ( O of N-Square)
 * Space complexity of this algorithm is O(1)
 */
void InsertionSort(vector<int> &vctr)
{
  cout <<"INFO : Inside the Insertion Sort Function.." << endl;

  for (int i = 1; i < (int)vctr.size(); i++)
  {
    int curr = vctr[i];
    int prev =  i - 1;

    // Here you will go back and see if back index values are greater then the current element then move curr index it to right place
    while (prev >=0 and vctr[prev] > curr)
    {
      vctr[prev + 1] = vctr[prev];
      prev --;
    }
    vctr[prev+1] = curr;
  }

    return;
}

int main()
{
    cout << "INFO : This is Insertion sort program.. " << endl;

    vector<int> vctr = {3, 6, -12, 1, 4, 9, 2, -1};
    
    cout << "INFO : Print the Inputs : " << endl;
    
    for(auto print: vctr)
      cout << print << ",";
    cout << endl;
    
    InsertionSort(vctr);
  
    cout << "INFO : Print the Output : " << endl;
      
      for(auto print: vctr)
        cout << print << ",";
      cout << endl;
      
      return 0;
}

