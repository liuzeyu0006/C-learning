#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
//���ñ����㷨

//����:
//�㷨��Ҫ����ͷ�ļ� <algorithm> <functional> <numeric> ��ɡ�
//<algorithm> ������STLͷ�ļ�������һ������Χ�漰���Ƚϡ� ���������ҡ��������������ơ��޸ĵȵ�
//<numeric> �����С��ֻ��������������������м���ѧ�����ģ�庯��
//<functional> ������һЩģ����, ����������������

//ѧϰĿ�꣺
//���ճ��õı����㷨
//�㷨��飺
//for_each //��������
//transform //������������һ��������
//
//for_each
//����������
//ʵ�ֱ�������
//����ԭ�ͣ�
//for_each(iterator beg, iterator end, _func);
//// �����㷨 ��������Ԫ��
//// beg ��ʼ������
//// end ����������
//// _func �������ߺ�������

//��ͨ����
//void print01(int val)
//{
//	cout << val << " ";
//}
//�º���
//class print02
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
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
//	for_each(v.begin(), v.end(), print01);
//
//	for_each(v.begin(), v.end(), print02());
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//
//transform
//����������
//������������һ��������
//����ԭ�ͣ�
//transform(iterator beg1, iterator end1, iterator beg2, _func);
////beg1 Դ������ʼ������
////end1 Դ��������������
////beg2 Ŀ��������ʼ������
////_func �������ߺ�������

//class Transform
//{
//public:
//	int operator()(int v)
//	{
//		return v+100;
//	}
//};
//class Myprint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
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
//	vector<int>vTarget;//Ŀ������
//	vTarget.resize(v.size());//��Ҫ��ǰ���ٿռ�
//
//	transform(v.begin(), v.end(), vTarget.begin(), Transform());
//
//	for_each(vTarget.begin(), vTarget.end(), Myprint());
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}