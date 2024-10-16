//分开编写,在.h中只要函数的声明，不要函数的实现,只留下成员函数的声明和成员属性即可
//         在.cpp中，要包含.h文件，只保留函数的实现，且要加入Circle::/Point::说明是哪个成员函数的
#include <iostream>
using namespace std;
#include "circle.h"
#include "point.h"

//判断点和圆之间的关系
void isInCircle(Circle& c, Point& p)
{
	//两点之间距离平方
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//半径的平方
	int rDistance = c.getR() * c.getR();
	//判断关系
	if (distance == rDistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
}
int main()
{
	//创建一个圆
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	//创建一个点
	Point p;
	p.setX(10);
	p.setY(10);

	//判断关系
	isInCircle(c, p);

	system("pause");
	return 0;
}