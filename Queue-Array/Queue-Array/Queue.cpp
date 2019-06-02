#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue(int length):maxSize(length),front(0),rear(0)
{
	this->queue = new int[length];
}


Queue::~Queue()
{
	cout << "Destorying..." << endl;
	delete[] this->queue;
}


bool Queue::Front(int &x)
{
	if (IsEmpty())
	{
		cout << "The queue is empty." << endl;
		return false;
	}
	x = queue[(front + 1) % maxSize];
	return true;
}


bool Queue::EnQueue(int x)
{
	if (IsFull())
	{
		cout << "The queue is full." << endl;
		return false;
	}
	rear = (rear + 1) % maxSize;
	queue[rear] = x;
	return true;
}

bool Queue::DeQueue()
{
	if (IsEmpty())
	{
		cout << "The queue is empty." << endl;
		return false;
	}
	front = (front + 1) % maxSize;
	return true;
}


void Queue::Clear()
{
	front = 0;
	rear = 0;
	return;
}


void Queue::Print()
{
	int count;
	for (count = 0; count < maxSize; count++)
	{
		cout << "Queue " << count << "£º " << queue[count] << endl;
	}
	return;
}
