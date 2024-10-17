#include <iostream>
using namespace std;


//对象的初始化和清理
//初始化：构造函数，主要作用在于创建函数时为对象的成员函数赋值
//清理：析构函数，主要作用在于对象销毁前系统自动调用，执行一些清理工作
//构造函数和析构函数是编译器自动调用，完成对象初始化和清理工作
//若我们不提供构造和析构，编译器会提供
//编译器提供的构造函数和析构函数是空函数

//构造函数：类名（）{}
//构造函数，没有返回值也不写void
// 函数名与类名相同
// 构造函数可以有参数，因此可以发生重载
// 程序在调用对象时候自动调用构造，无需手动调用，且只会调用一次

//析构函数：~类名（）{}
//构造函数，没有返回值也不写void
// 函数名与类名相同，在名称前加上符号~
// 构造函数不可以有参数，因此不可以发生重载
// 程序在对象销毁前会自动调用析构，无需手动调用，且只会调用一次

//初始化：构造函数
//class Person
//{
//public:
//	//1.构造函数
//	Person()
//	{
//		cout << "Person构造函数的调用" << endl;
//	}
//	//2.析构函数
//	~Person()
//	{
//		cout << "Person析构函数的调用" << endl;
//	}
//
//};
//
//void test01()
//{
//	Person p;//栈上的数据，test01执行完毕就会释放，释放这个对象
//}
//int main()
//{
//	test01();
//	//Person p;//不会被释放，请按任意键继续后，会瞬间释放
//
//	system("pause"); \
//		return 0;
//}


//构造函数的分类以及调用
//两种分类方式：按参数分为：有参构造（默认构造）和无参构造
//              按类型分为：普通构造和拷贝构造
// 三种调用方式： 括号法
//                显示法
//                隐式转换法
//

//class Person
//{
//public:
//	//1.构造函数
//	Person()
//	{
//		cout << "Person无参构造函数的调用" << endl;
//	}
//	Person(int a)
//	{
//		age = a;
//		cout << "Person有参构造函数的调用" << endl;
//	}
//	//拷贝构造函数
//	Person(const Person &p)
//	{
//		cout << "Person拷贝构造函数的调用" << endl;
//		age = p.age;
//	}
//	//2.析构函数
//	~Person()
//	{
//		cout << "Person析构函数的调用" << endl;
//	}
//	int age;
//};
//
////调用
//void test01()
//{
	//1.括号法
	//Person p1;//默认构造函数调用
	//Person p2(10);//有参构造调用
	//Person p3(p2);//拷贝构造函数
	
	//注意事项
	//调用默认构造函数时，不要加（）
	//Person p1（）;编译器会认为是一个函数的声明，不会认为在创建对象


	/*cout << "p2的年龄是：" << p2.age << endl;
	cout << "p3的年龄是：" << p3.age << endl;*/

	//2.显示法
	//Person p1;
	//Person p2 = Person(10);//有参构造
	//Person p3 = Person(p2);//拷贝构造

	//单独把右侧Person(10)拿出来叫匿名对象，起的名字在左侧叫p2
	// 匿名对象特点：当前执行结束后，系统会立即回收掉匿名对象
	//注意事项：
	// 不要利用拷贝构造函数初始化匿名对象,编译器会认为Person(p3)===Person p3，是个对象的声明
	//Person(p3);//重定义了
	
	//3.隐式转换法
//	Person p4 = 10;//相当于写了Person p4=Person(10);
//	Person p5 = p4;//拷贝构造
//}
//int main()
//{
//	test01();
//	//Person p;//不会被释放，请按任意键继续后，会瞬间释放
//
//	system("pause"); \
//		return 0;
//}



