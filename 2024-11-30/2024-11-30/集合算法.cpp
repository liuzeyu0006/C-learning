//���ü����㷨
//
//ѧϰĿ�꣺
//���ճ��õļ����㷨
//�㷨��飺
//set_intersection // �����������Ľ���
//set_union // �����������Ĳ���
//set_difference // �����������Ĳ

//set_intersection
//����������
//�����������Ľ���
//����ԭ�ͣ�
//set_intersection(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
//// ���������ϵĽ���
//// ע��:�������ϱ�������������
//// beg1 ����1��ʼ������ // end1 ����1���������� // beg2 ����2��ʼ������ // end2 ����2���������� //
//dest Ŀ��������ʼ������
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
//class myPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//void test01()
//{
//	vector<int> v1;
//	vector<int> v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//	vector<int> vTarget;
//	//ȡ���������С��ֵ��Ŀ���������ٿռ�
//	vTarget.resize(min(v1.size(), v2.size()));
//	//����Ŀ�����������һ��Ԫ�صĵ�������ַ
//	vector<int>::iterator itEnd =set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), itEnd, myPrint());
//	cout << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}
//�󽻼����������ϱ������������
//Ŀ���������ٿռ���Ҫ������������ȡСֵ
//set_intersection����ֵ���ǽ��������һ��Ԫ�ص�λ��


//set_union
//����������
//���������ϵĲ���
//����ԭ�ͣ�
//set_union(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
//// ���������ϵĲ���
//// ע��:�������ϱ�������������
//// beg1 ����1��ʼ������ // end1 ����1���������� // beg2 ����2��ʼ������ // end2 ����2���������� //
//dest Ŀ��������ʼ����
//class myPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//void test01()
//{
//	vector<int> v1;
//	vector<int> v2;
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//	vector<int> vTarget;
//	//ȡ���������ĺ͸�Ŀ���������ٿռ�
//	vTarget.resize(v1.size() + v2.size());
//	//����Ŀ�����������һ��Ԫ�صĵ�������ַ
//	vector<int>::iterator itEnd =
//		set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), itEnd, myPrint());
//	cout << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}
//�󲢼����������ϱ������������
//Ŀ���������ٿռ���Ҫ�����������
//set_union����ֵ���ǲ��������һ��Ԫ�ص�λ��


//set_difference
//����������
//���������ϵĲ
//����ԭ�ͣ�
//set_difference(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
//// ���������ϵĲ
//// ע��:�������ϱ�������������
//// beg1 ����1��ʼ������ // end1 ����1���������� // beg2 ����2��ʼ������ // end2 ����2���������� //
//dest Ŀ��������ʼ������
class myPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
void test01()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	vector<int> vTarget;
	//ȡ��������ϴ��ֵ��Ŀ���������ٿռ�
	vTarget.resize(max(v1.size(), v2.size()));
	//����Ŀ�����������һ��Ԫ�صĵ�������ַ
	cout << "v1��v2�ĲΪ�� " << endl;
	vector<int>::iterator itEnd =
		set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd, myPrint());
	cout << endl;
	cout << "v2��v1�ĲΪ�� " << endl;
	itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd, myPrint());
	cout << endl;
}
int main() {
	test01();
	system("pause");
	return 0;
}

//�ܽ᣺
//�����������ϱ������������
//Ŀ���������ٿռ���Ҫ����������ȡ�ϴ�ֵ
//set_difference����ֵ���ǲ�����һ��Ԫ�ص�λ��