/*
 * WAP to find missing num in consicutive array
 */

#include <iostream>
#include <vector>

using namespace std;

/*
 * Time Complexity : O(N)
 *
 */

int FindMissingNum(vector<int> data)
{
    int result = 0;
    int currSum = 0;
    int actualSum = 0;

    if (data.size())
    {
        for (auto num:data)
            currSum+=num;

	int n = data.size();
        
	actualSum = (n * ( n + 1) ) / 2;
	result = actualSum - currSum;
    }
    else
    {
	cout << "Error : Given array has no data " << endl;
    }
    
    return result;
}

int main()
{
    int result = 0;
    vector<int> data = {0,1,2,3,4,5,6};

    if (result = FindMissingNum(data))
    {
        cout << "Missing num is " << result << endl;	
    }
    else
    {
        cout << "Enter the valid number " << endl;	
    }
    
    return 0;
}

