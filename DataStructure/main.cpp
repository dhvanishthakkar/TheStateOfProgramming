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
	cout << "Welcome to TheStateOfProgramming. . .!! " << endl;
	cout << endl;

	int num = 0, data = 0, choice = 0, pos = 0;
	char in = '\0';

	SinglyLinkList list;

	cout << "How Many Nodes you want to Insert ?\nEnter the number = ";
	cin >> num;
	cout << endl;

	for (int i = 0; i < num; i++)
	{
		cout << "Enter the data = ";
		cin >> data;

		cout
				<< "1) Insert a node at begin\n2) Insert a node at end\n3) Insert a node at position\n4) Delete All Nodes\n"
				<< endl;
		cout << "Enter the choice from Above = ";
		cin >> choice;
		cout << endl;

		if (choice == 1)
		{
			list.InsertAtBegin(data);
		}
		else if (choice == 2)
		{
			list.InsetAtEnd(data);
		}
		else if (choice == 3)
		{
			cout << "Enter the position you want to enter " << endl;
			cin >> pos;
			list.InsertNodeAtPosition(pos, data);
		}
		else
		{
			cout << "Invalid Input, Please try again ..." << endl;
			i--;
		}

	}

	list.PrintAllNodes();

	cout << "Reverse the Linklist.." << endl;

	list.ReverseLinkList();
	list.PrintAllNodes();

	cout << "Do you want to delete any Node - y/n?" << endl;
	cin >> in;

	if (in == 'y')
	{
		while (in == 'y')
		{
			cout << "Enter the position you want to delete " << endl;
			cin >> pos;
			list.DeleteNthNode(pos);
			list.PrintAllNodes();
			cout << "Do you want to delete more - y/n  ?" << endl;
			cin >> in;
		}
	}

	cout << "Printing all the nodes using recursive mode : " << endl;
	SinglyLinkListNode *node = list.headPtr;
	list.PrintNodesRecursively(node);
	cout << endl;

	cout << "Lets reverse the node recursive way :) " << endl;
	list.ReverseLinkListRecursion(node);
	cout << endl;
	cout << "Thanks for using this application, Have a great day !!" << endl;
	return 0;
}
