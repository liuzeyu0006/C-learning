#include <iostream>
using namespace std;
#include <vector>
//vector容器
//vector基本概念
//功能 :
//。vector数据结构和数组非常相似，也称为单端数组
//
//vector与普通数组区别 :
//。不同之处在于数组是静态空间，而vector可以动态扩展
//
//动态扩展 :
//并不是在原空间之后续接新空间，而是找更大的内存空间，然后将原数据拷贝新空间，释放原空间

//vector构造函数
//功能描述 :
//创建vector容器
//函数原型 :
//vector<T> V;				//采用模板实现类实现，默认构造函数
//vector(v.begin(), v.end());	//将v[begin(), end())区间中的元素拷贝给本身。
//vector(rp elem);			//构造函数将n个elem拷贝给本身。
//vector(const vector& vec);	//拷贝构造函数。
//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	vector<int>v1;//默认构造
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	//通过区间方式进行构造
//	vector<int>v2(v1.begin(), v1.end());
//	printVector(v2);
//
//	//n个elem方式构造
//	vector<int>v3(10, 100);
//	printVector(v3);
//
//	//拷贝构造
//	vector<int>v4(v3);
//	printVector(v4);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//----------------------------------------------------------------

//vector赋值操作
//功能描述 :
//给vector容器进行赋值
//函数原型 :
//vector & operator=(const vector & vec);//重载等号操作符
//assign(beg, end);//将[beg, end)区间中的数据拷贝赋值给本身,
//assign(n, elem);//将n个elem拷贝赋值给本身。

//void printVector(vector<int>&v)
//{
//	for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << "  ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//		{
//			v1.push_back(i);
//		}
//	printVector(v1);
//
//	//赋值
//	/*operator=*/
//	vector<int>v2;
//	v2 = v1;
//	printVector(v2);
//
//	//assign
//	vector<int>v3;
//	v3.assign(v1.begin(), v1.end());
//	printVector(v3);
//
//	//n个elem方式赋值
//	vector<int>v4;
//	v4.assign(10, 100);
//	printVector(v4);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//---------------------------------------------------------------------
//vector容量和大小
//功能描述 :
//。对vector容器的容是和大小操作
//函数原型 :
//empty();//判断容器是否为空
//capacity();//容器的容量
//size();//返回容器中元素的个数
//resize(int num);//重新指定容器的长度为num，若容器变长，则以默认值填充新位置。如果容器变短，则末尾超出容器长度的元素被删除。
//resize(int num, elem); //重新指定容器的长度为num，若容器变长，则以elem值填充新位置，如果容器变短，则末尾超出容器长度的元素被删除


//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << "  ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//	if (v1.empty())//为真  代表容器为空
//	{
//		cout << "v1为空" << endl;
//	}
//	else
//	{
//		cout << "v1不为空" << endl;
//		cout << "v1的容量为：" << v1.capacity() << endl;
//		cout << "v1的大小为：" << v1.size() << endl;
//	}
//
//	//重新指定大小
//	v1.resize(15,100);//利用重载版本，可以指定默认填充值，参数2
//	printVector(v1);//如果重新指定的过长，默认0来填充其他位置
//
//	//指定短了
//	v1.resize(5);
//	printVector(v1); //如果重新指定的短了，超出部分会被删除
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//----------------------------------------------------------------------------

//vector插入和删除
//功能描述 :
//对vector容器进行插入、删除操作
//函数原型 :
//push back(ele);//尾部插入元素ele
//pop_back();//删除最后一个元素
//insert(const iterator pos, ele);//迭代器指向位置pos插入元素ele
//insert(const_iterator pos，int count, ele);//迭代器指向位置pos插入count个元素ele
//erase(const iterator pos);//删除迭代器指向的元素
//erase(const iterator start, const iterator end);//删除迭代器从start到end之间的元素
//clear();//删除容器中所有元素

//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << "  ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	vector<int>v1;
//	for (int i = 10; i <= 50; i+=10)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//	
//	
//	//尾删
//	v1.pop_back();
//	printVector(v1);
//
//	//插入  第一个参数是迭代器
//	v1.insert(v1.begin(), 100);
//	printVector(v1);
//
//	v1.insert(v1.begin(), 2,1000);
//	printVector(v1);
//
//	//删除  参数是迭代器
//	v1.erase(v1.begin());
//	printVector(v1);
//
//	//类似于清空
//	v1.erase(v1.begin(),v1.end());
//	printVector(v1);
//
//	v1.clear();
//	printVector(v1);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//--------------------------------------------
//3.2.6 vector数据存取
//功能描述 :
//对vector中的数据的存取操作
//函数原型 :
//at(iht idx);//返回索引idx所指的数据
//operator[];//返回索引idx所指的数据
//front();//返回容器中第一个数据元素
//back();//返回容器中最后一个数据元素
//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << "  ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i ++)
//	{
//		v1.push_back(i);
//	}
//
//
//	//利用[]来访问数组中的元素
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//
//	//利用at方式访问
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1.at(i) << " ";
//	}
//	cout << endl;
//
//	//获取第一个元素
//	cout << "第一个元素为：" << v1.front() << endl;
//
//	//获取最后一个元素
//	cout << "最后一个元素为：" << v1.back() << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//---------------------------------------------------
//vector互换容器
//功能描述 :
//实现两个容器内元素进行互换
//函数原型 :
//swap(vec);//将vec与本身的元素互换
//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << "  ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	cout << "交换前打印" << endl;
//	printVector(v1);
//
//	vector<int>v2;
//	for (int i = 10; i > 0; i--)
//	{
//		v2.push_back(i);
//	}
//	printVector(v2);
//
//
//	cout << "交换后打印" << endl;
//	v1.swap(v2);
//	printVector(v1);
//	printVector(v2);
//}
//
////实际用途
////巧用swap可以收缩内存空间
//void test02()
//{
//	vector<int>v;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//	}
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//
//	v.resize(3);
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//
//	//巧用swap收缩内存
//	vector<int>(v).swap(v);
//	//vector<int>(v)是匿名对象，用后会被释放，按照v的大小初始化为3
//	//.swap(v)进行交换，变为3，收缩内存
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//}
//
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}

//-------------------------------------------------------------------
//vector预留空间
//功能描述 :
//。减少vector在动态扩展容量时的扩展次数
//函数原型 :
//reserve(int len);//容器预留len个元素长度，预留位置不初始化，元素不可访问,。
void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}
void test01()
{
	vector<int>v1;

	//利用reserve预留空间
	v1.reserve(100000);
	int num = 0;//统计开辟次数
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
		if (p != &v1[0])
		{
			p = &v1[0];
			num++;
		}
	}
	cout << "num= " << num << endl;
}
	int main()
	{
		test01();
		system("pause");
		return 0;
	}