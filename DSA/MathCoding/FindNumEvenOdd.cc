/*
 * WAP to find num is even or odd in different ways
 */

#include <iostream>

using namespace std;

int FindNumEvenOdd(int num)
{
    if (num % 2 == 0)
	return 0;
    else
        return 1;
}

int main()
{
    int num = 0;	
    cout << "Enter the number you want to check : ";
    cin >> num;

    if (FindNumEvenOdd(num))
    {
        cout << "Entered number is ODD" << endl;	
    }
    else
    {
        cout << "Entered number is EVEN" << endl;	
    }
    
    return 0;
}

