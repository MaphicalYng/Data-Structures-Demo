#include "Polynomial.h"



Polynomial::Polynomial()
{
	this->length = 0;
	this->head = new Item(0, 0);
}


Polynomial::~Polynomial()
{
	Item *process = this->head;
}

Item *Polynomial::GetHead()
{
	return this->head;
}
