#include <iostream>
#include "List.h"

using namespace std;

int main(void)
{
	// Create a list
	int length = 0;

	// Get the length
	cout << "Please input the length of list1:" << endl;
	cin >> length;

	// Create
	List *list = new List(length);

	// Get the length
	cout << "Please input the length of list2:" << endl;
	cin >> length;

	// Create
	List *list2 = new List(length);

	// Print the list
	int count;
	Item *process;

	cout << "The address of the pointer of head is: " << list->GetHead() << endl;

	for (count = 0; count < list->GetLength(); count++)
	{
		process = list->FindNode(count);
		cout << "Node " << count << ": " << process->GetValue() << endl;
	}

	cout << "The address of the pointer of head is: " << list2->GetHead() << endl;

	for (count = 0; count < list2->GetLength(); count++)
	{
		process = list2->FindNode(count);
		cout << "Node " << count << ": " << process->GetValue() << endl;
	}

	// Insert a node test
	int indexInsert = 0;
	cout << "Please input the index your want to insert after:" << endl;
	cin >> indexInsert;
	process = list->FindNode(indexInsert);
	if (process != NULL)
	{
		int valueInsert = 0;
		cout << "Please input the value of new node:" << endl;
		cin >> valueInsert;
		process->InsertAfter(valueInsert);
		list->UpdateLength(list->GetLength() + 1);

		// Print the list
		for (count = 0; count < list->GetLength(); count++)
		{
			process = list->FindNode(count);
			cout << "Node " << count << ": " << process->GetValue() << endl;
		}
	}
	

	// Update the node test
	int updateIndex = 0;
	cout << "Please input the index of node you want to update:" << endl;
	cin >> updateIndex;
	process = list->FindNode(updateIndex);
	if (process != NULL)
	{
		int updateValue = 0;
		cout << "Please input the new value of node:" << endl;
		cin >> updateValue;
		process->Update(updateValue, process->GetLink());

		// Print the list
		for (count = 0; count < list->GetLength(); count++)
		{
			process = list->FindNode(count);
			cout << "Node " << count << ": " << process->GetValue() << endl;
		}
	}

	// Delete node test
	int indexDelete = 0;
	cout << "Please input the index of the node you want to delete:" << endl;
	cin >> indexDelete;
	if (list->DeleteNode(indexDelete))
	{
		// Print the list
		for (count = 0; count < list->GetLength(); count++)
		{
			process = list->FindNode(count);
			cout << "Node " << count << ": " << process->GetValue() << endl;
		}
	}

	// Search test
	int valueSearch = 0;
	cout << "Please input the value you want to search:" << endl;
	cin >> valueSearch;
	cout << "The index you searched is " << list->SearchNode(valueSearch) << endl;

	cin >> valueSearch;

	// Delete lists
	delete list;
	delete list2;

	// End the program
	return 0;
}