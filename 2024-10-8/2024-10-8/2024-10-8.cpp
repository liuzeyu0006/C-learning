#include <iostream>
using  namespace std;
//int main()
//{
//	cout << "hello world" << endl;
//	system("pause");
//	return 0;
//	
//	
//	//单行注释
//
//	/*多行注释
//	  可换行*/

//变量
//int main()
//{

// int a = 10;
//	cout << "a=" <<a<< endl;
//	system("pause");
//	return 0;

//常量
//#define Day 7
//int main()
//{
//	const int  a= 10;
//	cout << "一周有几天。" << Day<< endl;
//	cout << "a=" << a << endl;
//	system("pause");
//	return 0;
//}


//整型
//#include <climits>
//int main()
//{
//	int num1 = 10;
//	long num2 = 10;
//	long long num3 = 10;
//	short num4 = 10;
//	cout << "num1=" << sizeof(num1)<< endl;
//	cout << "num2=" << sizeof num2 << endl;
//	cout << "num3=" << sizeof num3 << endl;
//	system("pause");
//	return 0;
//} 


//sizeof
//int main()
//{
//
//	system("pause");
//	return 0;
//}

//单精度 float
//双精度 double
//int main()
//{
//	float a = 3.1415926f;//4个字节
//	double b = 3.1415926;//8个字节
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	//只表示六位 3.14159
//	system("pause");
//	return 0;
//}


//字符型
//int main()
//{
//	char ch = 'a';
//	cout << ch << endl;
//	cout << sizeof(ch) << endl;
//	//单引号 单引号内只能有一个字符
//	cout << (int)ch<<endl;//查看ASCII值
//	system("pause");
//	return 0;
//}


////转义字符
////  \n换行  \\反斜杠  \t水平制表符:整齐输出数据
//int main()
//{
//	cout << "aaaa\thello" << endl;
//	cout << "aa\thello" << endl;
//	cout << "aaaaaa\thello" << endl;
//	system("pause");
//	return 0;
//}


//字符串
//#include <string>//c++风格字符串要包含这个头文件
//int main()
//{
//	//c风格：[] 双引号
//	char str[] = "hello";
//	cout << str << endl;
//	
//	
//	//C++风格：包含头文件<string>
//	string str2 = "hello world";
//	cout << str2 << endl;
//	system("pause");
//	return 0;
//}

//bool数据类型
//int main()
//{
//	bool flag1 = true;
//	cout << flag1 << endl;//1真
//	bool flag2 = false;
//	cout << flag2 << endl;//0假
//	cout << "bool类型所占空间为；" << sizeof(flag2) << endl;
//	system("pause");
//	return 0;
//}

//数据的输入
int main()
{
	//整型
	int a = 0;
	cout << "请给a进行赋值：" << endl;
	cin >> a;
	cout << "a的值为：" << a << endl;
	//浮点型
	//字符串型：得注意添加头文件
	//字符型
	//bool型
	system("pause");
	return 0;
}