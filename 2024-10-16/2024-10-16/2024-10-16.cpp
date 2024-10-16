//#include <iostream>
//using namespace std;
//#include <string>

//类和对象
//C++面向对象的三大特征：封装、继承、多态

//封装的意义
//将属性和行为作为一个整体，表现生活中的事务
// 将属性和行为加以权限控制
// 
// 语法：class 类名{ 访问权限：属性/行为}
//
//const double PI = 3.14;
//class Circle
//{
//	//访问权限
//	//公共权限
//public:
//	//属性  一些变量
//	//半径
//	int m_r;
//
//	//行为  用函数来获得
//	//获取圆的周长  一般是写一个函数
//	double calculateZC()
//	{
//		return 2 * PI * m_r;
//	}
//};
//int main()
//{
//	//通过圆类 创建具体的圆（对象）
//	//实例化（通过一个类 创建一个对象的过程）
//	Circle c1;
//	//给圆对象 的属性进行赋值
//	c1.m_r = 10;
//	//计算周长
//	cout << "圆的周长为：" << c1.calculateZC() << endl;
//	system("pause");
//	return 0;
//}



//class Student
//{
//public:
//
//	//类中的属性和行为，统一称为 成员
//	//属性  成员属性 成员变量
//	//行为  成员函数 成员方法
//
//	//属性
//	string m_Name;
//	int m_Id;
//	//行为
//	void ShowInfor()
//	{
//		cout << " 姓名： " << m_Name << " 学号： " << m_Id << endl;
//	}
//	//给姓名赋值
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	//给学号赋值
//	void setId(int id)
//	{
//		m_Id = id;
//	}
//};
//int main()
//{
//	Student s1;
//	cout << " 请输入学生姓名： " << endl;
//	cin >> s1.m_Name;
//
//	cout << " 请输入学生学号： " << endl;
//	cin >> s1.m_Id;
//	s1.ShowInfor();
//
//	Student s2;
//	s2.setName("张三");
//	s2.setId(12);
//	s2.ShowInfor();
//
//	system("pause");
//	return 0;
//}



//类在设计时，可以把属性和行为放在不同权限下加以控制
//访问权限三种：
//public    公共权限  类内可以访问  类外可以访问
//protected 保护权限  类内可以访问  类外不可以访问  儿子可以访问父亲中的保护内容
//private   私有权限  类内可以访问  类外不可以访问  儿子不可以访问父亲中的保护内容

//class Person 
//{
//public:
//	string m_Name;
//protected:
//	string m_Car;
//private:
//	int m_Password;
//public:
//	void func()
//	{
//		//类内可以访问
//		m_Name = "张三";
//		m_Car = "拖拉机";
//		m_Password = 123456;
//	}
//};
//int main()
//{
//	Person p1;
//	p1.m_Name = "李四";
//	//p1.m_Car = "奔驰";//保护权限内容在类外不可访问
//	//p1.m_Password = 123;//私有权限内容在类外不可访问
//	system("pause");
//	return 0;
//}



//struct和class的区别

//唯一的区别就是访问权限不同
//struct默认权限是公共
//class默认权限为私有

//class C1
//{
//	int m_A;//默认权限是私有
//};
//struct C2
//{
//	int m_A;//默认权限是公共
//};
//int main()
//{
//	C1 c1;
//	c1.m_A = 100;//默认权限是私有不可访问
//
//	C2 c2;
//	c2.m_A = 100;//默认权限是公共 可访问
//
//	system("pause");
//	return 0;
//}




//成员属性设置为私有
//优点1：将所有成员属性设置为私有，可以自己控制读写权限
//优点2：对于写权限，可以检测到数据的有效性

