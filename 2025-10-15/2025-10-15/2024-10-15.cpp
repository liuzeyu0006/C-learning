#include <iostream>
using namespace std;



//内存分区模型
// 
// 运行前区域：代码区和全局区
// 
// 代码区；存放函数体的二进制代码，由操作系统进行管理
// 代码区存放CPU执行的机器指令，代码区是只读和共享的
// 
// 全局区：存放静态变量、static关键字、字符串常量、const修饰的全局变量（全局常量）
// 全局区不存放局部变量和局部常量
// 存放全局变量和静态变量以及常量，该区域的数据在程序结束后由操作系统释放
// 
// 栈区：由编译器自动分配释放，存放函数的参数值，局部变量等
// 注意：不要返回局部变量的地址，栈区开辟的数据由编译器自动释放
// 堆区：由程序员分配和释放，若不释放，程序结束时由操作系统回收
//
//
////全局变量
//int g_a = 10;
//int g_b = 20;
//
////const修饰的全局变量,即全局常量
//int c_g_a = 10;
//int c_g_b = 10;
//int main()
//{
//	//局部变量
//	int a = 10;
//	int b = 20;
//
//	cout << "局部变量a的地址：" << (int)&a << endl;
//	cout << "局部变量b的地址：" << (int)&b << endl;
//
//	cout << "全局变量g_a的地址：" << (int)&g_a << endl;
//	cout << "全局变量g_b的地址：" << (int)&g_b << endl;
//
//	//静态变量
//	static int s_a = 10;
//	static int s_b = 10;
//	cout << "静态变量s_a的地址：" << (int)&s_a << endl;
//	cout << "静态变量s_b的地址：" << (int)&s_b << endl;
//
//	//常量
//	//字符串常量
//	cout << "字符串的地址：" << (int)&"hello world" << endl;
//
//	//const修饰的变量
//	//const修饰的全局变量，const修饰的局部变量
//	cout << "全局常量c_g_a的地址：" << (int)&c_g_a<< endl;
//	cout << "全局常量c_g_b的地址：" << (int)&c_g_b << endl;
//
//	const int c_l_a = 10;
//	const int c_l_b = 10;
//	cout << "局部常量c_g_a的地址：" << (int)&c_l_a << endl;
//	cout << "局部常量c_g_b的地址：" << (int)&c_l_b << endl;
//	system("pause");
//	return 0;
//}



//栈区数据注意事项--不要返回局部变量的地址

//int* func()
//{
//	int a = 10;//局部变量存放在栈区，栈区的数据在执行完后自动释放
//	return  &a;
//}
//int main()
//{
//	int* p = func();
//
//	cout << *p << endl;//第一次打印了正确的数值是因为编译器做了保留
//	cout << *p << endl;//第二次数据就不在保留了
//
//
//	system("pause");
//	return 0;
//}



//堆区
//利用new在堆区开辟数据
//int* func()
//{
//	//利用new可以将数据开辟到堆区
//	//指针的本质也是局部变量，放在栈上，指针保存的数据在堆区
//	int* p = new int(10);
//	return p;
//}
//int main()
//{
//	int* p = func();
//
//	cout << *p << endl;//
//	cout << *p << endl;//
//
//
//	system("pause");
//	return 0;
//}


////new的使用
//int* func()
//{
//	//利用new可以将数据开辟到堆区
//	//指针的本质也是局部变量，放在栈上，指针保存的数据在堆区
//	int* p = new int(10);
//	return p;
//}
//void test01()
//{
//	int* p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	//堆区的数据，由程序员开辟和释放
//	//如果要释放堆区，利用关键字delete
//	delete p;
//	//cout << *p << endl;//内存已经被释放，再次访问就是非法操作，会报错
//}
////在堆区利用new开辟数组
//void test02()
//{
//	int *arr = new int[10];
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout<<arr[i] <<endl;
//	}
//	//释放数组时，要加一个[]才可以
//	delete[] arr;
//}
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}



//引用
//给变量起别名
//数据类型 &别名=原名
//引用必须初始化
//引用在初始化后，不可改变
//int main()
//{
//
//	int a = 10;
//	int& b = a;
//
//	cout << a << endl;
//	cout << b << endl;
//
//	b = 20;
//	cout << a << endl;
//	cout << b << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//int &b  不行，必须初始化
//	int a = 10;
//	int& b = a;
//
//	//初始化后不可改变，b是a的别名，就不能再是c的别名了
//	int c = 20;
//	b = c;//赋值操作
//
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//	system("pause");
//	return 0;
//}




//引用做函数参数
//作用：函数传参时，可以利用引用的技术让形参来修饰实参
//可以简化指针修改实参
//交换函数
//1、值传递 2、地址传递 3、引用传递

//值传递
//void mySwap01(int a,int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
	//cout << "swap01中a=" << a << endl;
	//cout << "swap01中b=" << b << endl;
//}
//地址传递
//void mySwap02(int *a, int *b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
	//cout << "swap01中a=" << a << endl;
	//cout << "swap01中b=" << b << endl;
