#pragma once
using namespace System::Drawing;
 class Card // �����. 
{
protected:
	int cost;
public:
	Card(int cost);
	Card();
	virtual int Get_Cost(); // � ������� ������ ���������� ����������
	void Set_Cost(int cost);
};