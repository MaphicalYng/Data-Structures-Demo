#include "Item.h"



Item::Item(int coef, int index)
{
	this->coef = coef;
	this->index = index;
	this->link = this;
}

Item::Item(int coef, int index, Item *link)
{
	this->coef = coef;
	this->index = index;
	this->link = link;
}


Item::~Item()
{
}

Item *Item::InsertAfter(int coef, int index)
{
	this->link = new Item(coef, index, this->link);
	return this->link;
}