//拷贝构造函数调用时机
//1、使用一个已经创建完毕的对象来初始化一个新对象
//2、值传递的方式给函数参数传值
//3、以值方式返回局部对象
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person的默认构造调用" << endl;
//	}
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//	Person(int age)
//	{
//		cout << "Person的有参构造函数调用" << endl;
//		m_Age = age; 
//	}
//	Person(const Person& p)
//	{
//		cout << "Person的拷贝构造函数调用" << endl;
//		m_Age = p.m_Age;
//	}
//	int m_Age;
//};
////1、使用一个已经创建完毕的对象来初始化一个新对象
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//	cout << "p2的年龄为：" << p2.m_Age << endl;
//}
////2、值传递的方式给函数参数传值
//void doWork(Person p)
//{
//
//}
//void test02()
//{
//	Person p;//默认构造
//	doWork(p);//值传递也就是拷贝，会调用拷贝构造函数
//}
////3、以值方式返回局部对象
//Person doWork2()
//{
//	Person p1;//默认构造
//	cout << (int*)&p1 << endl;
//	return p1;//按照p1拷贝一个新的对象返回回去，会有拷贝构造函数调用
//}
//void test03()
//{
//	Person p = doWork2();
//	cout << (int*)&p << endl;
//}
//int main()
//{
//	/*test01();*/
//	//test02();
//	test03();
//system("pause");
//return 0;
//}



//构造函数调用规则
//默认情况下，c++编译器至少给出一个类添加3个函数
// 1、默认构造函数（无参，函数体为空）
// 2、默认析构函数（无参，函数体为空）
// 3、默认拷贝构造函数，对属性进行值拷贝

// 构造函数调用规则
// 如果用户定义有参构造函数，c++不再提供默认无参构造，但是会提供默认拷贝构造
// 如果用户定义拷贝构造函数，c++不会再提供其他构造函数


//class Person
//{
//public:
//	/*Person()
//	{
//		cout << "Person的默认构造函数调用" << endl;
//	}*/
//	Person(int age)
//	{
//		cout << "Person的有参构造函数调用" << endl;
//		m_Age = age;
//	}
//	/*Person(const Person& p)
//	{
//		cout << "Person的拷贝构造函数调用" << endl;
//		m_Age = p.m_Age;
//	}*/
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//	int m_Age;
//};
////void test01()
////{
////	Person p;
////	p.m_Age = 18;
////
////	Person p2(p);
////	cout << "p2的年龄是：" <<p.m_Age<< endl;
////
////}
//void test02()
//{
//	//Person p;//用户自己写了有参构造函数，编译器不再提供默认构造函数，会报错
//	Person p(28);//没有写拷贝构造，编译器也会写一个拷贝构造函数进行值传递
//	Person p2(p);
//	cout << "p2的年龄是：" << p2.m_Age << endl;
//}
//int main()
//{
//	/*test01();*/
//	test02();
//	system("pause");
//	return 0;
//}



//深拷贝和浅拷贝
//浅拷贝：简单的赋值拷贝操作
//深拷贝：在堆区重新申请空间，进行拷贝操作

//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person的默认构造函数调用" << endl;
//	}
//	Person(int age,int height)
//	{
//		m_Age = age;
//		m_Height=new int(height);//在堆区new了一块空间
//
//		cout << "Person的有参构造函数调用" << endl;
//	}
//	//自己实现拷贝构造函数，解决浅拷贝堆区开辟的空间被重复释放的问题
//	Person(const Person &p)
//	{
//		cout << "Person拷贝构造函数的调用" << endl;
//		m_Age = p.m_Age;
//		//m_Height = p.m_Height;编译器默认实现这行代码
//		//深拷贝操作
//		m_Height = new int(*p.m_Height);
//	}
//	~Person()
//	{
//		//析构代码，将堆区开辟的数据做释放操作
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "Person的析构函数调用" << endl;
//	}
//	int m_Age;
//	int* m_Height;
//};
//
//void test01()
//{
//	Person p1(18,160);
//	cout << "p1的年龄是：" << p1.m_Age <<"身高为："<<*p1.m_Height << endl;
//
//	Person p2(p1);//现进后出，p2会先析构，完事p1才析构。
//				  //这就会导致m_height指向的这块空间先被p2释放，后又被p1释放，操作非法，即浅拷贝导致堆区的数据重复释放
//				  //利用深拷贝进行解决，自己写一个拷贝函数，在堆区再申请一块空间用于拷贝
//	cout << "p2的年龄是：" << p2.m_Age << "身高为：" << *p2.m_Height << endl;//年龄也是18，虽然没写拷贝调用函数，但是编译器进行了浅拷贝
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//初始化列表语法，用来初始化属性
//语法：构造函数（）：属性1（值1），属性2（值2）...{}

