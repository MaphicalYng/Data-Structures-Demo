#pragma once
class Item
{
public:

	// Create head node
	Item(int value, Item *link = 0);

	// Nothing
	~Item();

	// Return the value of this node
	int GetValue();

	// Return the pointer of this node
	Item *GetLink();

	// Update the content of this node
	void Update(int value, Item *link);

	// Insert a new node after this node
	Item *InsertAfter(int value);

private:

	// Store the value of this node
	int value;

	// Store the pointer of next node
	Item *link;
};

