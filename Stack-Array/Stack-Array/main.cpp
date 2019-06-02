#include <iostream>
#include "Stack.h"
using namespace std;

int main(void)
{
	// Stack test
	int stackLength = 0;
	cout << "�������ջ�ĳ��ȣ�";
	cin >> stackLength;

	// Create a stack
	Stack *stack = new Stack(stackLength);

	// Test its functions
	
	// Add a top element
	int valuePush = 0;
	char chPush;
	while (1)
	{
		cout << "����������Ԫ�أ��ԡ�#���������� ";
		cin >> valuePush;
		stack->Push(valuePush);
		cout << "�Ƿ������y�������� ";
		cin >> chPush;
		if (chPush != 'y')
		{
			break;
		}
	}

	// Print the stack
	stack->Print();

	// Pop and visit value
	int valuePop = 0;
	char answerPop;
	while (1)
	{
		cout << "���롰y�����鿴����������Ԫ�أ� ";
		cin >> answerPop;
		if (answerPop != 'y')
		{
			break;
		}
		stack->Top(valuePop);
		stack->Pop();
		cout << valuePop << endl;
	}

	// Print th stack
	stack->Print();

	cout << "������ĸ�˳�...";
	cin >> stackLength;

	// End the program
	return 0;
}