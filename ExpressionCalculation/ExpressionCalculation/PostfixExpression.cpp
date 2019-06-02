#include "PostfixExpression.h"
#include <iostream>
#include <math.h>
using namespace std;

PostfixExpression::PostfixExpression(int stackSize)
{
	stack = new Stack(stackSize);
}


PostfixExpression::~PostfixExpression()
{
	delete stack;
}


void PostfixExpression::Run()
{
	char string[100];
	cout << "Please input a postfix expression(end with '#'):" << endl;
	cin >> string;
	int count;
	for (count = 0; string[count] != '#'; count++)
	{
		switch (string[count])
		{
		case '+':
		case '-':
		case '*':
		case '/':
		case '^':
			DoOperator(string[count]);
			break;
		default:
			DoNumber(string[count]);
			break;
		}
	}
	if (stack->IsEmpty())
	{
		cout << "No result." << endl;
		return;
	}
	double result = 0.0;
	stack->Top(result);
	cout << "The result is " << result << endl;
	return;
}


bool PostfixExpression::GetNumbers(double &a, double &b)
{
	if (!stack->Top(b))
	{
		return false;
	}
	stack->Pop();
	if (!stack->Top(a))
	{
		return false;
	}
	stack->Pop();
	return true;
}


void PostfixExpression::DoOperator(char op)
{
	double a = 0.0, b = 0.0, result = 0.0;
	if (!GetNumbers(a, b))
	{
		cout << "Something error." << endl;
		exit(1);
	}
	switch (op)
	{
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
		break;
	case '*':
		result = a * b;
		break;
	case '/':
		if (fabs(b) < 1e-6)
		{
			cout << "Cannot divide by 0." << endl;
			exit(1);
		}
		result = a / b;
		break;
	case '^':
		result = pow(a, b);
	}
	stack->Push(result);
	return;
}


void PostfixExpression::DoNumber(char nu)
{
	double a = (int)nu - 48;
	stack->Push(a);
	return;
}
