#include "Deck.h"

Deck::Deck()
{
    this->deck = gcnew array<Card^>(10);
}

void Deck::AddCard(int cost, int place)
{
    deck[place] = gcnew Card(cost);
}

void Deck::DeleteUpperCard(int place)
{
    deck[place] = nullptr;
}

void Deck::Reshafle()
{

    Card^ buf;
    int rand_value;
    for (size_t i = 0; i < 9; i++)
    {
        srand(time(0));
        rand_value = rand() % 10;
        buf = this->deck[rand_value];
        this->deck[rand_value] = this->deck[i];
        this->deck[i] = buf;
    }
}

