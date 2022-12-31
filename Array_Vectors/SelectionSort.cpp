/*
 * SelectionSort.cpp
 *
 *  Created on: 30-Dec-2022
 *  Author    : Dhvanish Thakkar
 *      
 */

#include<iostream>
#include<vector>

using namespace std;


/*
 *
 * Time Complexity of this program is O(N^2)
 * Space Complexity is O(1)
 *
 */
void SelectionSort(vector<int> &vctr)
{
  cout << "INFO : Inside the SelectionSort Program..." << endl;

  int min = 0;

  for (int pos = 0; pos < (int)vctr.size()-1; pos++)
  {
      min = pos;

      for (int i = pos + 1; i < (int) vctr.size(); i++)
      {
         if(vctr[i] < vctr[min])
           min = i;
      }

      if (min != pos)
        swap(vctr[min], vctr[pos]);
  }

   return;
}

int main()
{
  cout << "INFO : This Selection Sort Program..." << endl;

  vector<int> vctr= {3,6,-12,1,4,9,2,14};
  
  cout << "INFO : Print the inputs" << endl;
  
  for(auto print : vctr)
    cout << print << ",";
  cout << endl;
  
  SelectionSort(vctr);
  
  for(auto print : vctr)
      cout << print << ",";
    cout << endl;
  
  return 0;  
}
