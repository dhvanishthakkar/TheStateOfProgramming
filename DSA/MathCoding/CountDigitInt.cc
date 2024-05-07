/*
 * WAP to count digits in given interger
 */

#include <iostream>

using namespace std;

int CountDigitInt(int num)
{
    int digit = 0;
    int count = 0; 

    while (num != 0)
    {
	digit = num % 10;
        count++;
	num/=10;
    }
    return count;
}

int main()
{
    int num = 0;
    int count = 0;
    cout << "Enter the number you want to check : ";
    cin >> num;

    if (count = CountDigitInt(num))
    {
        cout << "Total Digits are : " << count << endl;	
    }
    else
    {
	cout << "Please enter the valid number " << endl;
    }
    
    return 0;
}

