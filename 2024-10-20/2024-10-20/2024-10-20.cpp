#include <iostream>
using namespace std;
//this 指针
//this指针指向被调用的成员变量所属的对象
// this指针是隐含每一个非静态成员函数内的一种指针
// this指针不需要定义，直接使用即可
// 
// 用途：
// 当形参和成员变量同名时，可以用this指针区别
// 在类的非静态成员函数中返回对象本身，可以只用return*this
// 
//class Person
//{
//public:
//	Person(int age)
//	{
//		//this指针指向被调用的成员变量所属的对象
//		this->age = age;
//	}
//
//	Person& PersonAddAge(Person& p)
//	{
//		this->age += p.age;
//		//this指针指向p2的指针，而*this指向的就是p2这个对象本体
//		return *this;//返回类型要写Person&
//	}
//	int age;//实际上并没有给这个age赋值，加上this指针。
//	//修改命名
//	//int m_Age;//命名规范
//};
//
//// 当形参和成员变量同名时，可以用this指针区别
//void test01()
//{
//	Person p1(18);
//	cout << "p1的年龄是：" << p1.age << endl;
//}
//
//// 在类的非静态成员函数中返回对象本身，可以只用return*this
//void test02()
//{
//	Person p1(10);
//
//	Person p2(10);
//
//	//链式编程思想，可以一直往后加
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);//每一次p2.PersonAddAge(p1)返回的都是p2
//	cout << "p2的年龄是：" << p2.age << endl;
//
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}



//空指针访问成员函数
//C++中空指针也是可以调用成员函数的，但是要注意有没有用到this指针
//用到this指针，需要加以判断保证代码的健壮性
//class Person
//{
//public:
//	void showClassName()
//	{
//		cout << "this is Person class" << endl;
//	}
//	void showPersonAge()
//	{
//		//报错原因是因为传入的指针是为NULL
//		//修正代码,提高代码的健壮性
//		if (this == NULL)
//		{
//			return;
//		}
//		cout << "age=" <<this->m_Age << endl;
//	}
//	int m_Age;
//};
//void test01()
//{
//	Person* p = NULL;
//
//	p->showClassName();
//
//	p->showPersonAge();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//const修饰成员函数
//
// 常函数：
// 成员函数后加const后我们称这个函数为常函数
// 常函数内不可以修饰成员属性
// 成员属性的声明时加关键字mutable后，在常函数中依然可以修改

// 常对象：
// 声明对象前加const称为该对象为常对象
// 常对象只能调用常函数


// 常函数
//class Person
//{
//public:
//	//this指针的本质  是指针常量  指针的指向是不可以修改的
//	//相当于 Person* const this
//	//在成员函数后面加入const相当于const Person* const this，实际上是修饰的this，让指针指向的值也不可以修改
//
//	void showPerson()const
//	{
//		//this->m_A = 100;
//		this->m_B = 100;
//		//this->NULL;//this指针不可以修改指针的指向
//	}
//	void func()
//	{
//
//	}
//
//	int m_A;
//	mutable int m_B;//特殊变量，即使在常函数中，也可以修改这个值，加关键mutable
//};
//void test01()
//{
//	Person p;
//
//	p.showPerson();
//}
//
////常对象
//void test02()
//{
//	const Person p;//在对象前加const，变为常对象
//	//p.m_A = 100;
//	p.m_B = 100;//m_B是特殊值，在常对象下也可以修改
//
//	//常对象只能调用常函数
//	p.showPerson()
//	//p.func();//常对象 不可以调用普通成员函数，因为普通成员函数可以修改属性，而常对象不允许修改属性
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}




//友元
//友元的目的就是让一个函数或者类，访问另一个类中私有成员
//友元关键词：friend
//友元的三种实现：
//				全局函数做友元
//				类做友元
//				成员函数做友元


//全局函数做友元
//建筑物类
//class Building
//{
//	//函数的声明。goodGay全局函数是Building好朋友，可以访问Building种私有的成员
//	friend void goodGay(Building* building);
//public:
//	Building()
//	{
//		m_SittingRoom = "客厅";
//		m_Bedroom = "卧室";
//	}
//public:
//	string m_SittingRoom;//客厅
//private:
//	string m_Bedroom;//卧室
//};
//
////全局函数
//void goodGay(Building *building)
//{
//	cout << "好基友全局函数 正在访问：" << building->m_SittingRoom << endl;//公共属性，域外也可以访问
//
//	cout << "好基友全局函数 正在访问：" << building->m_Bedroom << endl;
//}
//
//void test01()
//{
//	Building buliding;
//	goodGay(&buliding);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//类做友元
//class Building;
//class goodGay
//{
//public:
//
//	goodGay();
//
//	void visit();//参观函数，访问Building中的属性
//
//	Building* building;
//};
//
//class Building
//{
//	//goodGay是本类的好朋友，可以访问本类中私有成员
//	friend class goodGay;
//public:
//	Building();
//public:
//	string m_SittingRoom;//客厅
//private:
//	string m_Bedroom;//卧室
//};
//
////类外写成员函数
//Building::Building()
//{
//		m_SittingRoom = "客厅";
//		m_Bedroom = "卧室";
//}
//goodGay::goodGay()
//{
//	//创建建筑物对象
//	building = new Building;
//}
//void goodGay::visit()
//{
//	cout << "好基友正在访问：" << building->m_SittingRoom << endl;
//
//	cout << "好基友正在访问：" << building->m_Bedroom << endl;
//}
//void test01()
//{
//	goodGay gg;
//	gg.visit();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//成员函数做友元
class Building;
class goodGay
{
public:

	goodGay();

	void visit();//让visit函数可以访问Building中的私有成员
	void visit2();//让visit2函数可以访问Building中的私有成员

	Building* building;
};

class Building
{
	friend void goodGay::visit();
public:
	Building();
public:
	string m_SittingRoom;//客厅
private:
	string m_Bedroom;//卧室
};

//类外写成员函数
Building::Building()
{
	m_SittingRoom = "客厅";
	m_Bedroom = "卧室";
}
goodGay::goodGay()
{
	//创建建筑物对象
	building = new Building;
}
void goodGay::visit()
{
	cout << "visit正在访问：" << building->m_SittingRoom << endl;

    cout << "visit正在访问：" << building->m_Bedroom<< endl;
}

void goodGay::visit2()
{
	cout << "visit2正在访问：" << building->m_SittingRoom << endl;

	//cout << "visit2正在访问：" << building->m_Bedroom << endl;
}
void test01()
{
	goodGay gg;
	gg.visit();
	gg.visit2();
}
int main()
{
	test01();
	system("pause");
	return 0;
}