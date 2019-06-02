#pragma once
#include <iostream>
class Item
{
public:
	Item(int coef, int index);
	Item(int coef, int index, Item *link);
	~Item();
	Item *InsertAfter(int coef, int index);
private:
	int coef;
	int index;
	Item *link;
};

