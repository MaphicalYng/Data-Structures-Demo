#include <iostream>
#include "Array1D.h"
using namespace std;

int main()
{
	int count;
	int length = 0;
	int input = 0;

	cout << "Please input a length: ";
	cin >> length;
	Array1D a(length);

	cout << "Please input the values of array:" << endl;
	for (count = 0; count < length; count++)
	{
		cin >> input;
		a.Store(count, input);
	}

	a.PrintArray();

	cout << "Input the index you want to get its value: " << endl;
	cin >> count;
	a.Retrieve(count, input);
	cout << "The value is " << input << endl;

	return 0;
}