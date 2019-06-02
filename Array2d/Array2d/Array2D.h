#pragma once
#include "Array1D.h"
class Array2D
{
public:

	// Create a 2 dimensions array using the data.
	Array2D(int iInput, int jInput);

	// Delete the array.
	~Array2D() { delete[] array; }

	// Print the array.
	void PrintArray();

	// Get the value.
	bool Retrieve(int iInput, int jInput, int &x);

	// Store the value using specific index.
	bool Store(int iInput, int jInput, int x);

private:

	// The pointer storing the array.
	Array1D **array;

	// Store the i and j.
	int i;
	int j;
};

