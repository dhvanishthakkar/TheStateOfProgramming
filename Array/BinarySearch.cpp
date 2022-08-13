#include <iostream>

using namespace std;

int BinarySearch(int arr[], int size, int key)
{
	cout << "size = " << size << " key = " << key << endl;
	int start = 0, mid = 0;
	int end = size;

	while (start <= end)
	{
		mid = (start + end) / 2 ;

		if(arr[mid] == key)
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

	cout << "Print Elements : " << endl;

	for(auto a: arr)
		cout << a << ",";

	cout << endl;

	cout << "Enter the key which you want to search from above elements " << endl;
	cin >> key;

	int result = BinarySearch(arr, size, key);

	cout << "result = " << result << endl;

	return 0;
}
