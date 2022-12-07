#include "Card.h"
#include <iostream>
#pragma once
 ref class Deck // Колода карт.
{
private:
    array <Card^>^ deck;; // Массив карт. 
public:
    Deck();
    void AddCard(int cost, int place);
    void DeleteUpperCard(int place);
    void Reshafle();
    int i = rand();
};

