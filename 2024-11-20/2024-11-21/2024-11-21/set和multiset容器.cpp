#include <iostream>
#include <set>
using namespace std;

//set / multiset 容器
//set基本概念
//
//简介：
//所有元素都会在插入时自动被排序
//
//本质：
//set / multiset属于关联式容器，底层结构是用二叉树实现。
//
//set和multiset区别：
//set不允许容器中有重复的元素
//multiset允许容器中有重复的元素
//
//3.8.2 set构造和赋值
//功能描述：创建set容器以及赋值
//
//构造：
//set<T> st; //默认构造函数：
//set(const set& st); //拷贝构造函数
//
//赋值：
//set& operator=(const set& st); //重载等号操作符

//void PrintSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	set<int>s1;
//	//插入数据只有insert
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(30);
//
//	//遍历容器
//	//所有元素都会在插入时自动被排序
//	//set不允许插入重复值
//	PrintSet(s1);
//
//	//拷贝构造
//	set<int>s2(s1);
//	PrintSet(s1);
//
//	//赋值操作
//	set<int>s3;
//	s3 = s2;
//	PrintSet(s3);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//--------------------------------------
//set大小和交换
//功能描述：
//统计set容器大小以及交换set容器
//函数原型：
//size(); //返回容器中元素的数目
//empty(); //判断容器是否为空
//swap(st); //交换两个集合容器
//void PrintSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	set<int>s1;
//	//插入数据只有insert
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(50);
//
//	//遍历容器
//	//所有元素都会在插入时自动被排序
//	//set不允许插入重复值
//	PrintSet(s1);
//
//	//判断是否为空
//	if (s1.empty())
//	{
//		cout << "s1为空" << endl;
//	}
//	else
//	{
//		cout << "s1不为空" << endl;
//		cout << "s1的大小为：" << s1.size() << endl;
//	}
//}
//
////交换
//void test02()
//{
//	set<int>s1;
//	//插入数据只有insert
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(50);
//
//	set<int>s2;
//	//插入数据只有insert
//	s2.insert(100);
//	s2.insert(200);
//	s2.insert(300);
//	s2.insert(400);
//	s2.insert(500);
//
//	cout << "交换前" << endl;
//	PrintSet(s1);
//	PrintSet(s2);
//
//	cout << "交换后" << endl;
//	s1.swap(s2);
//	PrintSet(s1);
//	PrintSet(s2);
//
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}

//---------------------------------
//set插入和删除
//功能描述：
//set容器进行插入数据和删除数据
//函数原型：
//insert(elem); //在容器中插入元素。
//clear(); //清除所有元素
//erase(pos); //删除pos迭代器所指的元素，返回下一个元素的迭代器。
//erase(beg, end); //删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器。
//erase(elem); //删除容器中值为elem的元素。

//void PrintSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	set<int>s1;
//	//插入数据只有insert
//	s1.insert(30);
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(40);
//
//	//遍历容器
//	//所有元素都会在插入时自动被排序
//	//set不允许插入重复值
//	PrintSet(s1);
//
//	//删除
//	//会删除10
//	s1.erase(s1.begin());
//	PrintSet(s1);
//
//	s1.erase(30);
//	PrintSet(s1);
//
//	//清空
//	s1.erase(s1.begin(), s1.end());
//	PrintSet(s1);
//
//	s1.clear();
//	PrintSet(s1);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//----------------------------------------------------
//set查找和统计
//功能描述：
//对set容器进行查找数据以及统计数据
//函数原型：
//find(key); //查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
//count(key); //统计key的元素个数
//查找-- - find （返回的是迭代器）
//统计-- - count （对于set，结果为0或者1）

//void PrintSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	set<int>s1;
//	//插入数据只有insert
//	s1.insert(30);
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(40);
//
//	//查找
//	set<int>::iterator pos = s1.find(30);
//	if (pos != s1.end())
//	{
//		cout << "找到了元素 ： " << *pos << endl;
//	}
//	else
//	{
//		cout << "未找到元素" << endl;
//	}
//	//统计
// //对于set而言，统计结果要么为0，要么为1
//	int num = s1.count(30);
//	cout << "num = " << num << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

