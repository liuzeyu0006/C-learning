#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

//�ڽ���������
//�ڽ�������������
//
//���
//STL�ڽ���һЩ��������
//
//���� :
//�����º���
//��ϵ�º���
//�߼��º���
//
//�÷���
//��Щ�º����������Ķ����÷���һ�㺯����ȫ��ͬ
//ʹ���ڽ�����������Ҫ����ͷ�ļ� #include<functional>

//�����º���
//����������
//ʵ����������
//����negate��һԪ���㣬�������Ƕ�Ԫ����
//�º���ԭ�ͣ�
//template<class T> T plus<T> //�ӷ��º���
//template<class T> T minus<T> //�����º���
//template<class T> T multiplies<T> //�˷��º���
//template<class T> T divides<T> //�����º���
//template<class T> T modulus<T> //ȡģ�º���
//template<class T> T negate<T> //ȡ���º���



//void test01()
//{
//	negate<int>n;
//	cout << n(50) << endl;
//}
//void test02()
//{
//	plus<int>p;
//	cout << p(10,20) << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}


//��ϵ�º���
//����������
//ʵ�ֹ�ϵ�Ա�
//�º���ԭ�ͣ�
//template<class T> bool equal_to<T> //����
//template<class T> bool not_equal_to<T> //������
//template<class T> bool greater<T> //����
//template<class T> bool greater_equal<T> //���ڵ���
//template<class T> bool less<T> //С��
//template<class T> bool less_equal<T> //С�ڵ���

//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(50);
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//		{
//			cout << *it << "  ";
//		}
//		cout << endl;
////����
//	/*	sort(v.begin(), v.end(), MyCompare());*/
//
//		//greater<int>()  �ڽ���������
//		sort(v.begin(), v.end(), greater<int>());
//
//		for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//		{
//			cout << *it << "  ";
//		}
//		cout << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//�߼��º���
//����������
//ʵ���߼�����
//����ԭ�ͣ�
//template<class T> bool logical_and<T> //�߼���
//template<class T> bool logical_or<T> //�߼���
//template<class T> bool logical_not<T> //�߼���

class MyCompare
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}
};
void test01()
{
	vector<bool>v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);

	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
	
	//�����߼��ǣ�������v���˵�v2�в�����ȡ������
	vector<bool>v2;
	v2.resize(v.size());//��Ҫ�ȿ��ٿռ�

	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}