#include <iostream>
using namespace std;

//在多态中，父类中的虚函数的实现是毫无意义的，主要都是调用 子类重写的内容
// 可以将虚函数改为纯虚函数
// 纯虚函数语法：virtual 返回值类型 函数名 （参数列表）=0；
// 当类中有了纯虚函数，这个类也称为抽象类
// 
// 抽象类的特点：
//				无法实例化对象
//				子类必须重写抽象类中的纯虚函数，否则也属于抽象类
//

//class Base
//{
//public:
//	//纯虚函数
//	virtual void func() = 0;
//
//};
//
//class Son :public Base
//{
//public:
//	virtual void func() 
//	{
//		cout << "func函数的调用" << endl;
//	};
//};
//void test01()
//{
//	//Base b;//抽象类无法实例化对象
//	//new Base;//抽象类无法实例化对象
//
//	//Son s;//子类不重写纯虚函数是不行的，无法实例化对象
//
//	Base* base = new Son;
//	base->func();
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//多态案例2--制作饮品
//利用多态技术，提供抽象类制作饮料的基类，提供子类制作咖啡和茶叶
//class AbstractDrinking
//{
//public:
//	//煮水
//	virtual void Boil() = 0;
//
//	//冲泡
//	virtual void Brew() = 0;
//
//	//倒入杯中
//	virtual void PourInCup() = 0;
//
//	//加入辅料
//	virtual void PutSomething() = 0;
//
//	void MakeDrink()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//
//
////制作咖啡
//class Coffee :public AbstractDrinking
//{
//public:
//	//煮水
//	virtual void Boil()
//	{
//		cout << "煮农夫山泉" << endl;
//	}
//
//	//冲泡
//	virtual void Brew()
//	{
//		cout << "冲泡咖啡" << endl;
//	}
//
//	//倒入杯中
//	virtual void PourInCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//
//	//加入辅料
//	virtual void PutSomething()
//	{
//		cout << "加入糖和牛奶" << endl;
//	}
//};
//
////制作茶
//class Tea :public AbstractDrinking
//{
//public:
//	//煮水
//	virtual void Boil()
//	{
//		cout << "煮阳泉水" << endl;
//	}
//
//	//冲泡
//	virtual void Brew()
//	{
//		cout << "冲泡茶叶" << endl;
//	}
//
//	//倒入杯中
//	virtual void PourInCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//
//	//加入辅料
//	virtual void PutSomething()
//	{
//		cout << "加入枸杞" << endl;
//	}
//};
//void doWork(AbstractDrinking* abs)
//{
//	abs->MakeDrink();
//	delete abs;//释放
//}
//void test01()
//{
//	//制作咖啡
//	//AbstractDrinking* abs=Coffee
//	doWork(new Coffee);//堆区的数据，需要释放
//
//	cout << "------------" << endl;
//
//	//制作茶
//	doWork(new Tea);//堆区的数据，需要释放
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//虚析构和纯虚析构
//多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码
//解决方式 : 将父类中的析构函数改为虚析构或者纯虚析构
//虚析构和纯虚析构共性 :
//						·可以解决父类指针释放子类对象
//						·都需要有具体的函数实现
//虚析构和纯虚析构区别 :
//						·如果是纯虚析构，该类属于抽象类，无法实例化对象


//总结:
//1.虚析构或纯虚析构就是用来解决通过父类指针释放子类对象
//2.如果子类中没有堆区数据，可以不写为虚析构或纯虚析构
//3.拥有纯虚析构函数的类也属于抽象类
//class Animal
//{
//public:
//
//	Animal()
//	{
//		cout << "Animal构造函数调用" << endl;
//	}
//	//利用虚析构可以和解决  父类指针释放子类对象时不干净的问题
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal析构函数调用" << endl;
//	//}
//
//	//纯虚析构  需要声明也需要实现
//	//有了纯虚析构之后，这个类也属于抽象类，无法实例化对象
//	virtual ~Animal() = 0;
//
//	//纯虚函数
//	virtual void speak() = 0;
//
//};
//Animal::~Animal()
//{
//	cout << "Animal的纯虚析构函数调用" << endl;
//}
//class Cat :public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat构造函数调用" << endl;
//		m_Name=new string(name);
//	}
//	virtual void speak()
//	{
//		cout <<*m_Name <<"小猫在说话" << endl;
//	}
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "Cat析构函数调用" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//	string *m_Name;
//};
//void test01()
//{
//	Animal* animal = new Cat("Tom");
//	animal->speak();
//	//父类指针在析构时候  不会调用子类中析构函数，导致子类如果有堆区属性，出现内存泄露
//	//把父类虚构改为虚析构
//	delete animal;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}





//多态案例三：电脑组装

//电脑主要组成部件为 CPU(用于计算)，显卡(用于显示)，内存条(用于存储)
//将每个零件封装出抽象基类，并且提供不同的厂商生产不同的零件，例如Intel厂商和Lenovo厂商
//创建电脑类提供让电脑工作的函数，并且调用每个零件工作的接口
//测试时组装三台不同的电脑进行工作

//抽象CPU类
class CPU
{
public:
	//抽象的计算函数
	virtual void calculate() = 0;
};
//抽象显卡类
class VideoCard
{
public:
	//抽象的显示函数
	virtual void display() = 0;
};
//抽象内存条类
class Memory
{
public:
	//抽象的存储函数
	virtual void storage() = 0;
};

//电脑类
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	//提供工作的函数
	void work()
	{
		//让零件工作起来，调用接口
		m_cpu->calculate();

		m_vc->display();

		m_mem->storage();
	}
	//提供析构函数  释放3个电脑零件
	~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}
private:
	CPU* m_cpu;//CPU的指针
	VideoCard* m_vc;//显卡的指针
	Memory* m_mem;//内存条的指针
};

//具体的厂商
//Intel厂商
class IntelCPU:public CPU
{
public:
	virtual void calculate()
	{
		cout << "Intel的CPU开始计算了" << endl;
	}
};
class IntelVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Intel的显卡开始显示了" << endl;
	}
};
class IntelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Intel的内存条开始存储了" << endl;
	}
};

//联想厂商
class LenovoCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Lenovo的CPU开始计算了" << endl;
	}
};
class LenovoVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo的显卡开始显示了" << endl;
	}
};
class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo的内存条开始存储了" << endl;
	}
};

void test01()
{
	//第一台电脑的零件
	CPU* intelCpu = new IntelCPU;
	VideoCard* intelCard = new IntelVideoCard;
	Memory* intelMem = new IntelMemory;

	//创建第一台电脑
	Computer* computer1 = new Computer(intelCpu, intelCard, intelMem);
	computer1->work();
	delete computer1;

	cout << "----------------" << endl;
	//创建第二台电脑
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->work();
	delete computer2;

	cout << "----------------" << endl;
	//创建第三台电脑
	Computer* computer3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);
	computer3->work();
	delete computer3;
}
int main()
{
	test01();
	system("pause");
	return 0;
}