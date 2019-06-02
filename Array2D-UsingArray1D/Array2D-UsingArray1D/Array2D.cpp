#include "Array2D.h"
#include <iostream>
using namespace std;

Array2D::Array2D(int iInput, int nInput)
{
	array = new int[iInput*nInput];
	n = nInput;
	i = iInput;
}


Array2D::~Array2D()
{
	delete[] array;
}


bool Array2D::Retrieve(int iInput, int jInput, int &x)
{
	if (iInput < 0 || iInput > i - 1
		|| jInput < 0 || jInput > n - 1)
	{
		cout << "Out of bound." << endl;
		return false;
	}
	x = array[iInput*n + jInput];
	return true;
}


bool Array2D::Store(int iInput, int jInput, int xInput)
{
	if (iInput < 0 || iInput > i - 1
		|| jInput < 0 || jInput > n - 1)
	{
		cout << "Out of bound." << endl;
		return false;
	}
	array[iInput*n + jInput] = xInput;
	return true;
}


void Array2D::Print()
{
	int iCount = 0;
	int jCount = 0;
	for (iCount = 0; iCount < i; iCount++)
	{
		for (jCount = 0;jCount < n; jCount++)
		{
			cout << "\t" << array[iCount*n + jCount];
		}
		cout << endl;
	}
}
