#include <iostream>
using namespace std;


//����ĳ�ʼ��������
//��ʼ�������캯������Ҫ�������ڴ�������ʱΪ����ĳ�Ա������ֵ
//������������������Ҫ�������ڶ�������ǰϵͳ�Զ����ã�ִ��һЩ��������
//���캯�������������Ǳ������Զ����ã���ɶ����ʼ������������
//�����ǲ��ṩ��������������������ṩ
//�������ṩ�Ĺ��캯�������������ǿպ���

//���캯������������{}
//���캯����û�з���ֵҲ��дvoid
// ��������������ͬ
// ���캯�������в�������˿��Է�������
// �����ڵ��ö���ʱ���Զ����ù��죬�����ֶ����ã���ֻ�����һ��

//����������~��������{}
//���캯����û�з���ֵҲ��дvoid
// ��������������ͬ��������ǰ���Ϸ���~
// ���캯���������в�������˲����Է�������
// �����ڶ�������ǰ���Զ����������������ֶ����ã���ֻ�����һ��

//��ʼ�������캯��
//class Person
//{
//public:
//	//1.���캯��
//	Person()
//	{
//		cout << "Person���캯���ĵ���" << endl;
//	}
//	//2.��������
//	~Person()
//	{
//		cout << "Person���������ĵ���" << endl;
//	}
//
//};
//
//void test01()
//{
//	Person p;//ջ�ϵ����ݣ�test01ִ����Ͼͻ��ͷţ��ͷ��������
//}
//int main()
//{
//	test01();
//	//Person p;//���ᱻ�ͷţ��밴����������󣬻�˲���ͷ�
//
//	system("pause"); \
//		return 0;
//}


//���캯���ķ����Լ�����
//���ַ��෽ʽ����������Ϊ���вι��죨Ĭ�Ϲ��죩���޲ι���
//              �����ͷ�Ϊ����ͨ����Ϳ�������
// ���ֵ��÷�ʽ�� ���ŷ�
//                ��ʾ��
//                ��ʽת����
//

//class Person
//{
//public:
//	//1.���캯��
//	Person()
//	{
//		cout << "Person�޲ι��캯���ĵ���" << endl;
//	}
//	Person(int a)
//	{
//		age = a;
//		cout << "Person�вι��캯���ĵ���" << endl;
//	}
//	//�������캯��
//	Person(const Person &p)
//	{
//		cout << "Person�������캯���ĵ���" << endl;
//		age = p.age;
//	}
//	//2.��������
//	~Person()
//	{
//		cout << "Person���������ĵ���" << endl;
//	}
//	int age;
//};
//
////����
//void test01()
//{
	//1.���ŷ�
	//Person p1;//Ĭ�Ϲ��캯������
	//Person p2(10);//�вι������
	//Person p3(p2);//�������캯��
	
	//ע������
	//����Ĭ�Ϲ��캯��ʱ����Ҫ�ӣ���
	//Person p1����;����������Ϊ��һ��������������������Ϊ�ڴ�������


	/*cout << "p2�������ǣ�" << p2.age << endl;
	cout << "p3�������ǣ�" << p3.age << endl;*/

	//2.��ʾ��
	//Person p1;
	//Person p2 = Person(10);//�вι���
	//Person p3 = Person(p2);//��������

	//�������Ҳ�Person(10)�ó��������������������������p2
	// ���������ص㣺��ǰִ�н�����ϵͳ���������յ���������
	//ע�����
	// ��Ҫ���ÿ������캯����ʼ����������,����������ΪPerson(p3)===Person p3���Ǹ����������
	//Person(p3);//�ض�����
	
	//3.��ʽת����
//	Person p4 = 10;//�൱��д��Person p4=Person(10);
//	Person p5 = p4;//��������
//}
//int main()
//{
//	test01();
//	//Person p;//���ᱻ�ͷţ��밴����������󣬻�˲���ͷ�
//
//	system("pause"); \
//		return 0;
//}



