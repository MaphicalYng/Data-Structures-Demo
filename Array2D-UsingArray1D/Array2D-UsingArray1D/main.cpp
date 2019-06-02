#include <iostream>
#include "Array2D.h"
using namespace std;

int main()
{
	// Test to create a array.
	int line = 0;
	int row = 0;
	cout << "Please input the line number: ";
	cin >> line;
	cout << "Please input the row number: ";
	cin >> row;
	Array2D *array = new Array2D(line, row);

	// Test to input the values.
	int temp = 0;
	cout << "Please input the values:" << endl;
	for (int count1 = 0; count1 < line; count1++)
	{
		for (int count2 = 0; count2 < row; count2++)
		{
			cin >> temp;
			array->Store(count1, count2, temp);
		}
	}

	// Test to get value.
	int i = 0;
	int j = 0;
	cout << "Please input the index you want to get its value:" << endl;
	cout << "i: ";
	cin >> i;
	cout << "j: ";
	cin >> j;
	int x = 0;
	if (array->Retrieve(i, j, x))
	{
		cout << "The value is " << x << endl;
	}
	else
	{
		cout << "The index you input is wrong." << endl;
	}

	// Test to change value.
	cout << "Please the index you want to change its value:" << endl;
	cout << "i: ";
	cin >> i;
	cout << "j: ";
	cin >> j;
	cout << "Please input the value: ";
	int value = 0;
	cin >> value;
	if (array->Store(i, j, value))
	{
		cout << "Succeed." << endl;
	}
	else
	{
		cout << "The index you input is wrong." << endl;
	}

	// Test to print.
	cout << "Printing tha array: " << endl;
	array->Print();

	cin >> temp;

	return 0;
}