//class Person
//{
//public:
//	//传统初始化操作
//	//Person(int a,int b,int c)
//	//{
//	//	m_A=a;
//	//	m_B=b;
//	//	m_C=c;
//	//}
//
//	//初始化列表初始化属性
//	Person() :m_A(10), m_B(20), m_C(30)
//	{
//
//	}
//	//更灵活的写法：
//	Person(int a,int b,int c) :m_A(a), m_B(b), m_C(c)
//	{
//
//	}
//	int m_A;
//	int m_B;
//	int m_C;
//	
//};
//void test01()
//{
//	/*Person p(10,20,30);*/
//
//	//Person p;
//	Person p(10, 20, 30);
//	cout << "m_A=" << p.m_A << endl;
//	cout << "m_B=" << p.m_B << endl;
//	cout << "m_C=" << p.m_C << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}




//类对象作为类成员

//C++类中的成员可以作为另一个类的对象，称该成员为对象成员
//class A {};
//class B {
//	A a;
//};
//B类中有对象A作为成员，A为对象成员
//在创建B对象时，A与B的构造和析构的顺序是谁先谁后？


//手机类

//class Phone
//{
//public:
//	Phone(string pName)
//	{
//		m_PName = pName;
//		cout << "Phone的构造函数调用" << endl;
//	}
//	~Phone()
//	{
//		cout << "Phone的析构函数调用" << endl;
//	}
//	string m_PName;
//};
////人类
//
//class Person
//{
//public:
//	//Phone m_Phone = pName  隐式转换法
//	Person(string name, string pName) :m_Name(name), m_Phone(pName)
//	{
//		cout << "Person的构造函数调用" << endl;
//	}
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//	//姓名
//	string m_Name;
//	//手机
//	Phone m_Phone;
//};
//
////当其他类对象作为本类成员，构造时先构造类对象，再构造自身
////析构的顺序与构造相反
//void test01()
//{
//	Person p("张三", "苹果Max");
//	cout << p.m_Name << "拿着" << p.m_Phone.m_PName << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}




//静态成员
//静态成员就是在成员变量和成员函数前加上关键字static，成为静态成员
// 静态成员分为：
// 静态成员变量
//				所有对象共享同一份数据
//				在编译阶段分配内存，分配在全局区
//				类内声明，类外初始化
// 静态成员函数
//				所有对象共享同一个函数
//				静态成员函数只能访问静态成员变量
//


// 静态成员变量
//class Person
//{
//public:
//	//类内声明
//	static int m_A;
//	
//private:
//	//静态变量也是有访问权限的,类外访问不到了
//	static int m_B;//注意：类内声明，类外要初始化
//
//};
////类外初始化
//int Person::m_A = 100;
//int Person::m_B = 200;
////void test01()
////{
////	Person p;
////	cout << p.m_A << endl;
////
////	Person p2;
////	p2.m_A = 200;//所有对象共享一份数据，改为200，就都是200了
////	cout << p.m_A << endl;
////}
//void test02()
//{
//	//静态成员变量 不属于某个对象上，所有对象都共享同一份数据
//	//因此静态成员变量有两种访问方式
//
//	//1、通过对象进行发访问
//	//Person p;
//	//cout << p.m_A << endl;
//	//2、通过类名进行访问
//	cout << Person::m_A << endl;//类的名称加双冒号就可访问
//	//cout << Person::m_B << endl; //类外访问不到私有的静态成员变量
//}
//int main()
//{
//	/*test01();*/
//	test02();
//	system("pause");
//	return 0;
//}


// 静态成员函数
//				所有对象共享同一个函数
//				静态成员函数只能访问静态成员变量

//class Person
//{
//public:
//	//静态成员函数
//	static void func()
//	{
//		m_A = 100;//静态成员函数 可以访问 静态的成员变量
//		//m_B = 200; //静态成员函数 不可以访问 非静态的成员变量，无法区分到底是哪个对象的m_B的属性
//		cout << "static void func的调用" << endl;
//	}
//	static int m_A;//静态的成员变量，类内声明
//	int m_B; //非静态的成员变量
//
//	//静态成员函数也是有访问权限的
//private:
//	static void func2()
//	{
//		cout << "static void func2的调用" << endl;
//	}
//};
//int Person::m_A = 0;
//void test01()
//{
//	//有两种访问方式
//	//1、通过对象进行发访问
//	Person p;
//	p.func();
//	//2、通过类名进行访问
//	Person::func();
//
//
//	//Person::func2();//静态成员函数也是有访问权限的,类外访问不到私有的静态成员函数
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}