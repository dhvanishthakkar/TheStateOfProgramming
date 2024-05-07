/*
 * WAP to find all the divisors of num
 */

#include <iostream>
#include<vector>
#include <algorithm>

using namespace std;

/*
 * Time Complexity : O(UnderRoot(N) + log(N))
 *
 * UnderRoot N for (i*i) in loop, Log(N) for sorting the array
 */
vector<int> FindAllDivisor(int num)
{
    vector<int> result;
    int secDiv = 0;

    for (int i = 1; i*i <= num; i++)
    {
	if (num % i == 0)
        {
            result.push_back(i);
            secDiv = num / i;
	    if (i*i != num)
                result.push_back(secDiv);
	}
    }
    sort(result.begin(), result.end());
    return result;
}

int main()
{
    vector<int> result;
    int num = 0;
    cout << "Enter the number you want to check : ";
    cin >> num;

    result = FindAllDivisor(num);
    
    if (result.size())
    {
	cout << "Below are the divisors of num = " << num << " : " << endl;
        for(auto div : result)
	    cout << div << ",";
        cout << endl;	
    }
    else
    {
	cout << "Please enter the valid number " << endl;
    }
    
    return 0;
}

