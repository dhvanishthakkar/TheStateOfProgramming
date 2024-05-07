/*
 * Vector.cpp
 *
 *  Created on: 30-Jan-2022
 *      Author: Dhvanish Thakkar
 */

#include<iostream>

using namespace std;

class Vector {

public :

	int *vctrArr;
	int currSize;
	int maxSize;

	Vector()
	{
		currSize = 0;
		maxSize = 1;
		vctrArr = new int[maxSize];
	}
	
	~Vector()
	{
		delete [] vctrArr;
		currSize = 0;
		maxSize = 0;
	}
	
	void push_back(int data)
	{
		if (currSize == maxSize)
		{
			int *oldArr = vctrArr;
			maxSize = maxSize * 2;
			vctrArr = new int[maxSize];
			
			for (int i = 0; i < currSize; i++)
				vctrArr[i] = oldArr[i];
			
			delete [] oldArr;
		}
		
		vctrArr[currSize] = data;
		currSize++;
		
		return;
	}
	
	void printVctr()
	{
		cout << "Printing Vector :" << endl;
		
		for (int i = 0; i < currSize; i++){
			cout << vctrArr[i] << ",";
		}
		
		cout << endl;
	}
	
	int pop_back()
	{
		currSize--;
	    return vctrArr[currSize];		
	}
	
	int At(int at)
	{
		if (at <= currSize)
			return vctrArr[at];
		else
		{
			cout << "Position doesn't exist..." << endl;
			return -1;
		}
	}
	
	bool isEmpty()
	{
		return currSize==0;
	}
	
};

/* Main function */
int main()
{
	cout << "Welcome to Vector Implementation" << endl;
	Vector vctr;
	
	/* Push back the elements into Vector */
    vctr.push_back(10);
    vctr.push_back(20);
    vctr.push_back(30);
    vctr.push_back(40);
    
    vctr.printVctr();
    cout << "Cuurent Size : "<< vctr.currSize << endl << "Max Size of the Vector : " << vctr.maxSize << endl;
    
    vctr.push_back(50);    
    int result = vctr.pop_back();
    cout << "Cuurent Size : "<< vctr.currSize << endl << "Max Size of the Vector : " << vctr.maxSize << endl;
    cout << "Pop Back Result = " << result << endl;
    
    int atResult = vctr.At(5);
    cout << "vector at 1 is  = " << atResult << endl;
    
    cout << "Is Vector Empty : " << vctr.isEmpty() << endl;
	
	return 0;
}