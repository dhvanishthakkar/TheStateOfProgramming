/*
 * main.cpp
 *
 *  Created on: 06-Jun-2021
 *      Author: Dhvanish Thakkar
 */

#include<iostream>
#include"SinglyLinkList.hpp"
#include"CommonDefines.hpp"

using namespace std;

int main()
{
	int num = 0, data = 0, choice = 0;

	SinglyLinkList list;

	cout << "How Many Nodes you want to Insert ?\nEnter the number = ";
	cin >> num;
	cout << endl;

	for (int i = 0; i < num; i++)
	{
		cout << "Enter the Node [" << i << "] data = ";
		cin >> data;
		cout << endl;

		cout
				<< "1) Enter the Node At End\n2) Enter the Node At Begin\n3) Delete All Nodes\n"
				<< endl;
		cout << "Enter the choice from Above = ";
		cin >> choice;
		cout << endl;

		if (choice == 1)
		{
			list.InsetAtEnd(data);
		}
		else if (choice == 2)
		{
			list.InsertAtBegin(data);
		}
		else
		{
			cout << "Invalid Input, Please try again ..." << endl;
			i--;
		}

	}

	list.PrintAllNodes();

	cout << "Thanks for using this application, Have a great day !!" << endl;
	return 0;
}
