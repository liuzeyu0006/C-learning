#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <string>
 
//���ò����㷨
//
//find //����Ԫ��
//find_if //����������Ԫ��
//adjacent_find //���������ظ�Ԫ��
//binary_search //���ֲ��ҷ�
//count //ͳ��Ԫ�ظ���
//count_if //������ͳ��Ԫ�ظ���

//find
//����������
//����ָ��Ԫ�أ��ҵ�����ָ��Ԫ�صĵ��������Ҳ������ؽ���������end()
//����ԭ�ͣ�
//find(iterator beg, iterator end, value);
//// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
//// beg ��ʼ������
//// end ����������
//// value ���ҵ�Ԫ��

//����find��������������ָ����Ԫ�أ�����ֵ�ǵ�����

//����������������
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//�����������Ƿ���5���Ԫ��
//	vector<int>::iterator it = find(v.begin(), v.end(), 50);
//
//	if (it == v.end())
//	{
//		cout << "û���ҵ�!" << endl;
//	}
//	else
//	{
//		cout << "�ҵ���  " <<*it<< endl;
//	}
//}
//
////�����Զ�����������
//class Person 
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	//����==�ţ��ײ�find֪����ζԱ�Person��������
//	bool operator==(const Person& p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	string m_Name;
//	int m_Age;
//};
//void test02()
//{
//	vector<Person>v;
//
//	//��������
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//
//	//��������
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	Person pp("bbb", 20);
//
//	vector<Person>::iterator it=find(v.begin(), v.end(), pp);
//	if (it == v.end())
//	{
//		cout << "û���ҵ�!" << endl;
//	}
//	else
//	{
//		cout << "�ҵ���  " << endl;
//		cout << "������" << it->m_Name << "  ���䣺" << it->m_Age << endl;
//	}
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}


//find_if
//����������
//����������Ԫ��
//����ԭ�ͣ�
//find_if(iterator beg, iterator end, _Pred);
//// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
//// beg ��ʼ������
//// end ����������
//// _Pred ��������ν�ʣ�����bool���͵ķº�����


//����������������
//class GreatFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//�����������Ƿ���5���Ԫ��
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreatFive());
//
//	if (it == v.end())
//	{
//		cout << "û���ҵ�!" << endl;
//	}
//	else
//	{
//		cout << "�ҵ��˴���5������Ϊ��  " <<*it<< endl;
//	}
//}

//�����Զ�����������
//class Person 
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//class Greater20
//{
//public:
//	bool operator()(Person& p)
//	{
//		return p.m_Age > 20;
//	}
//};
//void test02()
//{
//	vector<Person>v;
//
//	//��������
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//
//	//��������
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	//�ҵ��������20����
//	vector<Person>::iterator it=find_if(v.begin(), v.end(), Greater20());
//	if (it == v.end())
//	{
//		cout << "û���ҵ�!" << endl;
//	}
//	else
//	{
//		cout << "�ҵ���  " << endl;
//		cout << "������" << it->m_Name << "  ���䣺" << it->m_Age << endl;
//	}
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}

//adjacent_find
//����������
//���������ظ�Ԫ��
//����ԭ�ͣ�
//adjacent_find(iterator beg, iterator end);
//// ���������ظ�Ԫ��,��������Ԫ�صĵ�һ��λ�õĵ�����
//// beg ��ʼ������
//// end ����������

//void test01()
//{
//	vector<int>v;
//	v.push_back(0);
//	v.push_back(2);
//	v.push_back(0);
//	v.push_back(3);
//	v.push_back(1);
//	v.push_back(4);
//	v.push_back(3);//���ش˵�����λ��
//	//v.push_back(3);
//
//	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());
//
//	if (pos == v.end())
//	{
//		cout << "û���ҵ�!" << endl;
//	}
//	else
//	{
//		cout << "�ҵ���  " << endl;
//		cout << "����λ��Ԫ��Ϊ��" << *pos << endl;
//	}
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//binary_search
//����������
//����ָ��Ԫ���Ƿ����
//����ԭ�ͣ�
//bool binary_search(iterator beg, iterator end, value);
 //����ָ����Ԫ�أ��鵽 ����true ����false

// ע��: �����������в�����

//beg ��ʼ������
//// end ����������
//// value ���ҵ�Ԫ��

//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//�����������Ƿ���9���Ԫ��
//	
//	//ע�⣺������������������
//	//v.push_back(2);���Ϊ�������У����δ֪
//
//	bool ret = binary_search(v.back(), v.end(), 9);
//	if (ret)
//	{
//		cout << "�ҵ���!" << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//count
//����������
//ͳ��Ԫ�ظ���
//����ԭ�ͣ�
//count(iterator beg, iterator end, value);
//// ͳ��Ԫ�س��ִ���
//// beg ��ʼ������
//// end ����������
//// value ͳ�Ƶ�Ԫ��

//������������
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(40);
//
//	int num = count(v.begin(), v.end(), 40);
//	cout << "40��Ԫ�ظ���Ϊ��" << num << endl;
//}
//
////�Զ�����������
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	bool operator==(const Person& p)
//	{
//		if (this->m_Age == p.m_Age) 
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//	string m_Name;
//	int m_Age;
//};
//void test02()
//{
//	vector<Person>v;
//	Person p1("����", 35);
//	Person p2("����", 35);
//	Person p3("�ŷ�", 35);
//	Person p4("����", 30);
//	Person p5("�ܲ�", 25);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	Person p("�����", 35);
//
//	int num = count(v.begin(), v.end(), p);
//	cout << "�������ͬ�������˸���Ϊ��" << num << endl;
//
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}


//count_if
//����������
//������ͳ��Ԫ�ظ���
//����ԭ�ͣ�
//count_if(iterator beg, iterator end, _Pred);
//// ������ͳ��Ԫ�س��ִ���
//// beg ��ʼ������
//// end ����������
//// _Pred ν��


//������������
class Greater20
{
public:
	bool operator()(int val)
	{
		return val > 20;
	}
};
void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(20);

	int num = count_if(v.begin(), v.end(), Greater20());
	cout << "����20���˸���Ϊ��" << num << endl;
}

//�Զ�����������
class Person
{
public:
    Person(string name, int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }
    string m_Name;
    int m_Age;
};

class AgeGreater20
{
public:
    bool operator()(const Person& p) // �޸�Ϊ operator()
    {
        return p.m_Age > 20; // ��ȷ�ж�����
    }
};

void test02()
{
    vector<Person> v;
    Person p1("����", 35);
    Person p2("����", 35);
    Person p3("�ŷ�", 35);
    Person p4("����", 30);
    Person p5("�ܲ�", 25);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    // ����20�����Ա����
    int num = count_if(v.begin(), v.end(), AgeGreater20());
    cout << "����20����˵ĸ���Ϊ��" << num << endl;
}

int main()
{
    // test01();
    test02();
    system("pause");
    return 0;
}