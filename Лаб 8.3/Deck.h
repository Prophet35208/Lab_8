#include "Card.h"
#include <iostream>
#pragma once
 ref class Deck // ������ ����.
{
private:
    array <Card^>^ deck; // ������ ����. 
    int number_of_cards;
public:
    Deck();
    void AddCard(int cost, int place,Bitmap^ picture);
    void DeleteUpperCard();
    void Reshafle();
    Card^ GetUpperCard();
    int GetNumberOf_Cards();
};

