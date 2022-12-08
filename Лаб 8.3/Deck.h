#include "Card.h"
#include <iostream>
#pragma once
 ref class Deck // Колода карт.
{
private:
    array <Card^>^ deck; // Массив карт. 
    int number_of_cards;
public:
    Deck();
    void AddCard(int cost, int place,Bitmap^ picture);
    void DeleteUpperCard();
    void Reshafle();
    Card^ GetUpperCard();
    int GetNumberOf_Cards();
};

