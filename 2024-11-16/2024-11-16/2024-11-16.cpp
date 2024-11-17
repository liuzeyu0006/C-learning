//#include <iostream>
//using namespace std;
//#include <string>



//类模板与函数模板区别
//template<class NameType, class AgeType=int>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void showPerson()
//	{
//		cout << "name:" << this->m_Name << "  age:" << this->m_Age << endl;
//			
//	}
//	NameType m_Name;
//	AgeType m_Age;
//};
////1、类模板没有自动类型推导使用方式
//void test01()
//{
//	//Person p1("孙悟空", 100);//无法用自动类型推导
//	Person<string,int>p1("孙悟空", 100);
//
//	p1.showPerson();
//
//}
////2、类模板在模板参数列表中可以有默认参数   模板参数列表<>中的内容
//void test02()
//{
//	Person<string>p1("猪八戒", 100);
//	p1.showPerson();
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}



//类模板中成员函数创建时机

//类模板中成员函数和普通类中成员函数创建时机是有区别的 :
//普通类中的成员函数一开始就可以创建
//类模板中的成员函数在调用时才创建
//class Person1
//{
//public:
//	void showPerson1()
//	{
//		cout << "show person1" << endl;
//	}
//};
//class Person2
//{
//public:
//	void showPerson2()
//	{
//		cout << "show person2" << endl;
//	}
//};
//
//template<class T>
//class MyClass
//{
//public:
//	T obj;
//	//类模板中的成员函数  未被调用就不会被创建
//	void func1()
//	{
//		obj.showPerson1();
//	}
//	void func2()
//	{
//		obj.showPerson2();
//	}
//};
//
//void test01()
//{
//	MyClass<Person1> m;
//	m.func1();//能运行
//	//m.func2();//不能运行
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}




//类模板对象做函数参数

//类模板实例化出的对象，向函数传参的方式
//一共有三种传入方式 

//1.指定传入的类型
//- 直接显示对象的数据类型
//2.参数模板化
//- 将对象中的参数变为模板进行传递
//3.整个类模板化
//将这个对象类型 模板化进行传递

//template<class NameType, class AgeType>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void showPerson()
//	{
//		cout << "name:" << this->m_Name << "  age:" << this->m_Age << endl;
//			
//	}
//	NameType m_Name;
//	AgeType m_Age;
//};
//
////1.指定传入的类型,最常用
//void printPerson1(Person<string, int>&p)
//{
//	p.showPerson();
//}
//void test01()
//{
//	Person<string, int>p("孙悟空", 100);
//	printPerson1(p);
//}
//
////2.参数模板化
//template<class NameType, class AgeType>
//void printPerson2(Person<NameType, AgeType>&p)
//{
//	p.showPerson();
//	cout << "NameType的类型为：" << typeid(NameType).name() << endl;//查看数据类型
//	cout << "AgeType的类型为：" << typeid(AgeType).name() << endl;
//}
//void test02()
//{
//	Person<string, int>p("猪八戒", 100);
//	printPerson2(p);
//}
//
//
////3.整个类模板化
//template<class T>
//void printPerson3(T&p)
//{
//	p.showPerson();
//	cout << "T的类型为：" << typeid(T).name() << endl;//查看数据类型
//
//}
//void test03()
//{
//	Person<string, int>p("唐僧", 30);
//	printPerson3(p);
//}
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return 0;
//}


