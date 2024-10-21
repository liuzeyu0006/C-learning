#include <iostream>
using namespace std;

//运算符重载：对已有的运算符重新进行定义，赋予其另一种功能，以适应不同的数据类型
//对于内置的数据类型的表达式的运算符是不可能改变的
//不要滥用运算符重载

//加号运算符重载
//class Person
//{
//public:
//
//	////1、成员函数重载+号
//	//Person operator+(Person& p)
//	//{
//	//	Person temp;
//	//	temp.m_A = this->m_A + p.m_A;
//	//	temp.m_B = this->m_B + p.m_B;
//	//	return temp;
//	//}
//
//	int m_A;
//	int m_B;
//};
////2、全局函数重载+号
//Person operator+(Person& p1,Person&p2)
//	{
//		Person temp;
//		temp.m_A = p1.m_A + p2.m_A;
//		temp.m_B = p1.m_B + p2.m_B;
//		return temp;
//	}
////3、函数重载的版本
//Person operator+(Person& p1, int num)
//{
//	Person temp;
//	temp.m_A = p1.m_A + num;
//	temp.m_B = p1.m_B + num;
//	return temp;
//}
//
//void test01()
//{
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 10;
//
//	Person p2;
//	p2.m_A = 10;
//	p2.m_B = 10;
//
//	//成员函数重载本质调用
//	// Person p3=p1.operator+(p2);
//	//全局函数重载本质调用
//	// Person p3=operator+(p1,p2);
//	//可以简化为以下形式
//	Person p3 = p1 + p2;
//
//	//运算符重载 也可以发生函数重载
//	Person p4 = p1 + 100;//Person + int
//
//
//	cout << "p3.m_A= " << p3.m_A << endl;
//	cout << "p3.m_B= " << p3.m_B << endl;
//
//
//	cout << "p4.m_A= " << p4.m_A << endl;
//	cout << "p4.m_B= " << p4.m_B << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}




//左移运算符重载
//可以输出自定义数据类型,一般搭配友元使用
//class Person
//{
//public:
//	Person(int a, int b) 
//	{
//		m_A = a;
//		m_B = b;
//	}
//	friend ostream& operator<<(ostream& cout, Person& p);
//private:
//	//利用成员函数重载左移运算符
//	//一般不会利用成员函数重载<<运算符，因为无法实现cout在左侧
//	/*void operator<<(Person &p)
//	{
//
//	}*/
//
//
//	int m_A;
//	int m_B;
//};
////只能利用全局函数来重载左移运算符
//ostream& operator<<(ostream &cout, Person &p)//本质是  operator<<(cout,p)  简化cout<<p
//{
//	cout << "m_A=" << p.m_A << "  m_B= " << p.m_B;
//	return cout;
//}
//void test01()
//{
//	Person p(10,10 );
//	//p.m_A = 10;
//	//p.m_B = 10;
//	//cout << "p.m_A= " << p.m_A << endl;
//
//	cout << p << endl;
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}




//递增运算符重载
//通过重载递增运算符，实现自己的整型数据
//前置递增返回引用，后置递增返回值

//自定义的整型
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//	//重载前置++运算符  返回引用的目的是为了一直对一个数据进行引用操作
//	MyInteger& operator++()
//	{
//		m_Num++;
//		return *this;
//	}
//	//重载后置++运算符
//	MyInteger operator++(int)//这个int表示占位参数，可以用来区分前置和后置递增，只有int好使
//	{
//		//先 记录当时结果
//		MyInteger temp = *this;
//		//后 递增
//		m_Num++;
//		//最后将记录结果做返回
//		return temp;
//	}
//
//private:
//	int m_Num;
//};
////重载左移运算符
//ostream& operator<<(ostream& cout, MyInteger myint)
//{
//	cout << myint.m_Num;
//	return cout;
//}
////前置递增
//void test01()
//{
//	MyInteger myint;
//	cout << ++myint << endl;
//
//}
////后置递增
//void test02()
//{
//	MyInteger myint;
//	cout << myint++ << endl;//先输出表达式为0
//	cout << myint<< endl;//再递增输出1
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}



//赋值运算符重载
//C++编译器至少给一个类添加4个函数
// 1、默认构造函数（无参，函数体为空）
// 2、默认析构函数（无参，函数体为空）
// 3、默认拷贝构造函数，对属性进行拷贝
// 4、赋值运算符operator=,堆属性进行值拷贝
// 
//如果类中有属性指向堆区，做赋值操作时也会出现深浅拷贝的问题


//class Person
//{
//public:
//	Person(int age)
//	{
//		m_Age = new int(age);
//	}
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//
//	//重载  赋值运算符
//	Person& operator=(Person& p)
//	{
//		//编译器是提供浅拷贝
//		//m_Age=p.m_Age;
//
//
//		//应该先判断是否有属性在堆区，如果有先释放干净，然后再进行深拷贝
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		//深拷贝
//		m_Age = new int(*p.m_Age);
//
//		//返回对象本身,这样才能有p3=p2=p1这样的操作
//		return *this;
//
//	}
//	int* m_Age;
//};
//void test01()
//{
//	Person p1(18);
//	Person p2(20);
//
//	p2 = p1;//赋值操作,浅拷贝，会导致堆区内存重复释放，程序崩溃。采用深拷贝
//	cout << "p1的年龄为 " << *p1.m_Age << endl;
//	cout << "p2的年龄为 " << *p2.m_Age << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//关系运算符重载
//作用：重载关系运算符，可以让两个自定义类型对象进行对比操作
class Person
{
public:
	Person(string name,int age)
	{
		m_Name = name;
		m_Age = age;
	}

	//重载 == 号
	bool operator==(Person &p)
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{
			return true;
		}
		return false;
	}

	bool operator!=(Person& p)
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{
			return false;
		}
		return true;
	}
	string m_Name;
	int m_Age;

};
void test01()
{
	Person p1("Tom",18);
	Person p2("Tom",19);

	if (p1 == p2)
	{
		cout << "p1和p2是相等的"<< endl;
	}
	else
	{
		cout << "p1和p2是不相等的" << endl;
	}

	if (p1 != p2)
	{
		cout << "p1和p2是不相等的" << endl;
	}
	else
	{
		cout << "p1和p2是相等的" << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}