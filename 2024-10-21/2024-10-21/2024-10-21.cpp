#include <iostream>
using namespace std;

//��������أ������е���������½��ж��壬��������һ�ֹ��ܣ�����Ӧ��ͬ����������
//�������õ��������͵ı��ʽ��������ǲ����ܸı��
//��Ҫ�������������

//�Ӻ����������
//class Person
//{
//public:
//
//	////1����Ա��������+��
//	//Person operator+(Person& p)
//	//{
//	//	Person temp;
//	//	temp.m_A = this->m_A + p.m_A;
//	//	temp.m_B = this->m_B + p.m_B;
//	//	return temp;
//	//}
//
//	int m_A;
//	int m_B;
//};
////2��ȫ�ֺ�������+��
//Person operator+(Person& p1,Person&p2)
//	{
//		Person temp;
//		temp.m_A = p1.m_A + p2.m_A;
//		temp.m_B = p1.m_B + p2.m_B;
//		return temp;
//	}
////3���������صİ汾
//Person operator+(Person& p1, int num)
//{
//	Person temp;
//	temp.m_A = p1.m_A + num;
//	temp.m_B = p1.m_B + num;
//	return temp;
//}
//
//void test01()
//{
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 10;
//
//	Person p2;
//	p2.m_A = 10;
//	p2.m_B = 10;
//
//	//��Ա�������ر��ʵ���
//	// Person p3=p1.operator+(p2);
//	//ȫ�ֺ������ر��ʵ���
//	// Person p3=operator+(p1,p2);
//	//���Լ�Ϊ������ʽ
//	Person p3 = p1 + p2;
//
//	//��������� Ҳ���Է�����������
//	Person p4 = p1 + 100;//Person + int
//
//
//	cout << "p3.m_A= " << p3.m_A << endl;
//	cout << "p3.m_B= " << p3.m_B << endl;
//
//
//	cout << "p4.m_A= " << p4.m_A << endl;
//	cout << "p4.m_B= " << p4.m_B << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}




//�������������
//��������Զ�����������,һ�������Ԫʹ��
//class Person
//{
//public:
//	Person(int a, int b) 
//	{
//		m_A = a;
//		m_B = b;
//	}
//	friend ostream& operator<<(ostream& cout, Person& p);
//private:
//	//���ó�Ա�����������������
//	//һ�㲻�����ó�Ա��������<<���������Ϊ�޷�ʵ��cout�����
//	/*void operator<<(Person &p)
//	{
//
//	}*/
//
//
//	int m_A;
//	int m_B;
//};
////ֻ������ȫ�ֺ������������������
//ostream& operator<<(ostream &cout, Person &p)//������  operator<<(cout,p)  ��cout<<p
//{
//	cout << "m_A=" << p.m_A << "  m_B= " << p.m_B;
//	return cout;
//}
//void test01()
//{
//	Person p(10,10 );
//	//p.m_A = 10;
//	//p.m_B = 10;
//	//cout << "p.m_A= " << p.m_A << endl;
//
//	cout << p << endl;
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}




//�������������
//ͨ�����ص����������ʵ���Լ�����������
//ǰ�õ����������ã����õ�������ֵ

//�Զ��������
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//	//����ǰ��++�����  �������õ�Ŀ����Ϊ��һֱ��һ�����ݽ������ò���
//	MyInteger& operator++()
//	{
//		m_Num++;
//		return *this;
//	}
//	//���غ���++�����
//	MyInteger operator++(int)//���int��ʾռλ������������������ǰ�úͺ��õ�����ֻ��int��ʹ
//	{
//		//�� ��¼��ʱ���
//		MyInteger temp = *this;
//		//�� ����
//		m_Num++;
//		//��󽫼�¼���������
//		return temp;
//	}
//
//private:
//	int m_Num;
//};
////�������������
//ostream& operator<<(ostream& cout, MyInteger myint)
//{
//	cout << myint.m_Num;
//	return cout;
//}
////ǰ�õ���
//void test01()
//{
//	MyInteger myint;
//	cout << ++myint << endl;
//
//}
////���õ���
//void test02()
//{
//	MyInteger myint;
//	cout << myint++ << endl;//��������ʽΪ0
//	cout << myint<< endl;//�ٵ������1
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}



//��ֵ���������
//C++���������ٸ�һ�������4������
// 1��Ĭ�Ϲ��캯�����޲Σ�������Ϊ�գ�
// 2��Ĭ�������������޲Σ�������Ϊ�գ�
// 3��Ĭ�Ͽ������캯���������Խ��п���
// 4����ֵ�����operator=,�����Խ���ֵ����
// 
//�������������ָ�����������ֵ����ʱҲ�������ǳ����������


//class Person
//{
//public:
//	Person(int age)
//	{
//		m_Age = new int(age);
//	}
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//
//	//����  ��ֵ�����
//	Person& operator=(Person& p)
//	{
//		//���������ṩǳ����
//		//m_Age=p.m_Age;
//
//
//		//Ӧ�����ж��Ƿ��������ڶ�������������ͷŸɾ���Ȼ���ٽ������
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		//���
//		m_Age = new int(*p.m_Age);
//
//		//���ض�����,����������p3=p2=p1�����Ĳ���
//		return *this;
//
//	}
//	int* m_Age;
//};
//void test01()
//{
//	Person p1(18);
//	Person p2(20);
//
//	p2 = p1;//��ֵ����,ǳ�������ᵼ�¶����ڴ��ظ��ͷţ�����������������
//	cout << "p1������Ϊ " << *p1.m_Age << endl;
//	cout << "p2������Ϊ " << *p2.m_Age << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//��ϵ���������
//���ã����ع�ϵ������������������Զ������Ͷ�����жԱȲ���
class Person
{
public:
	Person(string name,int age)
	{
		m_Name = name;
		m_Age = age;
	}

	//���� == ��
	bool operator==(Person &p)
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{
			return true;
		}
		return false;
	}

	bool operator!=(Person& p)
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{
			return false;
		}
		return true;
	}
	string m_Name;
	int m_Age;

};
void test01()
{
	Person p1("Tom",18);
	Person p2("Tom",19);

	if (p1 == p2)
	{
		cout << "p1��p2����ȵ�"<< endl;
	}
	else
	{
		cout << "p1��p2�ǲ���ȵ�" << endl;
	}

	if (p1 != p2)
	{
		cout << "p1��p2�ǲ���ȵ�" << endl;
	}
	else
	{
		cout << "p1��p2����ȵ�" << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}