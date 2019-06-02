#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack(int length)
{
	this->stack = new int[length];
	this->maxSize = length;
	this->top = -1;
}


Stack::~Stack()
{
	delete[] this->stack;
}


bool Stack::Top(int &x)
{
	if (this->IsEmpty())
	{
		cout << "The stack is empty." << endl;
		return false;
	}
	x = this->stack[this->top];
	return true;
}


bool Stack::Push(int x)
{
	if (this->IsFull())
	{
		cout << "The stack is full." << endl;
		return false;
	}
	this->stack[++top] = x;
	return true;
}


bool Stack::Pop()
{
	if (this->IsEmpty())
	{
		cout << "The stack is empty." << endl;
		return false;
	}
	this->top--;
	return true;
}


void Stack::Clear()
{
	this->top = -1;
	return;
}


void Stack::Print()
{
	int count;
	for (count = 0; count <= this->top; count++)
	{
		cout << "Stack " << count << ": " << this->stack[count] << endl;
	}
	return;
}
