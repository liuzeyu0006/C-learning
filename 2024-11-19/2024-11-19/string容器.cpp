#include <iostream>
using namespace std;
//string基本概念
//本质 :
//。string是C++风格的字符串，而string本质上是一个类
//string和char * 区别 :
//	。char * 是一个指针
//	。string是一个类，类内部封装了char * ，管理这个字符串，是一个char * 型的容器。
//特点 :
//string 类内部封装了很多成员方法」
//例如 : 查找find，拷贝copy，删除delete替换replace，插入insert
//string管理char * 所分配的内存，不用担心复制越界和取值越界等，由类内部进行负责

//string构造函数
//构造函数原型 :
//string();					创建一个空的字符串 例如 : string str;
//string(const char* s);		使用字符串s初始化
//string(const string& str);	使用一个string对象初始化另一个string对象
//string(it n, char c);		使用n个字符c初始化


//string的构造函数
//void test01()
//{
//	string s1;//默认构造
//
//	const char* str = "hello world";
//	string s2(str);
//	cout << "s2= " << s2 << endl;
//
//	string s3(s2);
//	cout << "s3= " << s3 << endl;
//
//	string s4(10, 'a');
//	cout << "s4= " << s4 << endl;
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//-----------------------------------------

//string赋值操作
//功能描述 :
//。给string字符串进行赋值
//赋值的函数原型 :
//string & operator=(const char* s);		//char*类型字符串 赋值给当前的字符串
//string& operator=(const string& s);		//把字符串s赋给当前的字符串
//string& operator=(char c);				//字符赋值给当前的字符串
//string& assign(const char* s);			//把字符串s赋给当前的字符串
//string& assign(const char* s, int n);	//把字符串s的前n个字符赋给当前的字符串
//string& assign(const string& s);		//把字符串s赋给当前字符串
//string& assign(int n, char c);			//用n个字符c赋给当前字符串

//void test01()
//{
//	//string & operator=(const char* s);
//	string str1;
//	str1 = "hello world";
//	cout << "str1= " << str1 << endl;
//
//	//string& operator=(const string& s);
//	string str2;
//	str2 = str1;
//	cout << "str2= " << str2 << endl;
//
//	//string& operator=(char c);			
//	string str3;
//	str3 = 'a';
//	cout << "str3= " << str3 << endl;
//
//	//string& assign(const char* s);
//	string str4;
//	str4.assign("hello C++");
//	cout << "str4= " << str4 << endl;
//
//	//string& assign(const char* s, int n);	
//	string str5;
//	str5.assign("hello C++",5);
//	cout << "str5= " << str5 << endl;
//
//	//string& assign(const string& s);
//	string str6;
//	str6.assign(str5);
//	cout << "str6= " << str6 << endl;
//
//	//string& assign(int n, char c);
//	string str7;
//	str7.assign(10,'w');
//	cout << "str7= " << str7 << endl;
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//--------------------------------------------------------------------------------------------

//string字符串拼接T
//功能描述 :
//实现在字符串末尾拼接字符串
//函数原型 :
//string & operator+=(const char* str);			//重载+=操作符
//string& operator+=(const char c);				//重载+=操作符
//string& operator+=(const string& str);			//重载+=操作符
//string& append(const char* s);					//把字符串s连接到当前字符串结尾
//string& append(const char* s, int n);			//把字符串s的前n个字符连接到当前字符串结尾
//string& append(const string& s);				//同operator+=(const string& str)
//string& append(const string& s，int pos,int n);	//字符串s中从p0s开始的n个字符连接到字符串结尾


