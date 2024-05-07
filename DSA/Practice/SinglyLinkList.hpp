/*
 * Description : Perform all datastructure operation using Single Link List
 *
 * SingleLinkList.hpp
 *
 *  Created on: 06-Jun-2021
 *      Author: Dhvanish Thakkar
 */
#ifndef INCLUDE_SINGLYLINKLIST_HPP_
#define INCLUDE_SINGLYLINKLIST_HPP_

#include "CommonDefines.hpp"

class SinglyLinkList
{

public:
	SinglyLinkListNode *headPtr;

public:
	/* default constructor */
	SinglyLinkList();

	/* Destructor of SinglyLinkList */
	~SinglyLinkList();

	/* Insert the node at begin */
	void InsertAtBegin(int data);

	/* Insert the Node at End */
	void InsetAtEnd(int data);

	/* Print the all Nodes */
	void PrintAllNodes();

	/* Reverse all linked list */
	void ReverseLinkList();

	/* Create New Node */
	SinglyLinkListNode* CreateNewNode();

	/* Delete All the Nodes  */
	void DeleteNthNode(int pos);

	/* Insert a Node at given position */
	void InsertNodeAtPosition(int pos, int data);

	void PrintNodesRecursively(SinglyLinkListNode *node);

	void PrintReverseLinkListRecursion(SinglyLinkListNode *node);

	void ReverseLinkListRecursion(SinglyLinkListNode *node);
};

#endif /* INCLUDE_SINGLYLINKLIST_HPP_ */
