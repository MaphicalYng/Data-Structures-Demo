#include "List.h"
#include <iostream>
using namespace std;

List::List(int length)
{
	// variable needed to use
	int count;
	int value;

	// Create the head node
	Item *process = new Item(-1);
	this->head = process;

	// Insert the other nodes
	for (count = 0; count < length; count++)
	{
		cout << "value " << count << ":" << endl;
		cin >> value;
		process = process->InsertAfter(value);
	}

	// Initilisize length
	this->length = length;
}


List::~List()
{
	// Delete all nodes
	// Create variables needed to use
	int count;

	// Get the head node
	Item *process = this->head;
	Item *processNext = process->GetLink();

	// Delete the current node
	for (count = 0; count < this->length; count++)
	{
		delete process;
		process = processNext;
		processNext = process->GetLink();
	}
}

int List::GetLength()
{
	return this->length;
}

void List::UpdateLength(int length)
{
	this->length = length;
}

Item *List::GetHead()
{
	return this->head;
}

Item *List::FindNode(int index)
{
	// Create variables needed to use
	int count;
	Item *process = this->head;

	// If out of bound
	if (index < 0 || index > this->length - 1)
	{
		cout << "Out of bound." << endl;
		return NULL;
	}

	// Finding process
	for (count = 0; count <= index; count++)
	{
		process = process->GetLink();
	}

	// Return the pointer
	return process;
}

int List::SearchNode(int value)
{
	// Create variables needed to use
	int count;
	Item *process = this->head;

	// Searching process
	for (count = 0; count < this->length; count++)
	{
		process = process->GetLink();
		if (process->GetValue() == value)
		{
			return count;
		}
	}

	// Cannot find target node
	return -1;
}

bool List::DeleteNode(int index)
{
	// Create variables needed to use
	int count;
	Item *process = this->head;
	Item *processPrec = this->head;

	// If out of bound
	if (index < 0 || index > this->length - 1)
	{
		cout << "Out of bound." << endl;
		return false;
	}

	// Deleting process
	for (count = 0; count < index; count++)
	{
		processPrec = processPrec->GetLink();
	}
	process = processPrec->GetLink();
	processPrec->Update(processPrec->GetValue(), process->GetLink());
	delete process;
	this->length = this->length - 1;

	// Operate successfully
	return true;
}
