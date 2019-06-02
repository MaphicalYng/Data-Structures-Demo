#pragma once
class Queue
{
public:

	// Create a queue
	Queue(int length);

	// Delete the queue
	~Queue();

	// If it's empty
	bool IsEmpty()
	{
		return this->front == this->rear;
	}

	// If it's full
	bool IsFull()
	{
		return (this->rear + 1) % maxSize == this->front;
	}

	// Return the first element
	bool Front(int &x);
	
	// Insert a element at tail
	bool EnQueue(int x);

	// Delete head element
	bool DeQueue();

	// Clear the queue
	void Clear();

	// Print the queue
	void Print();

private:

	// Store front int
	int front;

	// Store rear int
	int rear;

	// Store the max size
	int maxSize;

	// Store the queue
	int *queue;
};