//}
////引用传递
//void mySwap03(int &a, int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//mySwap01(a, b);//值传递，形参不会修饰实参
//	//mySwap02(&a, &b);//地址传递，形参会修饰实参
//	mySwap03(a, b);//引用传递，形参会修饰实参,与地址传递一样
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	system("pause");
//	return 0;
//}



//引用做函数的返回值
//不要返回局部变量的引用
//int& test01()
//{
//	int a = 10;//局部变量，在栈区
//	return a;
//}
////函数调用作为左值
//int& test02()
//{
//	static int a = 10;//静态变量，在全局区
//	return a;
//}
//int main()
//{
//	int& ref = test01();
//	int& ref2 = test02();
//	
//	cout << "ref=" << ref << endl;//第一次结果对的
//	cout << "ref=" << ref << endl;//第二次错误，内存已经释放
//
//	cout << "ref2=" << ref2 << endl;
//	cout << "ref2=" << ref2 << endl;
//	test02() = 1000;//函数调用作为左值,把a修改成1000了，ref是别名，也就修饰a的，故也为1000
//	cout << "ref2=" << ref2 << endl;
//	cout << "ref2=" << ref2 << endl;
//	system("pause");
//	return 0;
//}


//引用的本质
//引用的本质在C++内部实现是一个指针常量
//void func(int& ref)
//{
//	ref = 100;//ref是引用，转换为*ref=100；
//}
//int main()
//{
//	int a = 10;
//	int& ref = a;//自动转换为int* const ref = &a;指针常量是指针指向不可改，也就说明为什么引用不可更改
//	ref = 20;//内部发现ref是引用，自动帮我们转换为:*ref=20；
//	cout << "a:" << a << endl;
//	cout << "ref:" << ref << endl;
//
//	func(a);
//
//	system("pause");
//	return 0;
//}



//常量引用
//前面加const修饰形参，防止误操作

//void showValue(const int &val)
//{
//	//val = 1000;//防止误操作
//	cout << "val=" << val << endl;
//}
//int main()
//{
//	//int a = 10;
//	//int& ref = 10;//引用必须引一块合法的内存空间
//	//const int& ref = 10;//加上const后，编译器将代码修改  int temp = 10； const int &ref=temp；
//	//ref = 20;//加上const后，变为只读，就不能修改了
//
//	int a = 100;
//	showValue(a);
//
//	system("pause");
//	return 0;
//}



//函数的提高
//函数的默认参数
// 注意：
//1、如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须要有默认值
// int func(int a,int b,int c=10,int d)不行
// int func(int a,int b,int c=10,int d=20)行

//2、如果函数声明有默认参数，函数实现就不能有默认参数
//声明和实现只能有一个默认参数
//函数声明
//int func(int a,int b);
//
//函数的实现
//int func(int a,int b)
//{
//return a + b;
//}
//int main()
//{
//	cout << func() << endl;
//	system("pause");
//	return 0;
//}



//函数占位参数
//用来占位，调用函数时必须填补该位置
//返回值类型 函数名 （数据类型）{}
//占位参数还可以有默认参数
//void func(int a,int)//后一个int就是占位，想调用必须得写一个整型才能调用
//{
//	cout << "占位" << endl;
//}
//int main()
//{
//	func(1,10);
//	system("pause");
//	return 0;
//}


//函数的重载
//作用：函数名可以相同，提高复用性

// 满足条件：
// 同一个作用域下：都在全局作用域下
// 函数名称相同：都是func（）
// 函数参数类型不同 或者 个数不同 或者 顺序不同

// 函数的返回值不可以作为函数重载的条件
//无法重载仅按返回值类型区分函数

//void func()
//{
//	cout << "func的调用" << endl;
//}
//void func(int a)
//{
//	cout << "func(int a)的调用" << endl;
//}
//void func(double a)
//{
//	cout << "func(double a)的调用" << endl;
//}
//void func(double a,int b)
//{
//	cout << "func(double a,int b)的调用" << endl;
//}
//void func(int a, double b)
//{
//	cout << "func(int a, double b)的调用" << endl;
//}
//int main()
//{
//	func();//
//	//类型不同
//	func(1);
//	func(3.14);
//	//顺序不同
//	func(3.14, 1);
//	func(1, 3.14);
//system("pause");
//return 0;
//}



//函数重载注意事项
//引用作为函数重载的条件
// 函数重载碰到函数默认参数
//

//引用作为函数重载的条件,加不加const可以作为重载条件
void func(int& a)//int &a=10;不合法
{
	cout << "func(int &a)的调用" << endl;
}
void func(const int& a)//const int &a=10;
{
	cout << "func(const int& a)的调用" << endl;
}

// 函数重载碰到函数默认参数
void func2(int a, int b = 10)
{
	cout << "func2(int a,int b)的调用" << endl;
}
void func2(int a)
{
	cout << "func2(int a)的调用" << endl;
}
int main()
{
	int a = 1;
	func(a);

	func(1);

	//func2(1);//当函数重载碰到默认参数会出现二义性，报错，避免出现，可以传两个 func2（1，2）
	system("pause");
	return 0;
}