//类模板与继承
//当类模板碰到继承时，需要注意一下几点 :
// 
//当子类继承的父类是一个类模板时，子类在声明的时候，要指定出父类中T的类型
//如果不指定，编译器无法给子类分配内存
//如果想灵活指定出父类中T的类型，子类也需变为类模板
//template<class T>
//class Base
//{
//	T m;
//};
//
////class Son :public Base//错误，必须要知道父类中的T的类型，才能继承给子类
//class Son :public Base<int>
//{
//
//};
//void test01()
//{
//	Son s1;
//}
////如果想灵活指定出父类中T的类型，子类也需变为类模板
//template<class T1,class T2>
//class Son2 :public Base<T2>
//{
//public:
//	Son2()
//	{
//		cout << "T1的类型为：" << typeid(T1).name() << endl;//查看数据类型
//		cout << "T2的类型为：" << typeid(T2).name() << endl;//查看数据类型
//	}
//	T1 obj;
//};
//void test02()
//{
//	Son2<int,char>S2;
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//类模板成员函数的类外实现
//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	//{
//	//	this->m_Name = name;
//	//	this->m_Age = age;
//	//}
//	void showPerson();
//	//{
//	//	cout << "name:" << this->m_Name << "  age:" << this->m_Age << endl;
//	//}
//	T1 m_Name;
//	T2 m_Age;
//};
//
////构造函数的类外实现
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//		this->m_Name = name;
//		this->m_Age = age;
//}
//template<class T1, class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "name:" << this->m_Name << "  age:" << this->m_Age << endl;
//}
//void test01()
//{
//	Person<string,int> p1("Tom",20);
//	p1.showPerson();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//类模板分文件编写
//学习目标 :
//掌握类模板成员函数分文件编写产生的问题以及解决方式
//问题 :
//类模板中成员函数创建时机是在调用阶段，导致分文件编写时链接不到
//解决 :
//解决方式1 : 直接包含.cpp源文件
//解决方式2 : 将声明和实现写到同一个文件中，并更改后缀名为.hpp，hpp是约定的名称，并不是强制

//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//
//	void showPerson();
//
//	T1 m_Name;
//	T2 m_Age;
//};
//构造函数的类外实现
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//		this->m_Name = name;
//		this->m_Age = age;
//}
//template<class T1, class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "name:" << this->m_Name << "  age:" << this->m_Age << endl;
//}

////第一种解决方式，直接包含源文件
//#include "person.cpp"//将.h改为.cpp
//
////第二种解决方式，将.h和.cpp中的内容写到一起，将后缀改为.hpp文件
//#include "person.hpp"
//
//void test01()
//{
//	Person<string,int> p1("Jerry",20);
//	p1.showPerson();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//类模板与友元
//学习目标 :
//掌握类模板配合友元函数的类内和类外实现
//全局函数类内实现 - 直接在类内声明友元即可
//全局函数类外实现 - 需要提前让编译器知道全局函数的存在

//提前让编译器知道Person类的存在
//template<class T1, class T2>
//class Person;
//
//
////类外实现
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>p)
//{
//	cout << "类外name:" << p.m_Name << "  类外age:" << p.m_Age << endl;
//
//}
//
//
//template<class T1, class T2>
//class Person
//{
//	//全局函数类内实现
//	friend void printPerson(Person<T1,T2>p)
//	{
//		cout << "name:" << p.m_Name << "  age:" << p.m_Age << endl;
//	}
//	//全局函数类外实现
//	//加空模板的参数列表
//	//如果全局函数类外实现，需要让编译器提前知道这个函数的存在
//	friend void printPerson2<>(Person<T1, T2>p);
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//private:
//	T1 m_Name;
//	T2 m_Age;
//};


////1、全局函数类内实现
//void test01()
//{
//	Person<string,int> p("Jerry",20);
//	printPerson(p);
//}
//
////2、全局函数类外实现
//void test02()
//{
//	Person<string, int> p("Jerry", 20);
//	printPerson2(p);
//}
//int main()
//{
//	//test01();
//
//	test02();
//	system("pause");
//	return 0;
//}




//类模板案例
//案例描述 : 实现一个通用的数组类，要求如下:
 
//可以对内置数据类型以及自定义数据类型的数据进行存储
//将数组中的数据存储到堆区
//构造函数中可以传入数组的容量
//提供对应的拷贝构造函数以及operator = 防止浅拷贝问题
//提供尾插法和尾删法对数组中的数据进行增加和删除
//可以通过下标的方式访问数组中的元素
//可以获取数组中当前元素个数和数组的容量















