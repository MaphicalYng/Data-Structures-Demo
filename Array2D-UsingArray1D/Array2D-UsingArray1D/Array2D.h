#pragma once
class Array2D
{
public:

	// Create a 2d array.
	Array2D(int iInput, int nInput);

	// Delete a 2d array.
	~Array2D();

	// Get the value of array.
	bool Retrieve(int iInput, int jInput, int &x);

	// Change the value of array.
	bool Store(int iInput, int jInput, int xInput);

	// Print the array.
	void Print();

private:

	// The 1d array that 2d array used.
	int* array;

	// The capacity that array have in one line.
	int n;

	// The line number that the array has.
	int i;
};

