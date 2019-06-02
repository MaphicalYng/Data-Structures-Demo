#include <iostream>
#include "Queue.h"
using namespace std;

int main(void)
{
	// Create queue
	int maxSize = 0;
	cout << "请输入队列的长度： ";
	cin >> maxSize;
	Queue queue(maxSize);

	// Test enter
	int input = 0;
	char ifend = 'y';
	while (ifend == 'y')
	{
		cout << "请输入进入队列的元素值： ";
		cin >> input;
		queue.EnQueue(input);
		cout << "是否继续(y/n)： ";
		cin >> ifend;
	}

	// Print the queue
	queue.Print();

	// Test delete and front
	ifend = 'y';
	int query = 0;
	while (ifend == 'y')
	{
		queue.Front(query);
		queue.DeQueue();
		cout << "Front: " << query << endl;
		cout << "是否继续显示队头并删除(y/n)： ";
		cin >> ifend;
	}

	// Print the queue
	queue.Print();

	// Test clear
	queue.Clear();

	// If empty
	cout << "If empty: " << queue.IsEmpty() << endl;

	// Print the queue
	queue.Print();

	cout << "Enter a character to exit...";
	cin >> ifend;

	// End program
	return 0;
}