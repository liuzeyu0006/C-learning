#pragma once
#include <iostream>
using namespace std;

class Point
{
public:
	//����x
	void setX(int x);
	//����y
	void setY(int y);
	//��ȡx
	int getX();
	//��ȡy
	int getY();
private:
	int m_X;
	int m_Y;
};