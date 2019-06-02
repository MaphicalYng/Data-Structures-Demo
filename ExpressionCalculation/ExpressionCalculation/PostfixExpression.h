#pragma once
#include "Stack.h"
class PostfixExpression
{
public:

	// Create a expression runner
	PostfixExpression(int stackSize);

	// Delete the stack
	~PostfixExpression();

	// Main runner
	void Run();

private:

	// Store expression values
	Stack *stack;

	// Get two top elements for computing
	bool GetNumbers(double &a, double &b);

	// Process operator
	void DoOperator(char op);

	// Process number
	void DoNumber(char nu);
};

