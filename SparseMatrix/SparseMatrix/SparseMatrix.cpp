#include "SparseMatrix.h"
#include <iostream>
using namespace std;

SparseMatrix::SparseMatrix(int maxColSize, int maxRowSize)
{
	m = maxColSize;
	n = maxRowSize;
	int number = 0;
	cout << "Please input how many elements will store: ";
	cin >> number;
	nodeNum = number;
	matrix = new Node[number];
	int tempInput;
	int col = 0;
	int row = 0;
	for (int count = 0; count < number; count++)
	{
		cout << "The col number of element " << count << " : ";
		cin >> col;
		cout << "The row number of element " << count << " : ";
		cin >> row;
		cout << "The value of element " << count << " : ";
		cin >> tempInput;
		matrix[count].col = col;
		matrix[count].row = row;
		matrix[count].value = tempInput;
	}
	matrix = MakeOrder();
	cout << "Create successfully." << endl;
}

SparseMatrix::~SparseMatrix()
{
	delete[] matrix;
}

Node *SparseMatrix::MakeOrder()
{
	Node *newOrder = new Node[nodeNum];
	int process = 0;
	int currentNum = 0;
	Node temp;
	for (int colCount = 0; colCount < m; colCount++)
	{
		currentNum = 0;
		Node *current = new Node[n];
		// Get all nodes of one col number.
		for (int countNode = 0; countNode < nodeNum; countNode++)
		{
			if (matrix[countNode].col == colCount)
			{
				current[currentNum++] = matrix[countNode];
			}
		}
		// Sort the array new created.
		for (int countOrder = 0; countOrder < currentNum; countOrder++)
		{
			for (int countInOrder = 1; countInOrder < currentNum - countOrder; countInOrder++)
			{
				if (current[countInOrder - 1].row > current[countInOrder].row)
				{
					temp = current[countInOrder - 1];
					current[countInOrder - 1] = current[countInOrder];
					current[countInOrder] = temp;
				}
			}
		}
		// Copy the array into new order array.
		for (int countCopy = 0; countCopy < currentNum; countCopy++)
		{
			newOrder[process++] = current[countCopy];
		}
	}
	return newOrder;
}

bool SparseMatrix::Add(const SparseMatrix a, SparseMatrix &b)
{
	Node *matrixNew = new Node[nodeNum + a.nodeNum];
	int nodeNewNum = 0;
	if (m != a.m || n != a.n)
	{
		cout << "Matrix's col or row number error." << endl;
		return false;
	}
	for (int node = 0; node < nodeNum; node++)
	{
		for (int nodeA = 0; nodeA < a.nodeNum; nodeA++)
		{
			if (matrix[node].col == a.matrix[nodeA].col
				&& matrix[node].row == a.matrix[nodeA].row)
			{
				Node temp(matrix[node].col, matrix[node].row,
					matrix[node].value + a.matrix[nodeA].value);
				matrixNew[nodeNewNum++] = temp;
			}
		}
	}
}

bool SparseMatrix::Mul(const SparseMatrix a, SparseMatrix &b)
{
	return true;
}

void SparseMatrix::Transpose(SparseMatrix &b)
{
	int temp = 0;
	for (int countNode = 0; countNode < nodeNum; countNode++)
	{
		temp = matrix[countNode].col;
		matrix[countNode].col = matrix[countNode].row;
		matrix[countNode].row = temp;
	}
	matrix = MakeOrder();
}

void SparseMatrix::Print(int zero, bool tripe)
{
	int process = 0;
	for (int colNum = 0; colNum < m; colNum++)
	{
		for (int rowNum = 0; rowNum < n; rowNum++)
		{
			if (matrix[process].col == colNum && matrix[process].row == rowNum)
			{
				cout << " " << matrix[process++].value;
			}
			else
			{
				cout << " " << zero;
			}
		}
		cout << endl;
	}

	if (!tripe)
		return;

	for (int nodeCount = 0; nodeCount < nodeNum; nodeCount++)
	{
		cout << " (" << matrix[nodeCount].col << "," << matrix[nodeCount].row << "," << matrix[nodeCount].value << ") " << endl;
	}
}
