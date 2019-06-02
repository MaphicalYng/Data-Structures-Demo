#pragma once
#include <iostream>
#include "Item.h"
class Polynomial
{
public:
	Polynomial();
	~Polynomial();
	Item *GetHead();
private:
	int length;
	Item *head;
};

