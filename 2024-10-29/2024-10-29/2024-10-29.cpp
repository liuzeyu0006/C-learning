#include <iostream>
using namespace std;


//��̬
//��̬��Ϊ���ࣺ
//				��̬��̬���������غ�������������ھ�̬��̬�����ú�����
//				��̬��̬����������麯��ʵʱ����ʱ��̬
// ��̬��̬�붯̬��̬������
//							��̬��̬�ĺ�����ַ���-����׶�ȷ��������ַ
//							��̬��̬�ĺ�����ַ���-���н׶�ȷ��������ַ
//

//class Animal
//{
//public:
//	//ʵ����󶨼���ؼ���virtual;
//	 virtual void speak()
//	{
//		cout << "������˵��" << endl;
//	}
//};
////è��
//class Cat :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "Сè��˵��" << endl;
//	}
//};
////����
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "С����˵��" << endl;
//	}
//};
////ִ��˵���ĺ���
////��ַ���   �ڱ���׶�ȷ��������ַ
////�����ִ��è˵������ô��������ĵ�ַ�Ͳ�����ǰ�󶨣���Ҫ�Ӱ����н׶ΰ󶨣���ַ���
//
////��̬����������
////1���м̳й�ϵ
////2��������д������麯��  ��д����������ֵ����  ������  �����б�  ��ȫ��ͬ
//
////��̬��̬��ʹ��
//// �����ָ���������  ָ���������  Animal&animal=cat
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



//��̬��ԭ��
//class Animal
//{
//public:
//	//д�Ϲؼ���virtual,������һ��vfptrָ��vftable
//	void speak()
//	{
//		cout << "������˵��" << endl;
//	}
//};
////è��
//class Cat :public Animal
//{
//public:
//	//��������д������麯��ʱ
//	//�����е��麯�����ڲ����滻��������麯����ַ
//	//����  &Animal::speak ->&Cat::speak
//	//�����麯�������
//	void speak()
//	{
//		cout << "Сè��˵��" << endl;
//	}
//};
////����
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "С����˵��" << endl;
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
//	//����virtual,����Ĵ�СΪ1
//	//��virtual����СΪ4
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





//����1 �������
//�ֱ�������ͨд���Ͷ�̬���������ʵ��������������������ļ�����
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
//		//��������Ӳ�������Ҫ��Դ������޸�
//		//����ʵ�����У��ᳫ  ����ԭ��
//		//����ԭ�򣺶���չ���п��������޸Ľ��йر�
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



//���ö�̬��ʵ�ּ�����
//�ŵ㣺
//		��֯�ṹ����
//		�ɶ���ǿ
//      ����ǰ���ڵ���չ��ά���Ը�

//ʵ�ּ������ĳ�����
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
//�ӷ�����������
class AddCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};

//��������������
class SubCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};

//�˷�����������
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
	//��̬��ʹ������������ָ���������ָ���������
	AbstractCalculator* abc = new AddCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;

	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
	//����ǵ�����
	delete abc;

	//��������
	abc = new SubCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;

	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;

	//�˷�����
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