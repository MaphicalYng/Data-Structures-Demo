#include <iostream>
#include "Stack.h"
using namespace std;

int main(void)
{
	// Stack test
	int stackLength = 0;
	cout << "请输入堆栈的长度：";
	cin >> stackLength;

	// Create a stack
	Stack *stack = new Stack(stackLength);

	// Test its functions
	
	// Add a top element
	int valuePush = 0;
	char chPush;
	while (1)
	{
		cout << "请输入插入的元素（以“#”结束）： ";
		cin >> valuePush;
		stack->Push(valuePush);
		cout << "是否继续（y继续）： ";
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
		cout << "输入“y”来查看并弹出顶部元素： ";
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

	cout << "输入字母退出...";
	cin >> stackLength;

	// End the program
	return 0;
}