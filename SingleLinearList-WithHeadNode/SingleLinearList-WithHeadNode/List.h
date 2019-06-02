#pragma once
#include "Item.h"
class List
{
public:

	// Create a linear list with nodes number length
	List(int length);

	// Delete all nodes
	~List();

	// Return the length of list
	int GetLength();

	// Update the length
	void UpdateLength(int length);

	// Return the head pointer of list
	Item *GetHead();

	// Find the pointer of node which has this index
	Item *FindNode(int index);

	// Search the node which has this value
	int SearchNode(int value);

	// Delete the node which has this index
	bool DeleteNode(int index);

private:

	// Store the length of list
	int length;

	// Store the head pointer of list
	Item *head;
};
