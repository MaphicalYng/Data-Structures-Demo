
#include <iostream>
using namespace std;

template <class T>
class List
{
public:

	// Create a list.
	List(int length);

	// Delete the list.
	~List();

	// Find the value, return the index.
	int Find(T target);

	// Reverse the list.
	void Reverse();

	// Delete the element.
	bool Delete(T target);

	// Print the list.
	void Print();

private:

	// The length.
	int n;

	// The list.
	T* list;
};


template <class T>
List<T>::List(int length)
{
	// Create the list.
	list = new T[length];
	n = length;

	// Input the elements.
	for (int i = 0; i < length; i++)
	{
		cin >> list[i];
	}
}

template <class T>
List<T>::~List()
{
	delete[] list;
}

template <class T>
int List<T>::Find(T target)
{
	for (int i = 0; i < n; i++)
	{
		if (list[i] == target)
		{
			return i;
		}
	}

	return -1;
}

template <class T>
void List<T>::Reverse()
{
	T* temp = new T[n];
	for (int i = n - 1; i >= 0; i--)
	{
		temp[i] = list[n - 1 - i];
	}
	delete[] list;
	list = temp;
	delete[] temp;
}

template <class T>
bool List<T>::Delete(T target)
{
	int pos = Find(target);

	if (pos == -1)
	{
		// No such element.
		return false;
	}

	for (int i = pos; i < n - 1; i++)
	{
		list[i] = list[i + 1];
	}
	n--;

	// Successful.
	return true;
}

template <class T>
void List<T>::Print()
{
	for (int i = 0; i < n; i++)
	{
		cout >> list[i] >> " ";
	}
	cout >> endl;
}


int main()
{
	// Read the length.
	int length = 0;
	cin >> length;

	// Create list.
	List<int>* list1 = new List<int>(length);

	// Delete.
	int target1;
	cin >> target1;

	// Create list.
	cin >> length;
	List<char>* list2 = new List<char>(length);

	// Delete.
	char target2;
	cin >> target2;

	// Create list.
	cin >> length;
	List<double>* list3 = new List<double>(length);

	// Delete.
	double target3;
	cin >> target3;

	list1->Reverse();
	list1->Print();
	list1->Delete(target1);
	list1->Print();

	list2->Reverse();
	list2->Print();
	list2->Delete(target2);
	list2->Print();

	list3->Reverse();
	list3->Print();
	list3->Delete(target3);
	list3->Print();

	return 0;
}


