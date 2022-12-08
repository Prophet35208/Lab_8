#include "Deck.h"
#include <ctime>
Deck::Deck()
{
    this->deck = gcnew array<Card^>(10);
    number_of_cards = 0;
}

void Deck::AddCard(int cost, int place, Bitmap^ picture)
{
    deck[place] = gcnew Card(cost, picture);
    number_of_cards++;
}

void Deck::DeleteUpperCard()
{
    number_of_cards--;
}

void Deck::Reshafle()
{
    Card^ buf;
    int rand_value;
    for (size_t j = 0; j < number_of_cards; j++)
    {
        srand(clock());
        rand_value = rand() % 10;
        buf = this->deck[rand_value];
        this->deck[rand_value] = this->deck[j];
        this->deck[j] = buf;
    }
}

Card^ Deck::GetUpperCard()
{
    Card^ card;
    card = this->deck[number_of_cards-1];
    number_of_cards--;
    return card;
}