//void test01()
//{
//	string str1 = "我";
//	str1 += "爱玩游戏";
//	cout << "str1= " << str1 << endl;
//
//	str1 += ':';
//	cout << "str1= " << str1 << endl;
//
//	string str2 = "LOL DNF";
//	str1 += str2;
//	cout << "str1= " << str1 << endl;
//
//	string str3 = "I ";
//	str3.append("love ");
//	cout << "str3= " << str3 << endl;
//
//	str3.append("game abcde",4);
//	cout << "str3= " << str3 << endl;
//
//	str3.append(str2);
//	cout << "str3= " << str3 << endl;
//
//	//str3.append(str2,0,3);//只截取前LOL
//	str3.append(str2, 4, 3); //只截取前DNF
//	cout << "str3= " << str3 << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//-----------------------------------------------------
//string查找和替换
//功能描述 :
//查找 : 查找指定字符串是否存在
//替换 : 在指定的位置替换字符串
//函数原型 :
//int find(const string & str, int pos = 0)const;		//查找str第-次出现位置,从pos开始查找
//int find(const char* s, int pos = 0)const;			//查找s第一次出现位置,从pos开始查找
//int find(const char* s, int pos, int n)const;		//从pos位置查找s的前n个字符第一次位置
//int find(const char c, int pos = 0)const;			//查找字符c第一次出现位置
//int rfind(const string& str, int pos = npos)const;	//查找str最后一次位置,从pos开始查找
//int rfind(const char* s, int pos = npos)const;		//查找s最后一次出现位置,从pos开始查找	
//int rfind(const char* s, int pos, int n)const;		//从pos查找s的前n个字符最后一次位置
//int rfind(const charc, int pos = 0)const;			//查找字符c最后一次出现位置
//string& replace(int pos, int n, const string& str); //替换从pos开始n个字符为字符串str
//string& replace(int pos, int n, const char* s);		//替换从pos开始的n个字符为字符串s		

//查找
//void test01()
//{
//	string str1 = "abcdefg";
//	int pos = str1.find("de");//de位置固定为下标3、4.
//	if (pos == -1)
//	{
//		cout << "未找到字符串" << endl;
//	}
//	else
//	{
//		cout << "pos=" << pos << endl;
//	}
//
//	//rfind find 的区别
//	//rfind是从右往左查找，find是从左往右查找
//	pos = str1.rfind("de");
//	cout << "pos=" << pos << endl;
//}
//
////替换
//void test02()
//{
//	string str1 = "abcdefg";
//	str1.replace(1, 3, "1111");//a1111efg
//	cout << "str1=" << str1 << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}

//----------------------------------

//string字符串比较
//功能描述 :
//字符串之间的比较
//比较方式 :
//。字符串比较是按字符的ASCII码进行对比
//= 返回 0
//> 返回 1
//< 返回 - 1
//函数原型:
//int compare(const string & s)const;//与字符串s比较
//int compare(const char* s)const; //与字符串s比较

//void  test01()
//{
//	string str1 = "hello world";
//	string str2 = "xello world";
//	if (str1.compare(str2) == 0)
//	{
//		cout << "str1 等于 str2" << endl;
//	}
//	else if (str1.compare(str2) > 0)
//	{
//		cout << "str1 大于 str2" << endl;
//	}
//	else
//	{
//		cout << "str1 小于 str2" << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//-----------------------------------------------
//string字符存取
//string中单个字符存取方式有两种
//char& operator[](int n);//通过[]方式取字符
//char& at(int n);//通过at方法获取字符

//void test01()
//{
//	string str = "hello";
//	cout << "str=" << str << endl;
//	//1、char& operator[](int n);//通过[]方式取字符
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str[i] << " ";
//	}
//	cout << endl;
//	//2、char& at(int n);//通过at方法获取字符
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str.at(i) << " ";
//	}
//	cout << endl;
//
//	//修改单个字符
//	str[0] = 'x';
//	//xello
//	cout << "str=" << str << endl;
//	str.at(1) = 'x';
//	//xxllo
//	cout << "str=" << str << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//-------------------------------------
//string插入和删除
//功能描述 :
//。对string字符串进行插入和删除字符操作
//函数原型 :
//string & insert(int pos, const char* s);		//插入字符串
//string& insert(int pos, const string& str);		//插入字符串
//string& insert(int pos, int n, char c);			//在指定位置插入n个字符c
//string& erase(int pos, int n = npos);			//删除从Pos开始的n个字符

//void test01()
//{
//	string str = "hello";
//	//插入
//	str.insert(1, "111");
//	cout << "str=" << str << endl;
//
//	//删除
//	str.erase(1,3);
//	cout << "str=" << str << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//----------------------------------------------------
//string子串
//功能描述 :
//从字符串中获取想要的子串
//函数原型 :
//string substr(int pos = 8，intn = npos)const; //返回由pOS开始的n个字符组成的字符串

//void test01()
//{
//	string str = "abcdef";
//	string subStr = str.substr(1, 3);
//	cout << "subStr=" << subStr << endl;
//}
////实用操作
//void test02()
//{
//	string email = "lisi@sina.com";
//	//从邮件中截取用户名
//	int pos = email.find("@");
//	cout << pos << endl;
//
//	string userName = email.substr(0, pos);
//	cout << userName << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}