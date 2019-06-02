#pragma once
class Node
{
public:

	// Init the node.
	Node(int colInput, int rowInput, int valueInput);
	Node();
	~Node();

	// Store the col number of node.
	int col;

	// Store the row number of node.
	int row;

	// Store the value of node.
	int value;
};

