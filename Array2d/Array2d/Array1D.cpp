#include "Array1D.h"
#include <iostream>
using namespace std;

Array1D::Array1D(int length)
{
	if (length < 0)
	{
		cout << "Wrong length, please delete this array." << endl;
		return;
	}
	size = length;
	array = new int[length];
}


void Array1D::PrintArray()
{
	int count;
	for (count = 0; count < size; count++)
	{
		cout << "Index" << count << ": " << array[count] << endl;
	}
	return;
}


bool Array1D::Retrieve(int i, int &x)
{
	if (i < 0 || i > size - 1)
	{
		cout << "Out of bound." << endl;
		return false;
	}
	x = array[i];
	return true;
}


bool Array1D::Store(int i, int x)
{
	if (i < 0 || i > size - 1)
	{
		cout << "Out of bound." << endl;
		return false;
	}
	array[i] = x;
	return true;
}
