#include <iostream>
using namespace std;


//继承

// 定义类的时候，下级别的成员除了拥有上一级的共性，还有自己特性
//

////普通实现页面
//class Java
//{
//public:
//	void header()
//	{
//		cout << "公共头部" << endl;
//	}
//	void footer()
//	{
//		cout << "公共底部" << endl;
//	}
//	void left()
//	{
//		cout << "公共分类列表" << endl;
//	}
//    void content()
//	{
//		cout << "Java学科视频" << endl;
//	}
//};
////Python页面
//class Python
//{
//public:
//	void header()
//	{
//		cout << "公共头部" << endl;
//	}
//	void footer()
//	{
//		cout << "公共底部" << endl;
//	}
//	void left()
//	{
//		cout << "公共分类列表" << endl;
//	}
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
////C++的页面
//class Cpp
//{
//public:
//	void header()
//	{
//		cout << "公共头部" << endl;
//	}
//	void footer()
//	{
//		cout << "公共底部" << endl;
//	}
//	void left()
//	{
//		cout << "公共分类列表" << endl;
//	}
//	void content()
//	{
//		cout << "C++学科视频" << endl;
//	}
//};



//继承实现页面
//继承的好处：减少代码量
//语法：class 子类：继承方式 父类
//子类  也成为  派生类
//父类  也成为  基类
//class BasePage
//{
//public:
//	void header()
//		{
//			cout << "公共头部" << endl;
//		}
//		void footer()
//		{
//			cout << "公共底部" << endl;
//		}
//		void left()
//		{
//			cout << "公共分类列表" << endl;
//		}
//};
////Java页面
//class Java :public BasePage
//{
//public:
//	void content()
//		{
//			cout << "Java学科视频" << endl;
//		}
//};
////Python页面
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
////C++页面
//class Cpp :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "C++学科视频" << endl;
//	}
//};
//void test01()
//{
//	cout << "Java下载视频页面如下" << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//
//	cout << "--------------------------"<<endl;
//	cout << "Python下载视频页面如下" << endl;
//	Python p;
//	p.header();
//	p.footer();
//	p.left();
//	p.content();
//
//	cout << "--------------------------" << endl;
//	cout << "C++下载视频页面如下" << endl;
//	Cpp cpp;
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//	cpp.content();
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//继承的基本方式
//继承的语法：class 子类：继承方式 父类
//继承方式:
//        公共继承  父类中私有权限的不可访问，其他照旧不变
//        保护继承  父类中私有权限的不可访问，其他变为保护权限
//        私有继承  父类中私有权限的不可访问，其他变为私有权限
//class Base1
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
////
//class Son1 :public Base1
//{
//public:
//	void func()
//	{
//		m_A = 10;//父类中的公共权限成员  到子类中依然是公共权限
//		m_B = 10;//父类中的保护权限成员  到子类中依然是保护权限
//		//m_C = 10;//父类中的私有权限成员  子类访问不到
//	}
//};
//
//void test01()
//{
//	Son1 s1;
//	s1.m_A = 100;
//	//s1.m_B = 100;//到Son1中m_B是保护权限  类外访问不到
//}
//
////保护继承
//class Base2
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
////
//class Son2 :protected Base2
//{
//public:
//	void func()
//	{
//		m_A = 10;//父类中的公共权限成员  到子类中依然是保护权限
//		m_B = 10;//父类中的保护权限成员  到子类中依然是保护权限
//		//m_C = 10;//父类中的私有权限成员  子类访问不到
//	}
//};
//void test02()
//{
//	Son2 s2;
//	//s1.m_A = 100;//到Son2中m_A变为保护权限  类外访问不到
//	//s1.m_B = 100;//到Son2中m_B变为保护权限  类外访问不到
//}
//
////私有继承
//class Base3
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
////
//class Son3 :private Base3
//{
//public:
//	void func()
//	{
//		m_A = 10;//父类中的公共权限成员  到子类中变为私有权限成员
//		m_B = 10;//父类中的保护权限成员  到子类中变为私有权限成员
//		//m_C = 10;//父类中的私有权限成员  子类访问不到
//	}
//};
//
//class Grandson3 :public Son3
//{
//public:
//	void func()
//	{
//		m_A = 100;//到了Son3中m_A变为私有，即使是儿子也访问不到
//		m_B = 100;//到了Son3中m_B变为私有，即使是儿子也访问不到
//	}
//};
//void test03()
//{
//	Son3 s3;
//	//s1.m_A = 100;//到Son3中m_A变为私有权限  类外访问不到
//	//s1.m_B = 100;//到Son3中m_B变为私有权限  类外访问不到
//}
//int main()
//{
//	test01();
//	test02();
//	test03();
//	system("pause");
//	return 0;
//}




//继承中的对象模型
//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//class Son :public Base
//{
//public:
//	int m_D;
//
//};


//利用开发人员命令提示工具查看对象模型
//跳转盘符  D：
//跳转文件路径 cd具体路径下
//查看命令
//cl /d1（前一个是l，后一个是数字1） cl /d1 reportSingleClassLayout类名 文件名


//void test01()
//{
//	//16
//	// 父类中所有非静态成员属性都会被子类继承下去
//	// 父类中私有成员属性 是被编译器给隐藏了，因此访问不到，但是确实呗继承下去了
//	//
//	cout << "size of Son = " << sizeof(Son) << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}




