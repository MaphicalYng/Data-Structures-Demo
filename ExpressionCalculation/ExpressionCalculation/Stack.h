#pragma once
class Stack
{
public:

	// Create a new stack
	Stack(int length);

	// Delete the stack
	~Stack();

	// If it's empty
	bool IsEmpty()
	{
		return this->top == -1;
	}

	// If it's full
	bool IsFull()
	{
		return this->top == maxSize - 1;
	}

	// Put top element into x
	bool Top(double &x);

	// Put a new element at top
	bool Push(double x);

	// Delete a top element
	bool Pop();

	// Clear the stack
	void Clear();

	// Print the stack
	void Print();

private:

	// Store the index the top at
	int top;

	// Store the amount of stack max
	int maxSize;

	// Array used as stack
	double *stack;
};

