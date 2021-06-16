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

void SinglyLinkList::ReverseLinkList()
{
	SinglyLinkListNode *prev = NULL;
	SinglyLinkListNode *next = NULL;
	SinglyLinkListNode *current = headPtr;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	headPtr = prev;
}

void SinglyLinkList::InsertNodeAtPosition(int position, int data)
{
	SinglyLinkListNode *newNode = CreateNewNode();
	SinglyLinkListNode *currNode = headPtr;

	/* Initializing new node with data */
	newNode->data = data;
	newNode->next = NULL;

	/* Enter if it is first position */
	if (position == 1)
	{
		newNode->next = headPtr;
		headPtr = newNode;
	}
	else
	{
		int currPos = 0;
		for (currPos = 0; currPos < position - 2; currPos++)
		{
			if (currNode != NULL)
			{
				currNode = currNode->next;
			}
			else
			{
				cout << "Invalid Position you have entered..Try Again..."
						<< endl;
				break;
			}
		}

		/* check if it got NULL or got exact position */
		if (currPos == position - 2)
		{
			newNode->next = currNode->next;
			currNode->next = newNode;
		}
	}
}

void SinglyLinkList::DeleteNthNode(int pos)
{
	SinglyLinkListNode *tempNode = headPtr;
	SinglyLinkListNode *temp1;

	if (pos == 1)
	{
		headPtr = tempNode->next;
		delete tempNode;
	}
	else
	{
		for (int i = 0; i < pos - 2; i++)
		{
			tempNode = tempNode->next;
		}

		temp1 = tempNode->next;
		tempNode->next = temp1->next;
		delete temp1;
	}
}

void SinglyLinkList::PrintNodesRecursively(SinglyLinkListNode *node)
{
	if (node == NULL)
	{
		return;
	}
	cout << node->data << ",";
	PrintNodesRecursively(node->next);
}
void SinglyLinkList::ReverseLinkListRecursion(SinglyLinkListNode *node)
{
	if (node == NULL)
	{
		return;
	}
	ReverseLinkListRecursion(node->next);
	cout << node->data << ",";
}
/* End of the class */
