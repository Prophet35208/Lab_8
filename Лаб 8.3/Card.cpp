#include "Card.h"

Card::Card(int cost)
{
	this->cost= cost;
}

Card::Card()
{
	this->cost = 1;
}

Card::Card(int cost, Bitmap^ picture)
{
	this->cost = cost;
	this->picture = picture;
}

int Card::Get_Cost()
{
	return this->cost;
}

void Card::Set_Cost(int cost)
{
	this->cost = cost;
}
