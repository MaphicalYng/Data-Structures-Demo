#include <iostream>
#include "Queue.h"
using namespace std;

int main(void)
{
	// Create queue
	int maxSize = 0;
	cout << "��������еĳ��ȣ� ";
	cin >> maxSize;
	Queue queue(maxSize);

	// Test enter
	int input = 0;
	char ifend = 'y';
	while (ifend == 'y')
	{
		cout << "�����������е�Ԫ��ֵ�� ";
		cin >> input;
		queue.EnQueue(input);
		cout << "�Ƿ����(y/n)�� ";
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
		cout << "�Ƿ������ʾ��ͷ��ɾ��(y/n)�� ";
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