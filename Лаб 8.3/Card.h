#pragma once
using namespace System::Drawing;
 ref class Card // �����. 
{
protected:
	int cost;
public:
	Bitmap^ picture;
	Card(int cost);
	Card();
	Card(int cost, Bitmap^ picture);
	virtual int Get_Cost(); // � ������� ������ ���������� ����������
	void Set_Cost(int cost);
};