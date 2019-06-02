#include "String.h"
#include <iostream>
using namespace std;


String::String(int length)
{
	String::n = length;
	string = new char[length];
}


String::~String()
{
	delete[] String::string;
}


int String::Length()
{
	return String::n;
}


void String::Clear()
{
	delete[] String::string;
	string = NULL;
}


void String::Assign(String target)
{
	delete[] String::string;
	String::string = target.string;
	String::n = target.n;
}


void String::Concat(String target)
{
	int total = String::n + target.n;
	char* temp = new char[total];
	
	for (int i = 0; i < String::n; i++)
	{
		temp[i] = String::string[i];
	}

	for (int j = String::n; j < total; j++)
	{
		temp[j] = target.string[j - String::n];
	}

	delete[] String::string;
	String::string = temp;
	String::n = total;
}


bool String::Insert(int i, String target)
{
	if (i < 0 || i > String::n - 1)
	{
		cout << "Out of bound." << endl;
		return false;
	}

	int total = String::n + target.n;
	char* temp = new char[total];

	int stringF = i;
	int stringM = target.n;
	int stringB = String::n - i;
	int process = 0;

	for (; process < stringF; process++)
	{
		temp[process] = String::string[process];
	}

	for (int count = 0; count < stringM; count++)
	{
		temp[process] = target.string[count];
		process++;
	}

	for (int count = 0; count < stringB; count++)
	{
		temp[process] = target.string[count];
		process++;
	}

	String::string = temp;
	delete[] temp;
	return true;
}


bool String::Delete(int i, int len)
{
	if (i < 0 || i > String::n - 1 || i + len - 1 > String::n - 1)
	{
		cout << "Out of bound." << endl;
		return false;
	}

	int delIndexBegin = i;
	int delIndexEnd = i + len;

	char* temp = new char[String::n - len];
	int process = 0;

	for (int count = 0; count < delIndexBegin; count++)
	{
		temp[process] = String::string[count];
		process++;
	}

	for (int count = delIndexEnd; count < String::n - len; count++)
	{
		temp[process] = String::string[count];
		process++;
	}

	String::string = temp;
	delete[] temp;
	return true;
}


String String::Substring(int i, int len)
{
	if (i < 0 || i > String::n - 1 || i + len - 1 > String::n - 1)
	{
		cout << "Out of bound." << endl;
		return false;
	}

	String temp(len);

}
