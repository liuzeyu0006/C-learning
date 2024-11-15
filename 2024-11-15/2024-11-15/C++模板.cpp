#include <iostream>
using namespace std;
//
////泛型编程
////函数模板：建立通用函数，其函数返回值类型和形参类型可以不具体制定，用一个虚拟的类型代表
//
////注意事项：
////自动类型推导，必须推导出一致的数据类型T,才可以使用
////模板必须要确定出T的数据类型，才可以使用T
//
//
////template<typename T>
////函数声明或定义
//
//template<typename T>//声明模板，告诉编译器后面代码紧跟着的T不要报错，T是一个通用数据类型,typename可以换为class
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	//利用函数模板交换
//	//两种方式使用函数模板
//	//1、自动类型推导
//	mySwap(a, b);//正确
//	//mySwap(a, c);//错误，推导不出一致的数据类型T
//	//2、显示指定类型,<int>指定T的数据类型
//	mySwap<int>(a, b);
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//}
//
//
////模板必须要确定出T的数据类型，才可以使用T
//template<class T>
//void func()
//{
//	cout << "func 调用" << endl;
//}
//void test02()
//{
//	//func();//错误
//	func<int>();//需要给定一个数据类型
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}




//案例描述
//利用函数模板封装一个排序的函数，可以对不同数据类型数组进行排序
//排序规则从大到小，排序算法为选择排序
//分别利用char数组和int数组进行测试

////交换函数模板
//template<class T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//
////排序算法
//template<class T>
//void mySort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;//认定最大值下标
//		for (int j = i + 1; j < len; j++)
//		{
//			//认定的最大值比遍历出的数值要小，说明j下标的元素才是最大值
//			if (arr[max] < arr[j])
//			{
//				max = j;//更新最大值下标
//			}
//		}
//		if (max != i) 
//		{
//			//交换max和i下标元素
//			mySwap(arr[max], arr[i]);
//		}
//	}
//}
////提供打印数组模板
//template<class T>
//void printArray(T arr[],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	//测试char数值
//	char charArr[] = "badcfe";
//	int num =sizeof(charArr) / sizeof(char);
//	mySort(charArr, num);
//	printArray(charArr, num);
//}
//
//void test02()
//{
//	//测试int数值
//	int intArr[] = {4,3,1,6,5,7};
//	int num = sizeof(intArr) / sizeof(int);
//	mySort(intArr, num);
//	printArray(intArr, num);
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}


//普通函数与函数模板区别
//普通函数调用时可以发生自动类型转换(隐式类型转换)
//函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换
//如果利用显示指定类型的方式，可以发生隐式类型转换


//普通函数
//int myAdd01(int a, int b)
//{
//	return a + b;
//}
//
////函数模板
//template<class T>
//T myAdd02(T a, T b)
//{
//	return a + b;
//}
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';//a对应97，c对应99
//	cout << myAdd01(a, c) << endl;
//
//	//函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换
//	//cout << myAdd02(a, c) << endl;
//	//如果利用显示指定类型的方式，可以发生隐式类型转换
//	cout << myAdd02<int>(a, c) << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//普通函数与函数模板的调用规则
//调用规则如下 
//1.如果函数模板和普通函数都可以实现，优先调用普通函数
//2.可以通过空模板参数列表来强制调用函数模板
//3.函数模板也可以发生重载
//4.如果函数模板可以产生更好的匹配, 优先调用函数模板


//void myPrint(int a, int b)
//{
//	cout << "调用的普通函数" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b)
//{
//	cout << "调用的模板" << endl;
//}
//template<class T>
//void myPrint(T a, T b,T c)
//{
//	cout << "调用重载的模板" << endl;
//}
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	//myPrint(a, b);
//
//	//可以通过空模板参数列表来强制调用函数模板
//	//myPrint<>(a, b);
//
//	//函数模板也可以发生重载
//	//myPrint<>(a, b,100);
//
//	//如果函数模板可以产生更好的匹配, 优先调用函数模板
//	char c1 = 'a';
//	char c2 = 'b';
//	myPrint(c1, c2);
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//模板的局限性
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_age = age;
	}
	string m_Name;
	int m_age;
};


//对比两数是否相等
template<class T>
bool myCompare(T& a, T& b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//利用具体化Person的版本实现代码，具体化优先调用
template<>bool myCompare(Person& p1, Person& p2)
{
	if (p1.m_Name == p2.m_Name && p1.m_age == p2.m_age)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void test01()
{
	int a = 10;
	int b = 20;
	bool ret = myCompare(a, b);
	if (ret)
	{
		cout << "a和b相等" << endl;
	}
	else
	{
		cout << "a和b不相等" << endl;
	}
}

void test02()
{
	Person p1 = ("Tom", 10);
	Person p2 = ("Tom", 10);
	bool ret = myCompare(p1, p2);
	if (ret)
	{
		cout << "p1和p2相等" << endl;
	}
	else
	{
		cout << "p1和p2不相等" << endl;
	}
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
