#include <iostream>
#include <vector>
#include <climits>

using namespace std;

/******************************************************************************
 *
 * Time Complexity : O(N)
 * Space Complexity : O(1)
 *
 ******************************************************************************/
int SecondLargeNumber(vector<int> &nums)
{
	int largest = INT_MIN;
	int secLarge = INT_MIN;

	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] > largest)
		{
			secLarge = largest;
			largest = nums[i];
		} else if (nums[i] > secLarge)
		{
			if (nums[i] != largest)
				secLarge = nums[i];
		}
	}

	return secLarge;
}

int main()
{
	int numElement = 0;
	int data = 0;
	vector<int> nums;

	cout << "How many element you want to enter => ";
	cin >> numElement;
	cout << endl;

	// Taking user inputs
	cout << "Enter the numbers : ";
	for (int i = 0; i < numElement; i++)
	{
		cin >> data;
		nums.push_back(data);
	}
	cout << endl;

	// Display inputs
	cout << "You have entered : ";
	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << ",";
	}
	cout << endl;

	// Function call
	int result = SecondLargeNumber(nums);

	// Display output
	cout << "Second Largest Number in the Array is " << result << endl;
	return 0;
}
