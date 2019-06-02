#include "Item.h"
#include <iostream>


Item::Item(int value, Item *link)
{
	this->value = value;
	this->link = link;
}

Item::~Item()
{
}

int Item::GetValue()
{
	return this->value;
}

Item *Item::GetLink()
{
	return this->link;
}

void Item::Update(int value, Item *link)
{
	this->value = value;
	this->link = link;
}

Item *Item::InsertAfter(int value)
{
	this->link = new Item(value, this->link);
	return this->link;
}
