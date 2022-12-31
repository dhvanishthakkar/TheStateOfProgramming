/*
 * BinarySearch.cpp
 *
 *  Created on: 30-Dec-2022
 *  Author    : Dhvanish Thakkar
 *
 */

#include <iostream>

using namespace std;

/*
 * Time complexity of this algorithm is O(log2N) :
 *
 *   N      Itr    Value
 *   N/2^0   0       0
 *   N/2^1   1       1
 *   N/2^2   2       4
 *    .      .       .
 *    .      .       .
 *    N/2^K  K       K      N/2^K = 1 so take K = log 2^N then time complexity is O(log2N)
 *
 * Space complexity is O(1)
 */

int BinarySearch(int arr[], int size, int key)
{
	cout << "INFO : Array size = " << size << " Key = " << key << endl;
	int start = 0, mid = 0;
	int end = size - 1;

	while (start <= end)
	{
		mid = (start + end) / 2 ;

		if (arr[mid] == key)
		{
		    return arr[mid];
		}
		else if (arr[mid] > key)
		{
		    end = mid - 1;
		}
		else
		{
		    start = mid + 1;
		}
	}

	return -1;
}

int main()
{
	int arr[] = {1,3,5,7,9,10,11};
	int size = sizeof(arr) / sizeof(int);
	int key = 0;

	cout << "INFO : Print Elements : " << endl;

	for(auto a: arr)
		cout << a << ",";

	cout << endl;

	cout << "INPUT : Enter the key which you want to search from above elements " << endl;
	cin >> key;

	int result = BinarySearch(arr, size, key);

	if (result != -1)
	  cout << "OUTPUT : Key found at index = " << result << endl;
	else
	  cout << "OUTPUT : Key Not Found from the Given Array !! " << endl;

	return 0;
}
