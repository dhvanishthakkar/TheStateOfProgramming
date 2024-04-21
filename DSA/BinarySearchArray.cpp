/*
 * The State of Programming 2021
 *
 * FileName : BinarySearchArray.cpp
 *
 * Author : Dhvanish Thakkar
 * Date   : 31-Dec-2021
 *
 */
#include<iostream>

using namespace std;

/* Binary Search Using Array
 *
 * Time Complexity Analysis :
 *
 *   N/2^0, N/2^1, N/2^2, N/2^3.....N/2^k
 *   Where 2 ^ k = Log 2 ^ N
 *   TCA = O(Log2^N)
 */
int BinarySearch(int arr[], int elements, int key) {
	int start = 0;
	int end = elements - 1;
	int mid = 0;
	int count = 0;

	while (start <= end) {
		mid = (start + end) / 2;

		if (arr[mid] == key) {
			cout << "Total Iteration Count : " << count << endl;
			return mid;
		} else if (arr[mid] > key) {
			end = mid - 1;
		} else {
			start = mid + 1;
		}
		count++;
	}

	cout << "Total Iteration Count : " << count << endl;
	return -1;
}

/* Main Function */
int main() {
	int arr[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 25, 30 };
	int key = 0;
	int size = sizeof(arr) / sizeof(int);

	cout << "Enter the key which you want to find from the below list : "
			<< endl;

	for (int i = 0; i < size; i++) {
		cout << arr[i] << ", ";
	}

	cout << "\nEnter the Key : ";
	cin >> key;

	/* Binary Search Using Array Function Call */
	int result = BinarySearch(arr, size, key);

	if (result != -1) {
		cout << "Element is PRESENT at '" << result << "' index !!" << endl;
	} else {
		cout << "Element does NOT present in the list.." << endl;
	}

	return 0;
}
