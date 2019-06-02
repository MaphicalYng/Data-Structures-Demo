#include "Array1D.h"
#include "Array2D.h"
#include <iostream>
using namespace std;

Array2D::Array2D(int iInput, int jInput)
{
	if (iInput < 0 || jInput < 0)
	{
		cout << "Wrong size, please delete this array." << endl;
		return;
	}
	i = iInput;
	j = jInput;
	array = new Array1D*[i];
	for (int count = 0; count < i; count++)
	{
		array[count] = new Array1D(j);
	}
}


void Array2D::PrintArray()
{
	int countI;
	int countJ;
	int printTemp = 0;
	for (countI = 0; countI < i; countI++)
	{
		cout << "raw" << countI << ": ";
		for (countJ = 0; countJ < j; countJ++)
		{
			array[countI]->Retrieve(countJ, printTemp);
			cout << printTemp << " ";
		}
		cout << endl;
	}
	return;
}


bool Array2D::Retrieve(int iInput, int jInput, int &x)
{
	if (iInput < 0 || iInput > i - 1 || jInput < 0 || jInput > j - 1)
	{
		cout << "Out of bound." << endl;
		return false;
	}
	array[iInput]->Retrieve(jInput, x);
	return true;
}


bool Array2D::Store(int iInput, int jInput, int x)
{
	if (iInput < 0 || iInput > i - 1 || jInput < 0 || jInput > j - 1)
	{
		cout << "Out of bound." << endl;
		return false;
	}
	array[iInput]->Store(jInput, x);
	return true;
}