//�������캯������ʱ��
//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//2��ֵ���ݵķ�ʽ������������ֵ
//3����ֵ��ʽ���ؾֲ�����
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person��Ĭ�Ϲ������" << endl;
//	}
//	~Person()
//	{
//		cout << "Person��������������" << endl;
//	}
//	Person(int age)
//	{
//		cout << "Person���вι��캯������" << endl;
//		m_Age = age; 
//	}
//	Person(const Person& p)
//	{
//		cout << "Person�Ŀ������캯������" << endl;
//		m_Age = p.m_Age;
//	}
//	int m_Age;
//};
////1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//	cout << "p2������Ϊ��" << p2.m_Age << endl;
//}
////2��ֵ���ݵķ�ʽ������������ֵ
//void doWork(Person p)
//{
//
//}
//void test02()
//{
//	Person p;//Ĭ�Ϲ���
//	doWork(p);//ֵ����Ҳ���ǿ���������ÿ������캯��
//}
////3����ֵ��ʽ���ؾֲ�����
//Person doWork2()
//{
//	Person p1;//Ĭ�Ϲ���
//	cout << (int*)&p1 << endl;
//	return p1;//����p1����һ���µĶ��󷵻ػ�ȥ�����п������캯������
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



//���캯�����ù���
//Ĭ������£�c++���������ٸ���һ��������3������
// 1��Ĭ�Ϲ��캯�����޲Σ�������Ϊ�գ�
// 2��Ĭ�������������޲Σ�������Ϊ�գ�
// 3��Ĭ�Ͽ������캯���������Խ���ֵ����

// ���캯�����ù���
// ����û������вι��캯����c++�����ṩĬ���޲ι��죬���ǻ��ṩĬ�Ͽ�������
// ����û����忽�����캯����c++�������ṩ�������캯��


//class Person
//{
//public:
//	/*Person()
//	{
//		cout << "Person��Ĭ�Ϲ��캯������" << endl;
//	}*/
//	Person(int age)
//	{
//		cout << "Person���вι��캯������" << endl;
//		m_Age = age;
//	}
//	/*Person(const Person& p)
//	{
//		cout << "Person�Ŀ������캯������" << endl;
//		m_Age = p.m_Age;
//	}*/
//	~Person()
//	{
//		cout << "Person��������������" << endl;
//	}
//	int m_Age;
//};
////void test01()
////{
////	Person p;
////	p.m_Age = 18;
////
////	Person p2(p);
////	cout << "p2�������ǣ�" <<p.m_Age<< endl;
////
////}
//void test02()
//{
//	//Person p;//�û��Լ�д���вι��캯���������������ṩĬ�Ϲ��캯�����ᱨ��
//	Person p(28);//û��д�������죬������Ҳ��дһ���������캯������ֵ����
//	Person p2(p);
//	cout << "p2�������ǣ�" << p2.m_Age << endl;
//}
//int main()
//{
//	/*test01();*/
//	test02();
//	system("pause");
//	return 0;
//}



//�����ǳ����
//ǳ�������򵥵ĸ�ֵ��������
//������ڶ�����������ռ䣬���п�������

//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person��Ĭ�Ϲ��캯������" << endl;
//	}
//	Person(int age,int height)
//	{
//		m_Age = age;
//		m_Height=new int(height);//�ڶ���new��һ��ռ�
//
//		cout << "Person���вι��캯������" << endl;
//	}
//	//�Լ�ʵ�ֿ������캯�������ǳ�����������ٵĿռ䱻�ظ��ͷŵ�����
//	Person(const Person &p)
//	{
//		cout << "Person�������캯���ĵ���" << endl;
//		m_Age = p.m_Age;
//		//m_Height = p.m_Height;������Ĭ��ʵ�����д���
//		//�������
//		m_Height = new int(*p.m_Height);
//	}
//	~Person()
//	{
//		//�������룬���������ٵ��������ͷŲ���
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "Person��������������" << endl;
//	}
//	int m_Age;
//	int* m_Height;
//};
//
//void test01()
//{
//	Person p1(18,160);
//	cout << "p1�������ǣ�" << p1.m_Age <<"����Ϊ��"<<*p1.m_Height << endl;
//
//	Person p2(p1);//�ֽ������p2��������������p1��������
//				  //��ͻᵼ��m_heightָ������ռ��ȱ�p2�ͷţ����ֱ�p1�ͷţ������Ƿ�����ǳ�������¶����������ظ��ͷ�
//				  //����������н�����Լ�дһ�������������ڶ���������һ��ռ����ڿ���
//	cout << "p2�������ǣ�" << p2.m_Age << "����Ϊ��" << *p2.m_Height << endl;//����Ҳ��18����Ȼûд�������ú��������Ǳ�����������ǳ����
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//��ʼ���б��﷨��������ʼ������
//�﷨�����캯������������1��ֵ1��������2��ֵ2��...{}

