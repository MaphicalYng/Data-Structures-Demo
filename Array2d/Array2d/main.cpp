#include <iostream>
#include "Array2D.h"
using namespace std;

int main()
{
	int i = 0;
	int j = 0;
	int inputTemp = 0;
	cout << "Please input the i and j: " << endl;
	cin >> i;
	cin >> j;
	Array2D a(i, j);

	cout << "Please input the values, first raws: " << endl;
	for (int countI = 0; countI < i; countI++)
	{
		for (int countJ = 0; countJ < j; countJ++)
		{
			cin >> inputTemp;
			a.Store(countI, countJ, inputTemp);
		}
	}

	a.PrintArray();

	cout << "please input the index you want to get their value: ";
	cin >> i;
	cin >> j;
	a.Retrieve(i, j, inputTemp);
	cout << "The value is " << inputTemp << endl;

	cin >> inputTemp;

	return 0;
}