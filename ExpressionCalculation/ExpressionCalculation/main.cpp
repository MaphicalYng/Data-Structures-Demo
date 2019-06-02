#include <iostream>
#include "PostfixExpression.h"
using namespace std;

int main(void)
{
	char pause;
	PostfixExpression a(100);
	a.Run();
	cin >> pause;
	return 0;
}