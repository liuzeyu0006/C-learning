#include <iostream>
using namespace std;
#include <list>
#include <algorithm>

//list容器
//list基本概念
//功能：将数据进行链式存储
//链表（list）是一种物理存储单元上非连续的存储结构，数据元素的逻辑顺序是通过链表中的指针链接实现的
//链表的组成：链表由一系列结点组成
//结点的组成：一个是存储数据元素的数据域，另一个是存储下一个结点地址的指针域

//STL中的链表是一个双向循环链表
//由于链表的存储方式并不是连续的内存空间，因此链表list中的迭代器只支持前移和后移，属于双向迭代器

//list的优点：
//采用动态存储分配，不会造成内存浪费和溢出
//链表执行插入和删除操作十分方便，修改指针即可，不需要移动大量元素

//list的缺点：
//链表灵活，但是空间(指针域) 和 时间（遍历）额外耗费较大
//List有一个重要的性质，插入操作和删除操作都不会造成原有list迭代器的失效，这在vector是不成立的。

//总结：STL中List和vector是两个最常被使用的容器，各有优缺点

//list构造函数
//功能描述：
//创建list容器
//函数原型：
//list<T> lst; //list采用采用模板类实现,对象的默认构造形式：
//list(beg, end); //构造函数将[beg, end)区间中的元素拷贝给本身。
//list(n, elem); //构造函数将n个elem拷贝给本身。
//list(const list& lst); //拷贝构造函数。


//void printList(const list<int>& L) 
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	//创建list容器
//	list<int>L1;//默认构造
//
//	//添加数据
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	printList(L1);
//
//	//区间构造
//	list<int>L2(L1.begin(), L1.end());
//	printList(L2);
//
//	//拷贝构造
//	list<int>L3(L2);
//	printList(L3);
//
//	//n个elem
//	list<int>L4(10,100);
//	printList(L4);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//------------------------------------------------------------------------
//list 赋值和交换
//功能描述：
//给list容器进行赋值，以及交换list容器
//函数原型：
//assign(beg, end); //将[beg, end)区间中的数据拷贝赋值给本身。
//assign(n, elem); //将n个elem拷贝赋值给本身。
//list& operator=(const list& lst); //重载等号操作符
//swap(lst); //将lst与本身的元素互换。

//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	//创建list容器
//	list<int>L1;//默认构造
//
//	//添加数据
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	printList(L1);
//
//	list<int>L2;
//	L2 = L1;
//	printList(L1);
//
//	list<int>L3;
//	L3.assign(L1.begin(),L1.end());
//	printList(L3);
//
//	list<int>L4;
//	L4.assign(10, 100);
//	printList(L4);
//
//}
////交换
//void test02()
//{
//	//创建list容器
//	list<int>L1;//默认构造
//
//	//添加数据
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	list<int>L2;
//	L2.assign(10, 100);
//
//	cout << "交换前打印" << endl;
//	printList(L1);
//	printList(L2);
//
//	//交换
//	L1.swap(L2);
//
//	cout << "交换前打印" << endl;
//	printList(L1);
//	printList(L2);
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}


//------------------------------------------------
//list 大小操作
//功能描述：
//对list容器的大小进行操作
//函数原型：
//size(); //返回容器中元素的个数
//empty(); //判断容器是否为空
//resize(num); //重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
//					//如果容器变短，则末尾超出容器长度的元素被删除。
//resize(num, elem); //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
//					//如果容器变短，则末尾超出容器长度的元素被删除。

//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	//创建list容器
//	list<int>L1;//默认构造
//
//	//添加数据
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	printList(L1);
//
//	//判断容器是否为空
//	if (L1.empty())
//	{
//		cout << "容器为空！" << endl;
//	}
//	else
//	{
//		cout << "容器不为空！" << endl;
//		cout << "L1中的元素个数是：" <<L1.size()<< endl;
//	}
//
//	//重新指定大小
//	//L1.resize(10);
//	L1.resize(10,10000);
//	printList(L1);
//
//	L1.resize(2);
//	printList(L1);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//----------------------------------------------------------------
//list 插入和删除
//功能描述：
//对list容器进行数据的插入和删除
//函数原型：
//push_back(elem);//在容器尾部加入一个元素
//pop_back();//删除容器中最后一个元素
//push_front(elem);//在容器开头插入一个元素
//pop_front();//从容器开头移除第一个元素
//insert(pos, elem);//在pos位置插elem元素的拷贝，返回新数据的位置。
//insert(pos, n, elem);//在pos位置插入n个elem数据，无返回值。
//insert(pos, beg, end);//在pos位置插入[beg,end)区间的数据，无返回值。
//clear();//移除容器的所有数据
//erase(beg, end);//删除[beg,end)区间的数据，返回下一个数据的位置。
//erase(pos);//删除pos位置的数据，返回下一个数据的位置。
//remove(elem);//删除容器中所有与elem值匹配的元素。

//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	//创建list容器
//	list<int>L1;//默认构造
//
//	//尾插
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	//头插
//	L1.push_front(100);
//	L1.push_front(200);
//	L1.push_front(300);
//
//	printList(L1);
//
//	//尾删
//	L1.pop_back();
//	printList(L1);
//
//	//头删
//	L1.pop_front();
//	printList(L1);
//	
//	//插入  提供迭代器
//	list<int>::iterator it = L1.begin();
//	L1.insert(++it, 1000);
//	printList(L1);
//
//	//删除  提供迭代器
//	it = L1.begin();
//	L1.erase(++it);
//	printList(L1);
//
//	//移除
//	L1.push_back(10000);
//	L1.push_back(10000);
//	L1.push_back(10000);
//	L1.push_back(10000);
//
//	printList(L1);
//	L1.remove(10000);
//	printList(L1);
//
//	//清空
//	L1.clear();
//	printList(L1);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//-----------------------------------------------------------
//list 数据存取
//功能描述：
//对list容器中数据进行存取
//函数原型：
//front(); //返回第一个元素。
//back(); //返回最后一个元素。
//不可以通过[]和at访问。//原因是1ist本质链表，不是用连续线性空间存储数据，迭代器也是不支持随机访问的

//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	//创建list容器
//	list<int>L1;//默认构造
//
//	//尾插
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	cout << "第一个元素是：" << L1.front() << endl;
//	cout << "最后一个元素是：" << L1.back() << endl;
//
//	//验证迭代器不支持随机访问
//	list<int>::iterator it = L1.begin();
//	it++;//只能++ --   双向
//	it = it + 1;//不允许+1，+2等，不允许跳着加
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//---------------------------------------------------------------
//list 反转和排序
//功能描述：
//将容器中的元素反转，以及将容器中的数据进行排序
//函数原型：
//reverse(); //反转链表
//sort(); //链表排序

//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//反转
//void test01()
//{
//	//创建list容器
//	list<int>L1;//默认构造
//
//	
//	L1.push_back(20);
//	L1.push_back(10);
//	L1.push_back(50);
//	L1.push_back(40);
//	L1.push_back(30);
//
//	cout << "反转前：" << endl;
//	printList(L1);
//	L1.reverse();
//	cout << "反转后：" << endl;
//	printList(L1);
//}
//
////排序
//bool MyCompare(int v1,int v2)
//{
//	//降序，让第一个数大于第二个数
//	return v1 > v2;
//}
//void test02()
//{
//	//创建list容器
//	list<int>L1;//默认构造
//
//
//	L1.push_back(20);
//	L1.push_back(10);
//	L1.push_back(50);
//	L1.push_back(40);
//	L1.push_back(30);
//
//	cout << "排序前：" << endl;
//	printList(L1);
//
//	//所有不支持随机访问迭代器的容器，不可以使用标准算法
//	//不支持随机访问迭代器的容器，内部会提供对应一些算法
//	//sort(L1.begin(),L1.end());错误，不能使用全局函数的标准算法
//
//	L1.sort();//默认升序
//	cout << "排序后：" << endl;
//	printList(L1);
//
//	//降序
//	L1.sort(MyCompare);
//	printList(L1);
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}