/*
 * ClosestSum.cpp
 *
 *  Created on: 30-Dec-2022
 *  Author    : Dhvanish Thakkar
 *      
 */

#include <iostream>
#include <vector>

using namespace std;

int ClosestSum(vector<int> vctr, int findSum) {
  cout << "INFO : Inside the ClosestSum Function.." << endl;

  int currSum = 0;

  for (int i = 0; i < (int)vctr.size(); i++) {
    if ((currSum + vctr[i]) > findSum)
      return currSum;
    else if (currSum == findSum)
      return currSum;
    else
      currSum += vctr[i];
  }

  return currSum;
}

int main() {
  cout << "INFO : This is Closest Sum Program..." << endl;

  vector<int> vctr = { 1, 2, 3, 4, 5, 6, 7, 8 };

  int findSum = 0;
  cout << "INFO : Print the input file " << endl;

  for (auto print : vctr)
    cout << print << ",";
  cout << endl;

  cout << "INPUT : Enter the Sum for which you want to find the sum : ";
  cin >> findSum;
  cout << endl;

  int result = ClosestSum(vctr, findSum);

  cout << "OUTPUT : Closest Sum is = " << result << endl;

  return 0;
}
