#include "Deck.h"
#include <random>
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
    if (number_of_cards != 0) {
        Card^ buf;
        int rand_value;
        for (size_t j = 0; j < number_of_cards; j++)
        {
            srand(time(0));
            rand_value = rand() % number_of_cards;
            buf = this->deck[rand_value];
            this->deck[rand_value] = this->deck[j];
            this->deck[j] = buf;
        }
    }
}

Card^ Deck::GetUpperCard()
{
    Card^ card;
    card = this->deck[number_of_cards-1];
    number_of_cards--;
    return card;
}

