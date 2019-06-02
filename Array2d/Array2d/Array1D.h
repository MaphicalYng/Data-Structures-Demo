#pragma once
class Array1D
{
public:

	// Create a size-length 1 dimension array.
	Array1D(int length);

	// Delete the array.
	~Array1D() { delete[] array; }

	// Print the array.
	void PrintArray();

	// Get the value.
	bool Retrieve(int i, int &x);

	// Store the value with the specific index.
	bool Store(int i, int x);

private:

	// Store the array pointer.
	int *array;

	// Store the size.
	int size;
};

