/*
 * SingleLinkList.cpp
 *
 *  Created on: 06-Jun-2021
 *      Author: Dhvanish Thakkar
 */

#include<iostream>
#include "SinglyLinkList.hpp"

using namespace std;

/* Constructor */
SinglyLinkList::SinglyLinkList()
{
	this->headPtr = NULL;
}

/* Destructor */
SinglyLinkList::~SinglyLinkList()
{
	delete headPtr;
}

/* Method to Insert Node at End */
void SinglyLinkList::InsetAtEnd(int data)
{
	SinglyLinkListNode *temp = headPtr;

	/* Allocating the memory to the new node */
	SinglyLinkListNode *newNode = CreateNewNode();

	/* Insert the information */
	newNode->data = data;
	newNode->next = NULL;

	if (headPtr == NULL)
		headPtr = newNode;
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		/* Link the Node At End */
		temp->next = newNode;

	}
}

/* Method to Insert Node at Begin */
void SinglyLinkList::InsertAtBegin(int data)
{
	SinglyLinkListNode *newNode = CreateNewNode();
	SinglyLinkListNode *tempPtr = headPtr;

	/* Initialized the node with data */
	newNode->data = data;
	newNode->next = NULL;

	if (headPtr == NULL)
	{
		headPtr = newNode;
	}
	else
	{
		newNode->next = tempPtr;
		headPtr = newNode;
	}
}

/* Method to Print All the Node */
void SinglyLinkList::PrintAllNodes()
{
	cout << "Printing All the Nodes " << endl;
	SinglyLinkListNode *tempPtr = headPtr;

	while (tempPtr != NULL)
	{
		cout << tempPtr->data << ", ";
		tempPtr = tempPtr->next;
	}
	cout << endl;
}

SinglyLinkListNode* SinglyLinkList::CreateNewNode()
{
	return new SinglyLinkListNode;
}

/* End of the class */
