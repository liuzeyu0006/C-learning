//#include <iostream>
//using namespace std;
//#include <string>



//��ģ���뺯��ģ������
//template<class NameType, class AgeType=int>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void showPerson()
//	{
//		cout << "name:" << this->m_Name << "  age:" << this->m_Age << endl;
//			
//	}
//	NameType m_Name;
//	AgeType m_Age;
//};
////1����ģ��û���Զ������Ƶ�ʹ�÷�ʽ
//void test01()
//{
//	//Person p1("�����", 100);//�޷����Զ������Ƶ�
//	Person<string,int>p1("�����", 100);
//
//	p1.showPerson();
//
//}
////2����ģ����ģ������б��п�����Ĭ�ϲ���   ģ������б�<>�е�����
//void test02()
//{
//	Person<string>p1("��˽�", 100);
//	p1.showPerson();
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}



//��ģ���г�Ա��������ʱ��

//��ģ���г�Ա��������ͨ���г�Ա��������ʱ����������� :
//��ͨ���еĳ�Ա����һ��ʼ�Ϳ��Դ���
//��ģ���еĳ�Ա�����ڵ���ʱ�Ŵ���
//class Person1
//{
//public:
//	void showPerson1()
//	{
//		cout << "show person1" << endl;
//	}
//};
//class Person2
//{
//public:
//	void showPerson2()
//	{
//		cout << "show person2" << endl;
//	}
//};
//
//template<class T>
//class MyClass
//{
//public:
//	T obj;
//	//��ģ���еĳ�Ա����  δ�����þͲ��ᱻ����
//	void func1()
//	{
//		obj.showPerson1();
//	}
//	void func2()
//	{
//		obj.showPerson2();
//	}
//};
//
//void test01()
//{
//	MyClass<Person1> m;
//	m.func1();//������
//	//m.func2();//��������
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}




//��ģ���������������

//��ģ��ʵ�������Ķ����������εķ�ʽ
//һ�������ִ��뷽ʽ 

//1.ָ�����������
//- ֱ����ʾ�������������
//2.����ģ�廯
//- �������еĲ�����Ϊģ����д���
//3.������ģ�廯
//������������� ģ�廯���д���

//template<class NameType, class AgeType>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void showPerson()
//	{
//		cout << "name:" << this->m_Name << "  age:" << this->m_Age << endl;
//			
//	}
//	NameType m_Name;
//	AgeType m_Age;
//};
//
////1.ָ�����������,���
//void printPerson1(Person<string, int>&p)
//{
//	p.showPerson();
//}
//void test01()
//{
//	Person<string, int>p("�����", 100);
//	printPerson1(p);
//}
//
////2.����ģ�廯
//template<class NameType, class AgeType>
//void printPerson2(Person<NameType, AgeType>&p)
//{
//	p.showPerson();
//	cout << "NameType������Ϊ��" << typeid(NameType).name() << endl;//�鿴��������
//	cout << "AgeType������Ϊ��" << typeid(AgeType).name() << endl;
//}
//void test02()
//{
//	Person<string, int>p("��˽�", 100);
//	printPerson2(p);
//}
//
//
////3.������ģ�廯
//template<class T>
//void printPerson3(T&p)
//{
//	p.showPerson();
//	cout << "T������Ϊ��" << typeid(T).name() << endl;//�鿴��������
//
//}
//void test03()
//{
//	Person<string, int>p("��ɮ", 30);
//	printPerson3(p);
//}
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return 0;
//}


