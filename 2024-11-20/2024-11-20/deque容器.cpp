#include <iostream>
using namespace std;
#include <deque>
#include <algorithm>

//deque容器
//deque容器基本概念
//功能 :
//。双端数组，可以对头端进行插入删除操作
//deque与vector区别 :
//vector对于头部的插入删除效率低，数据量越大，效率越低
//deque相对而言，对头部的插入删除速度回比vector快
//vector访问元素时的速度会比deque快, 这和两者内部实现有关

//deque内部工作原理:
//deque内部有个中控器，维护每段缓冲区中的内容，缓冲区中存放真实数据
//中控器维护的是每个缓冲区的地址，使得使用deque时像一片连续的内存空间
//deque容器的迭代器也是支持随机访问的


//deque构造函数
//功能描述 :
//。deque容器构造
//函数原型 :
//deque<T> deqT;//默认构造形式
//deque(beg, end);//构造函数将[beg, end)区间中的元素拷贝给本身,
//deque(n, elem);//构造函数将n个elem拷贝给本身。
//deque(const deque& deg); //拷贝构造函数

//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		//*it = 100;  容器中的数据不可以修改了,只读状态
//		cout << *it << "  ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	deque<int>d2(d1.begin(),d1.end());
//	printDeque(d2);
//
//	deque<int>d3(10, 100);
//	printDeque(d3);
//
//	deque<int>d4(d3);
//	printDeque(d4);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//--------------------------------------------------------------

//deque赋值操作
//功能描述 :
//给deque容器进行赋值
//函数原型 :
//deque & operator=(const deque & deq);//重载等号操作符
//assign(beg, end);//将[beg, end)区间中的数据拷贝赋值给本身
//assign(n, elem);//将n个elem拷贝赋值给本身


//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		//*it = 100;  容器中的数据不可以修改了,只读状态
//		cout << *it << "  ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	//operator=赋值
//	deque<int>d2;
//	d2 = d1;
//	printDeque(d2);
//
//	//assign赋值
//	deque<int>d3;
//	d3.assign(d1.begin(), d1.end());
//	printDeque(d3);
//
//	deque<int>d4;
//	d4.assign(10, 100);
//	printDeque(d4);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//------------------------------------------------------------------------
//deque大小操作
//功能描述 :
//对deque容器的大小进行操作
//函数原型 :
//deque.empty();//判断容器是否为空
//deque.size();//返回容器中元素的个数
//deque.resize(num);//重新指定容器的长度为num,若容器变长，则以默认值填充新位置,//如果容器变短，则末尾超出容器长度的元素被删除。
//deque.resize(num, elm);//重新指定容器的长度为num,若容器变长，则以elem值填充新位置，//如果容器变短，则末尾超出容器长度的元素被删除。
//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		//*it = 100;  容器中的数据不可以修改了,只读状态
//		cout << *it << "  ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	if (d1.empty())
//	{
//		cout << "d1为空" << endl;
//	}
//	else
//	{
//		cout << "d1不为空" << endl;
//		cout << "d1的大小：" << d1.size() << endl;
//		//deque，没有容量概念
//	}
//	//d1.resize(15);
//	//printDeque(d1);
//
//	d1.resize(15,1);
//	printDeque(d1);
//
//	d1.resize(5);
//	printDeque(d1);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//------------------------------------------------------------------------
//deque插入和删除
//功能描述 :
//。向deque容器中插入和删除数据
//函数原型 :
//两端插入操作:
//push back(elem);//在容器尾部添加一个数据
//push front(elem);//在容器头部插入一个数据
//pop_back();//删除容器最后一个数据
//pop_front();//删除容器第一个数据
//
//指定位置操作:
//insert(pos, elem);//在pos位置插入一个elem元素的拷贝，返回新数据的位置。
//insert(pos, n, elem);//在poS位置插入n个elem数据，无返回值。
//insert(pos, beg, end);//在pos位置插入[beg,end)区间的数据，无返回值。
//clear();//清空容器的所有数据
//erase(beg, end);//删除[beg,end)区间的数据，返回下一个数据的位置
//erase(pos);//删除pos位置的数据，返回下一个数据的位置。

//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		//*it = 100;  容器中的数据不可以修改了,只读状态
//		cout << *it << "  ";
//	}
//	cout << endl;
//}
//
////两端操作
//void test01()
//{
//	deque<int>d1;
//	//尾插
//	d1.push_back(10);
//	d1.push_back(20);
//
//	//头插
//	d1.push_front(100);
//	d1.push_front(200);
//	printDeque(d1);
//
//	//尾删
//	d1.pop_back();
//	printDeque(d1);
//
//	//头删
//	d1.pop_front();
//	printDeque(d1);
//}
////指定位置插入删除
//void test02()
//{
//	deque<int>d1;
//	//尾插
//	d1.push_back(10);
//	d1.push_back(20);
//
//	//头插
//	d1.push_front(100);
//	d1.push_front(200);
//	printDeque(d1);
//
//	//insert插入
//	d1.insert(d1.begin(), 1000);
//	printDeque(d1);
//
//	d1.insert(d1.begin(), 2,10000);
//	printDeque(d1);
//
//	//按照区间进行插入
//	deque<int>d2;
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//
//	d1.insert(d1.begin(), d2.begin(), d2.end());
//	printDeque(d1);
//}
//
//void test03()
//{
//	deque<int>d1;
//	//尾插
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//
//	//删除
//	deque<int>::iterator it = d1.begin();
//	it++;
//	d1.erase(it);
//	printDeque(d1);
//
//	//按照区间方式删除 
//	d1.erase(d1.begin(),d1.end());
//	printDeque(d1);
//
//	//清空
//	d1.clear();
//	printDeque(d1);
//}
//int main()
//{
//	//test01();
//	/*test02();*/
//	test03();
//	system("pause");
//	return 0;
//}

//---------------------------------------------------------------------
//deque 数据存取
//功能描述 :
//对deque 中的数据的存取操作
//函数原型 :
//at(int idx);//返回索引idx所指的数据
//operatorÃ];//返回索引idx所指的数据
//front();//返回容器中第一个数据元素
//back();//返回容器中最后一个数据元素

//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		//*it = 100;  容器中的数据不可以修改了,只读状态
//		cout << *it << "  ";
//	}
//	cout << endl;
//}
//
////两端操作
//void test01()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_back(30);
//	d1.push_front(100);
//	d1.push_front(200);
//	d1.push_front(300);
//
//	//通过[]方式访问元素
//	for (int i = 0; i < d1.size(); i++)
//	{
//		cout << d1[i] << "  ";
//	}
//	cout << endl;
//
//	//通过at方式访问元素
//	for (int i = 0; i < d1.size(); i++)
//	{
//		cout << d1.at(i) << "  ";
//	}
//	cout << endl;
//
//	cout << "第一个元素是：" << d1.front() << endl;
//	cout << "最后一个元素是：" << d1.back() << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//----------------------------------------------------------
//deque 排序
//功能描述 :
//。利用算法实现对deque容器进行排序
//算法 :
//sort(iterator beg, iterator end);//对beg和end区间内元素进行排序

//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		//*it = 100;  容器中的数据不可以修改了,只读状态
//		cout << *it << "  ";
//	}
//	cout << endl;
//}
//
////两端操作
//void test01()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_back(30);
//	d1.push_front(100);
//	d1.push_front(200);
//	d1.push_front(300);
//	cout << " 排序前 " << endl;
//	printDeque(d1);
//
//	cout << " 排序后 " << endl;
//
//	//排序  sort排序默认从小到大，升序
//	//对于支持随机访问的迭代器容器，都可以利用sort算法直接对其进行排序
//	//vector也可以利用sort排序
//	sort(d1.begin(), d1.end());
//	printDeque(d1);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}