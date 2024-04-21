/*
 * InbuiltSorting.cpp
 *
 *  Created on: 08-Jan-2022
 *      Author: Dhvanish Thakkar
 */

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	vector<int> vctr = {10, 0, -4, 1, 5, -12, 6, 7, -8};
	
	/* Before sorting printing array */
    cout << "Printing Array Before Sorting : " << endl;
    
    for(vector<int>::iterator it = vctr.begin(); it != vctr.end(); ++it)
    	cout << *it << ",";
    
    cout << endl;
 
    /* Sorting the Array */
    sort(vctr.begin(), vctr.end());
    
    cout << "After Sorting the Array Using Inbuilt Funtionality : " << endl;
    for(vector<int>::iterator it = vctr.begin(); it != vctr.end(); ++it)
        	cout << *it << ",";
    
    cout << endl;
    
    /* Reversing the array back to decending order */
    //sort(vctr.begin(), vctr.end(), greater<int>());  // first way to sort array 
    reverse(vctr.begin(), vctr.end());     // Another way to sort the array decending order
    //sort(vctr.begin(), vctr.end(), UserDefinefunction);  // Another way to sort array decending order
    
    cout << "After Reversing the Array Using Inbuilt Funtionality : " << endl;
    
    for(vector<int>::iterator it = vctr.begin(); it != vctr.end(); ++it)
        	cout << *it << ",";
    
    cout << endl;
    
    return 0; 
}




