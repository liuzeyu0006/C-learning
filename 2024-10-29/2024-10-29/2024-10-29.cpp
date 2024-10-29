#include <iostream>
using namespace std;


//多态
//多态分为两类：
//				静态多态：函数重载和运算符重载属于静态多态，复用函数名
//				动态多态：派生类和虚函数实时运行时多态
// 静态多态与动态多态的区别：
//							静态多态的函数地址早绑定-编译阶段确定函数地址
//							动态多态的函数地址晚绑定-运行阶段确定函数地址
//

//class Animal
//{
//public:
//	//实现晚绑定加入关键字virtual;
//	 virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
////猫类
//class Cat :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小猫在说话" << endl;
//	}
//};
////狗类
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小狗在说话" << endl;
//	}
//};
////执行说话的函数
////地址早绑定   在编译阶段确定函数地址
////如果想执行猫说话，那么这个函数的地址就不能提前绑定，需要子啊运行阶段绑定，地址晚绑定
//
////多态的满足条件
////1、有继承关系
////2、子类重写父类的虚函数  重写：函数返回值类型  函数名  参数列表  完全相同
//
////动态多态的使用
//// 父类的指针或者引用  指向子类对象  Animal&animal=cat
//void doSpeak(Animal&animal)
//{
//	animal.speak();
//}
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);
//
//	Dog dog;
//	doSpeak(dog);
//
//}
//int main()
//{
//
//	test01();
//
//	system("pause");
//	return 0;
//}



//多态的原理
//class Animal
//{
//public:
//	//写上关键字virtual,会多出来一个vfptr指向vftable
//	void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
////猫类
//class Cat :public Animal
//{
//public:
//	//当子类重写父类的虚函数时
//	//子类中的虚函数表内部会替换成子类的虚函数地址
//	//即由  &Animal::speak ->&Cat::speak
//	//父类虚函数不会变
//	void speak()
//	{
//		cout << "小猫在说话" << endl;
//	}
//};
////狗类
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小狗在说话" << endl;
//	}
//};
//void doSpeak(Animal& animal)
//{
//	animal.speak();
//}
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);
//
//	Dog dog;
//	doSpeak(dog);
//
//}
//void test02()
//{
//	//不加virtual,空类的大小为1
//	//加virtual，大小为4
//	cout << "size of animal=" << sizeof(Animal) << endl;
//}
//int main()
//{
//
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}





//案例1 计算机类
//分别利用普通写法和多态技术，设计实现两个操作数进行运算的计算器
#include <string>
//class Calculator
//{
//public:
//
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return m_Num1 + m_Num2;
//		}
//		else if (oper == "-")
//		{
//			return m_Num1 - m_Num2;
//		}
//		else if (oper == "*")
//		{
//			return m_Num1 * m_Num2;
//		}
//		//如果想增加操作，需要对源码进行修改
//		//在真实开发中，提倡  开闭原则
//		//开闭原则：对扩展进行开发，对修改进行关闭
//	}
//	int m_Num1;
//	int m_Num2;
//};
//void test01()
//{
//	Calculator c;
//	c.m_Num1 = 10;
//	c.m_Num2 = 10;
//
//	cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
//	cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
//	cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
//}



//利用多态来实现计算器
//优点：
//		组织结构清晰
//		可读性强
//      对于前后期的扩展和维护性高

//实现计算器的抽象类
class AbstractCalculator
{
public:
	virtual int getResult()
	{
		return 0;
	}
	int m_Num1;
	int m_Num2;
};
//加法计算器的类
class AddCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};

//减法计算器的类
class SubCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};

//乘法计算器的类
class MulCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};
void test02()
{
	//多态的使用条件：父类指针或者引用指向子类对象
	AbstractCalculator* abc = new AddCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;

	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
	//用完记得销毁
	delete abc;

	//减法运算
	abc = new SubCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;

	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;

	//乘法运算
	abc = new MulCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;

	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;
}
int main()
{
	test02();
	system("pause");
	return 0;
}