#include <iostream>
using namespace std;

//�ڶ�̬�У������е��麯����ʵ���Ǻ�������ģ���Ҫ���ǵ��� ������д������
// ���Խ��麯����Ϊ���麯��
// ���麯���﷨��virtual ����ֵ���� ������ �������б�=0��
// ���������˴��麯���������Ҳ��Ϊ������
// 
// ��������ص㣺
//				�޷�ʵ��������
//				���������д�������еĴ��麯��������Ҳ���ڳ�����
//

//class Base
//{
//public:
//	//���麯��
//	virtual void func() = 0;
//
//};
//
//class Son :public Base
//{
//public:
//	virtual void func() 
//	{
//		cout << "func�����ĵ���" << endl;
//	};
//};
//void test01()
//{
//	//Base b;//�������޷�ʵ��������
//	//new Base;//�������޷�ʵ��������
//
//	//Son s;//���಻��д���麯���ǲ��еģ��޷�ʵ��������
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



//��̬����2--������Ʒ
//���ö�̬�������ṩ�������������ϵĻ��࣬�ṩ�����������ȺͲ�Ҷ
//class AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil() = 0;
//
//	//����
//	virtual void Brew() = 0;
//
//	//���뱭��
//	virtual void PourInCup() = 0;
//
//	//���븨��
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
////��������
//class Coffee :public AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "��ũ��ɽȪ" << endl;
//	}
//
//	//����
//	virtual void Brew()
//	{
//		cout << "���ݿ���" << endl;
//	}
//
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//
//	//���븨��
//	virtual void PutSomething()
//	{
//		cout << "�����Ǻ�ţ��" << endl;
//	}
//};
//
////������
//class Tea :public AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "����Ȫˮ" << endl;
//	}
//
//	//����
//	virtual void Brew()
//	{
//		cout << "���ݲ�Ҷ" << endl;
//	}
//
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//
//	//���븨��
//	virtual void PutSomething()
//	{
//		cout << "�������" << endl;
//	}
//};
//void doWork(AbstractDrinking* abs)
//{
//	abs->MakeDrink();
//	delete abs;//�ͷ�
//}
//void test01()
//{
//	//��������
//	//AbstractDrinking* abs=Coffee
//	doWork(new Coffee);//���������ݣ���Ҫ�ͷ�
//
//	cout << "------------" << endl;
//
//	//������
//	doWork(new Tea);//���������ݣ���Ҫ�ͷ�
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//�������ʹ�������
//��̬ʹ��ʱ����������������Կ��ٵ���������ô����ָ�����ͷ�ʱ�޷����õ��������������
//�����ʽ : �������е�����������Ϊ���������ߴ�������
//�������ʹ����������� :
//						�����Խ������ָ���ͷ��������
//						������Ҫ�о���ĺ���ʵ��
//�������ʹ����������� :
//						������Ǵ����������������ڳ����࣬�޷�ʵ��������


//�ܽ�:
//1.�������������������������ͨ������ָ���ͷ��������
//2.���������û�ж������ݣ����Բ�дΪ��������������
//3.ӵ�д���������������Ҳ���ڳ�����
//class Animal
//{
//public:
//
//	Animal()
//	{
//		cout << "Animal���캯������" << endl;
//	}
//	//�������������Ժͽ��  ����ָ���ͷ��������ʱ���ɾ�������
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal������������" << endl;
//	//}
//
//	//��������  ��Ҫ����Ҳ��Ҫʵ��
//	//���˴�������֮�������Ҳ���ڳ����࣬�޷�ʵ��������
//	virtual ~Animal() = 0;
//
//	//���麯��
//	virtual void speak() = 0;
//
//};
//Animal::~Animal()
//{
//	cout << "Animal�Ĵ���������������" << endl;
//}
//class Cat :public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat���캯������" << endl;
//		m_Name=new string(name);
//	}
//	virtual void speak()
//	{
//		cout <<*m_Name <<"Сè��˵��" << endl;
//	}
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "Cat������������" << endl;
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
//	//����ָ��������ʱ��  �����������������������������������ж������ԣ������ڴ�й¶
//	//�Ѹ����鹹��Ϊ������
//	delete animal;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}





//��̬��������������װ

//������Ҫ��ɲ���Ϊ CPU(���ڼ���)���Կ�(������ʾ)���ڴ���(���ڴ洢)
//��ÿ�������װ��������࣬�����ṩ��ͬ�ĳ���������ͬ�����������Intel���̺�Lenovo����
//�����������ṩ�õ��Թ����ĺ��������ҵ���ÿ����������Ľӿ�
//����ʱ��װ��̨��ͬ�ĵ��Խ��й���

//����CPU��
class CPU
{
public:
	//����ļ��㺯��
	virtual void calculate() = 0;
};
//�����Կ���
class VideoCard
{
public:
	//�������ʾ����
	virtual void display() = 0;
};
//�����ڴ�����
class Memory
{
public:
	//����Ĵ洢����
	virtual void storage() = 0;
};

//������
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	//�ṩ�����ĺ���
	void work()
	{
		//������������������ýӿ�
		m_cpu->calculate();

		m_vc->display();

		m_mem->storage();
	}
	//�ṩ��������  �ͷ�3���������
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
	CPU* m_cpu;//CPU��ָ��
	VideoCard* m_vc;//�Կ���ָ��
	Memory* m_mem;//�ڴ�����ָ��
};

//����ĳ���
//Intel����
class IntelCPU:public CPU
{
public:
	virtual void calculate()
	{
		cout << "Intel��CPU��ʼ������" << endl;
	}
};
class IntelVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Intel���Կ���ʼ��ʾ��" << endl;
	}
};
class IntelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Intel���ڴ�����ʼ�洢��" << endl;
	}
};

//���볧��
class LenovoCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Lenovo��CPU��ʼ������" << endl;
	}
};
class LenovoVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo���Կ���ʼ��ʾ��" << endl;
	}
};
class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo���ڴ�����ʼ�洢��" << endl;
	}
};

void test01()
{
	//��һ̨���Ե����
	CPU* intelCpu = new IntelCPU;
	VideoCard* intelCard = new IntelVideoCard;
	Memory* intelMem = new IntelMemory;

	//������һ̨����
	Computer* computer1 = new Computer(intelCpu, intelCard, intelMem);
	computer1->work();
	delete computer1;

	cout << "----------------" << endl;
	//�����ڶ�̨����
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->work();
	delete computer2;

	cout << "----------------" << endl;
	//��������̨����
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