//class Person
//{
//public:
//	//��ͳ��ʼ������
//	//Person(int a,int b,int c)
//	//{
//	//	m_A=a;
//	//	m_B=b;
//	//	m_C=c;
//	//}
//
//	//��ʼ���б���ʼ������
//	Person() :m_A(10), m_B(20), m_C(30)
//	{
//
//	}
//	//������д����
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




//�������Ϊ���Ա

//C++���еĳ�Ա������Ϊ��һ����Ķ��󣬳Ƹó�ԱΪ�����Ա
//class A {};
//class B {
//	A a;
//};
//B�����ж���A��Ϊ��Ա��AΪ�����Ա
//�ڴ���B����ʱ��A��B�Ĺ����������˳����˭��˭��


//�ֻ���

//class Phone
//{
//public:
//	Phone(string pName)
//	{
//		m_PName = pName;
//		cout << "Phone�Ĺ��캯������" << endl;
//	}
//	~Phone()
//	{
//		cout << "Phone��������������" << endl;
//	}
//	string m_PName;
//};
////����
//
//class Person
//{
//public:
//	//Phone m_Phone = pName  ��ʽת����
//	Person(string name, string pName) :m_Name(name), m_Phone(pName)
//	{
//		cout << "Person�Ĺ��캯������" << endl;
//	}
//	~Person()
//	{
//		cout << "Person��������������" << endl;
//	}
//	//����
//	string m_Name;
//	//�ֻ�
//	Phone m_Phone;
//};
//
////�������������Ϊ�����Ա������ʱ�ȹ���������ٹ�������
////������˳���빹���෴
//void test01()
//{
//	Person p("����", "ƻ��Max");
//	cout << p.m_Name << "����" << p.m_Phone.m_PName << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}




//��̬��Ա
//��̬��Ա�����ڳ�Ա�����ͳ�Ա����ǰ���Ϲؼ���static����Ϊ��̬��Ա
// ��̬��Ա��Ϊ��
// ��̬��Ա����
//				���ж�����ͬһ������
//				�ڱ���׶η����ڴ棬������ȫ����
//				���������������ʼ��
// ��̬��Ա����
//				���ж�����ͬһ������
//				��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
//


// ��̬��Ա����
//class Person
//{
//public:
//	//��������
//	static int m_A;
//	
//private:
//	//��̬����Ҳ���з���Ȩ�޵�,������ʲ�����
//	static int m_B;//ע�⣺��������������Ҫ��ʼ��
//
//};
////�����ʼ��
//int Person::m_A = 100;
//int Person::m_B = 200;
////void test01()
////{
////	Person p;
////	cout << p.m_A << endl;
////
////	Person p2;
////	p2.m_A = 200;//���ж�����һ�����ݣ���Ϊ200���Ͷ���200��
////	cout << p.m_A << endl;
////}
//void test02()
//{
//	//��̬��Ա���� ������ĳ�������ϣ����ж��󶼹���ͬһ������
//	//��˾�̬��Ա���������ַ��ʷ�ʽ
//
//	//1��ͨ��������з�����
//	//Person p;
//	//cout << p.m_A << endl;
//	//2��ͨ���������з���
//	cout << Person::m_A << endl;//������Ƽ�˫ð�žͿɷ���
//	//cout << Person::m_B << endl; //������ʲ���˽�еľ�̬��Ա����
//}
//int main()
//{
//	/*test01();*/
//	test02();
//	system("pause");
//	return 0;
//}


// ��̬��Ա����
//				���ж�����ͬһ������
//				��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

//class Person
//{
//public:
//	//��̬��Ա����
//	static void func()
//	{
//		m_A = 100;//��̬��Ա���� ���Է��� ��̬�ĳ�Ա����
//		//m_B = 200; //��̬��Ա���� �����Է��� �Ǿ�̬�ĳ�Ա�������޷����ֵ������ĸ������m_B������
//		cout << "static void func�ĵ���" << endl;
//	}
//	static int m_A;//��̬�ĳ�Ա��������������
//	int m_B; //�Ǿ�̬�ĳ�Ա����
//
//	//��̬��Ա����Ҳ���з���Ȩ�޵�
//private:
//	static void func2()
//	{
//		cout << "static void func2�ĵ���" << endl;
//	}
//};
//int Person::m_A = 0;
//void test01()
//{
//	//�����ַ��ʷ�ʽ
//	//1��ͨ��������з�����
//	Person p;
//	p.func();
//	//2��ͨ���������з���
//	Person::func();
//
//
//	//Person::func2();//��̬��Ա����Ҳ���з���Ȩ�޵�,������ʲ���˽�еľ�̬��Ա����
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}