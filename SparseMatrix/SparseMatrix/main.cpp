#include <iostream>
#include "SparseMatrix.h"
using namespace std;
int main()
{
	// Create a matrix.
	cout << "Please input the col number: ";
	int colNum = 0;
	cin >> colNum;
	cout << "Please input the row number: ";
	int rowNum = 0;
	cin >> rowNum;

	SparseMatrix *matrix = new SparseMatrix(colNum, rowNum);

	// Make the order and print.
	matrix->Print(0, true);

	cin >> colNum;

	// End the program.
	return 0;
}