//继承中的构造和析构顺序
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base的构造函数" << endl;
//	}
//	~Base()
//	{
//		cout << "Base的析构函数" << endl;
//	}
//};
//class Son :public Base
//{
//public:
//	Son()
//	{
//		cout << "Son的构造函数" << endl;
//	}
//	~Son()
//	{
//		cout << "Son的析构函数" << endl;
//	}
//};
//void test01()
//{
//	//Base b1;
//
//
//	//继承中的构造和析构顺序如下
//	//先构造父类，再构造子类，析构的顺序于构造相反
//	Son s1;
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}



//继承同名成员处理方式
//子类对象可以直接访问子类同名成员
//子类对象加作用域可以访问父类同名成员
//
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//	void func()
//	{
//		cout << "Base-func()调用" <<endl;
//	}
//	void func(int a)
//	{
//		cout << "Base-func(int a)调用" << endl;
//	}
//	int m_A;
//};
//class Son :public Base
//{
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//	void func()
//	{
//		cout << "Son-func()调用" << endl;
//	}
//	int m_A;
//};
////同名的成员属性处理
//void test01()
//{
//	Son s;
//	cout << "Son m_A = " << s.m_A << endl;//重名直接访问就是子类的
//	cout << "Base m_A = " << s.Base::m_A << endl;// 如果通过子类对象访问到父类中同名的成员，需要加作用域后
//}
////同名的成员函数处理
//void test02()
//{
//	Son s;
//	s.func();//直接调用，调用的是子类中的同名成员
//
//	//如何调用到父类中同名成员函数？
//	s.Base::func();
//
//
//	//如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有的同名成员函数
//	//如果想访问到父类中被隐藏的同名成员函数，需要加作用域
//	s.Base::func(100);
//}
//int main()
//{
//	/*test01();*/
//	test02();
//	system("pause");
//	return 0;
//}




//继承同名静态成员处理方式
//静态成员和非静态成员出现同名，处理方式一致
//		访问子类同名成员 直接访问即可
//		访问父类同名成员 需要加作用域
//
//class Base
//{
//public:
//	static int m_A;
//	static void func()
//		{
//			cout << "Base-static func()调用" <<endl;
//		}
//};
//int Base::m_A = 100;
//
//class Son :public Base
//{
//public:
//	static int m_A;
//	static void func()
//	{
//		cout << "Son-static func()调用" << endl;
//	}
//};
//int Son::m_A = 200;
//
////同名静态成员属性
//void test01()
//{
//	//通过对象访问
//	Son s;
//	cout << "Son m_A = " << s.m_A << endl;//
//	cout << "Base m_A = " << s.Base::m_A << endl;// 
//
//	//通过类名访问
//	cout << "Son 下 m_A = " << Son::m_A << endl;// 
//	//第一个::代表通过类名方式访问  第二个::代表访问父亲作用域下
//	cout << "Base 下 m_A = " << Son::Base::m_A << endl;// 
//}
////同名静态成员函数
//void test02()
//{
//	//通过对象访问
//	Son s;
//	s.func();
//	s.Base::func();
//	//通过类名访问
//	Son::func();
//
//	//如果子类中出现和父类同名的静态成员函数，也会隐藏掉父类中所有的同名成员函数
//	//如果想访问到父类中被隐藏的同名成员函数，需要加作用域
//	Son::Base::func();
//}
//
//int main()
//{
//	/*test01();*/
//	test02();
//	system("pause");
//	return 0;
//}



//多继承语法
//C++中允许一个类继承多个类
//语法：class 子类：继承方式 父类1，继承方式 父类2....
// 多继承可能引发父类中有同名成员的出现，需要加作用域区分
// 实际开发中不建议用多继承
//
//class Base1
//{
//public:
//	Base1()
//	{
//		m_A = 100;
//	}
//	int m_A;
//};
//class Base2
//{
//public:
//	Base2()
//	{
//		m_A =200;
//	}
//	int m_A;
//};
////子类继承Base1和Base2
//class Son :public Base1,public Base2
//{
//public:
//	Son()
//	{
//		m_C = 300;
//		m_D = 400;
//	}
//	int m_C;
//	int m_D;
//};
//
////同名静态成员属性
//void test01()
//{
//	Son s;
//	cout << "size of Son " << sizeof(Son)<< endl;//
//	//当父类中出现同名成员，需要加作用域区分
//	cout << "Base1:m_A=" << s.Base1::m_A << endl;
//	cout << "Base2:m_A=" << s.Base2::m_A << endl;
//}
//int main()
//{
//	test01();
//	
//	system("pause");
//	return 0;
//}




//菱形继承
//概念：
//两个派生类继承同一个基类
// 又有某个类同时继承这两个派生类
// 

class Animal
{
public:
	int m_Age;
};

//利用虚继承 解决菱形继承的问题
//在继承之前加上关键字virtual变为虚继承
// Animal类称为 虚基类
// vbptr  虚基类指针  指向vbtable
// 
//羊类
class Sheep:virtual public Animal{};

//驼类
class Tuo :virtual public Animal {};

//羊驼类
class SheepTuo :public Sheep, public Tuo {};

void test01()
{
	SheepTuo st;
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;

	//当菱形继承时，两个父类拥有相同的数据，需要加以作用域区分
	cout << "st.Sheep::m_Age=" << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age=" << st.Tuo::m_Age << endl;
	cout << "st.m_Age=" << st.m_Age << endl;
	//这份数据只要一份即可，菱形继承导致数据有两份，资源浪费
}
int main()
{
	test01();

	system("pause");
	return 0;
}