//class Person
//{
//public:
//	//设置姓名
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	//获取姓名
//	string getName()
//	{
//		return m_Name;
//	}
//	//获取年龄
//	int getAge()
//	{
//		return m_Age;
//	}
//	//设置年龄
//	void setAge(int age)
//	{
//		if (age < 0 || age>150)
//		{
//			cout << "输入有误，赋值失败" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//	//设置偶像
//	void setIdol(string idol)
//	{
//		m_Idol=idol;
//	}
//private:
//	string m_Name;//姓名 设置可读可写
//	int m_Age=18;//年龄  设置只读 （检测数据有效性，设置也可以写，范围是0~150）
//	string m_Idol;// 偶像  设置只写
//};
//int main()
//{
//	Person p;
//	//姓名设置
//	p.setName("张三");
//	//获取姓名
//	cout << "姓名：" << p.getName() << endl;
//
//	//年龄设置
//	//p.setAge(20);//没有 这个函数
//	//p.m_Age = 20;//私有不可访问
//	// 
//	p.setAge(160);
//	//获取姓名
//	cout << "年龄为：" << p.getAge() << endl;//只读不能写
//
//	//偶像的设置
//	p.setIdol("李四");//只写，写入偶像
//	//cout << "偶像为：" << p.m_Idol<< endl;//只写不能读
//
//	system("pause");
//	return 0;
//}



//封装练习案例1：设计立方体类
//设计立方体类（Cube）
// 求出立方体的面积和体积
// 分别用全局函数和成员函数判断两个立方体是否相等
//
//class Cube
//{
//public:
//	//设置长
//	void setL(int l)
//	{
//		m_L = l;
//	}
//	//获取长
//	int getL()
//	{
//		return m_L;
//	}
//	//设置宽
//	void setW(int w)
//	{
//		m_W = w;
//	}
//	//获取宽
//	int getW()
//	{
//		return m_W;
//	}
//	//设置高
//	void setH(int h)
//	{
//		m_H = h;
//	}
//	//获取高
//	int getH()
//	{
//		return m_H;
//	}
//	//获取立方体的面积
//	int calculateS()
//	{
//		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
//	}
//	//获取立方体的体积
//	int calculateV()
//	{
//		return m_L * m_W * m_H;
//	}
//
//	//利用成员函数来判断两个立方体是否相等
//	bool isSameByClass(Cube &c)  //类内可以调用私有，直接写m_L就行，传一个进来就行，与类内的进行对比
//	{
//		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
//		{
//			return true;
//		}
//		return false;
//	}
//private:
//	int m_L;//长
//	int m_W;//宽
//	int m_H;//高
//};
//
////利用全局函数来判断两个立方体是否相等
//bool isSame(Cube& c1, Cube c2)//用引用的方式传递，就用的原始数据，就不是值传递了
//{
//	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
//	{
//		return true;
//	}
//	return false;
//}
//int main()
//{
//	//创建第一个立方体对象
//	Cube c1;
//	c1.setL(10);
//	c1.setW(10);
//	c1.setH(10);
//	cout << "c1的面积为：" << c1.calculateS() << endl;
//	cout << "c1的体积为：" << c1.calculateV()<< endl;
//
//	//创建第二个立方体对象
//	Cube c2;
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(10);
//	cout << "c2的面积为：" << c2.calculateS() << endl;
//	cout << "c2的体积为：" << c2.calculateV() << endl;
//
//	//利用全局函数进行判断，需要传入两个
//	bool ret = isSame(c1, c2);
//	if (ret)
//	{
//		cout << "c1和c2是相等的" << endl;
//	}
//	else
//	{
//		cout << "c1和c2是不相等的" << endl;
//	}
//
//	//利用成员函数进行判断,传一个就行
//	ret = c1.isSameByClass(c2);
//	if (ret)
//	{
//		cout << "c1和c2是相等的" << endl;
//	}
//	else
//	{
//		cout << "c1和c2是不相等的" << endl;
//	}
//
//	system("pause");
//	return 0;
//}



//封装案例2：点和圆的关系
//设计一个圆形类（Circle），和一个点类（Point），计算点和圆的关系。
//点类
class Point
{
public:
	//设置x
	void setX(int x)
	{
		m_X = x;
	}
	//设置y
	void setY(int y)
	{
		m_Y = y;
	}
	//获取x
	int getX()
	{
		return m_X;
	}
	//获取y
	int getY()
	{
		return m_Y;
	}
private:
	int m_X;
	int m_Y;
};
//圆类
class Circle
{
public:
	//设置半径
	void setR(int r)
	{
		m_R = r;
	}
	//获取半径
	int getR()
	{
		return m_R;
	}
	//设置圆心
	void setCenter(Point center)
	{
		m_Center = center;
	}
	//获取圆心
	Point getCenter()
	{
		return m_Center;
	}
private:
	int m_R;//半径

	Point m_Center;//圆心,在类中，可以让另一个类作为本类中的成员
};
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



