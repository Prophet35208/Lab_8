#include "Card.h"
#include <iostream>
#pragma once
 ref class Deck // ������ ����.
{
private:
    array <Card^>^ deck;; // ������ ����. 
public:
    Deck();
    void AddCard(int cost, int place);
    void DeleteUpperCard(int place);
    void Reshafle();
    int i = rand();
};

