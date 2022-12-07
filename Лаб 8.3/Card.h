#pragma once
using namespace System::Drawing;
 ref class Card // Карта. 
{
protected:
	int cost;
public:
	Bitmap^ picture;
	Card(int cost);
	Card();
	Card(int cost, Bitmap^ picture);
	virtual int Get_Cost(); // В базовом классе возвращает стоимомсть
	void Set_Cost(int cost);
};