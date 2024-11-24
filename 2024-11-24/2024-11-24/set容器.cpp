#include <iostream>
#include <set>
#include <string>
using namespace std;

//pair对组创建
//功能描述：
//成对出现的数据，利用对组可以返回两个数据
//两种创建方式：
//pair<type, type> p(value1, value2);
//pair<type, type> p = make_pair(value1, value2);

//pair对组的创建
//void test01()
//{
//	//第一种方式
//	pair<string, int>p("Tom", 20);
//	cout << "姓名：" << p.first << " 年龄：" << p.second << endl;
//
//	//第二种方式
//	pair<string, int>p2 = make_pair("Jerry", 30);
//	cout << "姓名：" << p2.first << " 年龄：" << p2.second << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//set容器排序
//学习目标：
//set容器默认排序规则为从小到大，掌握如何改变排序规则
//主要技术点：
//利用仿函数，可以改变排序规则
//示例一 set存放内置数据类型

//class MyCompare
//{
//public:
//	bool operator()(int v1,int v2)
//	{
//		return v1 > v2;
//	}
//};

//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//class comparePerson
//{
//public:
//	bool operator()(const Person&p1, const Person& p2)const
//	{
//		//按照年龄降序
//		return p1.m_Age > p2.m_Age;
//	}
//};
//void test01()
//{
	//set<int>s1;
	//s1.insert(10);
	//s1.insert(40);
	//s1.insert(20);
	//s1.insert(50);
	//s1.insert(30);

	//for (set<int>::iterator it = s1.begin(); it != s1.end(); it++)
	//{
	//	cout << *it << " ";
	//}
	//cout << endl;

	//指定排序规则从大到小  加入仿函数
	/*set<int,MyCompare> s2;

	s2.insert(10);
	s2.insert(40);
	s2.insert(20);
	s2.insert(50);
	s2.insert(30);

	for (set<int,MyCompare>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;*/

	//存放自定义数据类型
	//自定义的数据类型都要指定排序规则
	/*set<Person, comparePerson>s;
	Person p1("刘备", 23);
	Person p2("关羽", 27);
	Person p3("张飞", 25);
	Person p4("赵云", 21);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "姓名："<<(*it).m_Name<<"  年龄："<<(*it).m_Age <<endl;
	}

}*/

//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}