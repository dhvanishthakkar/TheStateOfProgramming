#include <iostream>

using namespace std;

int ArrayReverse(int arr[], int size)
{
	//int i, j = 0;
	for(int i = 0, j = size -1; i < j; i++ , j --)
		swap(arr[i], arr[j]);
	return 0;
}


int main()
{
    int arr[] = { 1, 3, 5, 7, 9, 10, 13};
    int size = sizeof (arr) / sizeof (int);
    
    cout << "Print the elements" << endl;
    
    for(auto print : arr)
    	cout << print << ",";
    cout << endl;
    
    int result = ArrayReverse(arr, size);  
    
    cout << "After Reversing the Array" << endl;
    
    for (auto print: arr)
    	cout << print << ",";
    
    cout << endl;
	
	return 0;
}