//��ģ����̳�
//����ģ�������̳�ʱ����Ҫע��һ�¼��� :
// 
//������̳еĸ�����һ����ģ��ʱ��������������ʱ��Ҫָ����������T������
//�����ָ�����������޷�����������ڴ�
//��������ָ����������T�����ͣ�����Ҳ���Ϊ��ģ��
//template<class T>
//class Base
//{
//	T m;
//};
//
////class Son :public Base//���󣬱���Ҫ֪�������е�T�����ͣ����ܼ̳и�����
//class Son :public Base<int>
//{
//
//};
//void test01()
//{
//	Son s1;
//}
////��������ָ����������T�����ͣ�����Ҳ���Ϊ��ģ��
//template<class T1,class T2>
//class Son2 :public Base<T2>
//{
//public:
//	Son2()
//	{
//		cout << "T1������Ϊ��" << typeid(T1).name() << endl;//�鿴��������
//		cout << "T2������Ϊ��" << typeid(T2).name() << endl;//�鿴��������
//	}
//	T1 obj;
//};
//void test02()
//{
//	Son2<int,char>S2;
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//��ģ���Ա����������ʵ��
//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	//{
//	//	this->m_Name = name;
//	//	this->m_Age = age;
//	//}
//	void showPerson();
//	//{
//	//	cout << "name:" << this->m_Name << "  age:" << this->m_Age << endl;
//	//}
//	T1 m_Name;
//	T2 m_Age;
//};
//
////���캯��������ʵ��
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//		this->m_Name = name;
//		this->m_Age = age;
//}
//template<class T1, class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "name:" << this->m_Name << "  age:" << this->m_Age << endl;
//}
//void test01()
//{
//	Person<string,int> p1("Tom",20);
//	p1.showPerson();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//��ģ����ļ���д
//ѧϰĿ�� :
//������ģ���Ա�������ļ���д�����������Լ������ʽ
//���� :
//��ģ���г�Ա��������ʱ�����ڵ��ý׶Σ����·��ļ���дʱ���Ӳ���
//��� :
//�����ʽ1 : ֱ�Ӱ���.cppԴ�ļ�
//�����ʽ2 : ��������ʵ��д��ͬһ���ļ��У������ĺ�׺��Ϊ.hpp��hpp��Լ�������ƣ�������ǿ��

//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//
//	void showPerson();
//
//	T1 m_Name;
//	T2 m_Age;
//};
//���캯��������ʵ��
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//		this->m_Name = name;
//		this->m_Age = age;
//}
//template<class T1, class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "name:" << this->m_Name << "  age:" << this->m_Age << endl;
//}

////��һ�ֽ����ʽ��ֱ�Ӱ���Դ�ļ�
//#include "person.cpp"//��.h��Ϊ.cpp
//
////�ڶ��ֽ����ʽ����.h��.cpp�е�����д��һ�𣬽���׺��Ϊ.hpp�ļ�
//#include "person.hpp"
//
//void test01()
//{
//	Person<string,int> p1("Jerry",20);
//	p1.showPerson();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//��ģ������Ԫ
//ѧϰĿ�� :
//������ģ�������Ԫ���������ں�����ʵ��
//ȫ�ֺ�������ʵ�� - ֱ��������������Ԫ����
//ȫ�ֺ�������ʵ�� - ��Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ���

//��ǰ�ñ�����֪��Person��Ĵ���
//template<class T1, class T2>
//class Person;
//
//
////����ʵ��
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>p)
//{
//	cout << "����name:" << p.m_Name << "  ����age:" << p.m_Age << endl;
//
//}
//
//
//template<class T1, class T2>
//class Person
//{
//	//ȫ�ֺ�������ʵ��
//	friend void printPerson(Person<T1,T2>p)
//	{
//		cout << "name:" << p.m_Name << "  age:" << p.m_Age << endl;
//	}
//	//ȫ�ֺ�������ʵ��
//	//�ӿ�ģ��Ĳ����б�
//	//���ȫ�ֺ�������ʵ�֣���Ҫ�ñ�������ǰ֪����������Ĵ���
//	friend void printPerson2<>(Person<T1, T2>p);
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//private:
//	T1 m_Name;
//	T2 m_Age;
//};


////1��ȫ�ֺ�������ʵ��
//void test01()
//{
//	Person<string,int> p("Jerry",20);
//	printPerson(p);
//}
//
////2��ȫ�ֺ�������ʵ��
//void test02()
//{
//	Person<string, int> p("Jerry", 20);
//	printPerson2(p);
//}
//int main()
//{
//	//test01();
//
//	test02();
//	system("pause");
//	return 0;
//}




//��ģ�尸��
//�������� : ʵ��һ��ͨ�õ������࣬Ҫ������:
 
//���Զ��������������Լ��Զ����������͵����ݽ��д洢
//�������е����ݴ洢������
//���캯���п��Դ������������
//�ṩ��Ӧ�Ŀ������캯���Լ�operator = ��ֹǳ��������
//�ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ��
//����ͨ���±�ķ�ʽ���������е�Ԫ��
//���Ի�ȡ�����е�ǰԪ�ظ��������������















