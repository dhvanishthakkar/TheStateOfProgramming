/*
 * SavePatients.cc
 *
 *  Created on: 25-May-2024
 *      Author: Dhvanish Thakkar
 */

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/*****************************************************************************************
 *
 *  Description :
 *    - A new deadly virus has infected large population of a planet. A brilliant scientist
 *      has discovered a new strain of virus which can cure this disease. Vaccine produced 
 *      from this virus has various strength depending on midichlorians count. A person is
 *      cured only if midichlorians count in vaccine batch is more than midichlorians count
 *      of person. A doctor receives a new set of report which contains midichlorians count 
 *      of each infected patient, Practo stores all vaccine doctor has and their midichlorians 
 *      count. You need to determine if doctor can save all patients with the vaccines he has.
 *      The number of vaccines and patients are equal.
 *
 *  Solution : 
 *    - Here we need to simply sort both the array and match the virus count and vaccine count
 *    - If all vaccine are suffcient for infacted patient then return true else false.
 *
 *  Time  Complexity : (NLogN)
 *  Space Complexity : O(1)
 *
 *****************************************************************************************/

bool SavePatients(vector<int>& vaccine, vector<int>& midichlorians)
{
	sort(vaccine.begin(), vaccine.end()); 
	sort(midichlorians.begin(), midichlorians.end());
	
	int i = 0, j = 0;
	while (i < midichlorians.size() && j < vaccine.size())
	{
	    if (midichlorians[i] <= vaccine[j]) 
	    {
	        i++;
	        j++;
	    }
	    else
	    {
	        j++;
	    }
	}
	if (i == midichlorians.size())
	    return true;

   return false;
}

// Main Function
int main()
{
	vector<int> vaccine = {123, 146, 454, 542, 456};
	vector<int> midichlorians = {100, 328, 248, 689, 200};
	
	// Function call
	bool result = SavePatients(vaccine, midichlorians);
	
	if (result)
	{
		cout << "Output1 : Yes, With given vaccine we will able to save all patients " << endl;
	}
	else
	{
		cout << "Output1 : No, With given vaccine we will not able to save all patients " << endl;		
	}
	return 0;
}



