#pragma once
#include "Node.h"
class SparseMatrix
{
public:

	// Create a sparse matrix.
	SparseMatrix(int maxColSize, int maxRowSize);

	// Delete a sparse matrix.
	~SparseMatrix();

	// Add an other matrix, saved in b.
	bool Add(const SparseMatrix a, SparseMatrix &b);

	// Multiply an other matrix, saved in b.
	bool Mul(const SparseMatrix a, SparseMatrix &b);

	// Transpose this matrix, saved in b.
	void Transpose(SparseMatrix &b);

	// Print the matrix.
	void Print(int zero, bool tripe);

private:

	// Make the matrix the right order.
	Node *MakeOrder();

	// Store the matrix.
	Node *matrix;

	// How many not-zero elements.
	int nodeNum;

	// How many elements one col stored.
	int n;

	// How many cols.
	int m;
};

