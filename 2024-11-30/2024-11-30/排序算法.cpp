#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <ctime>
//���������㷨
//ѧϰĿ�꣺
//���ճ��õ������㷨
//
//�㷨��飺
//sort //��������Ԫ�ؽ�������
//random_shuffle //ϴ�� ָ����Χ�ڵ�Ԫ�������������
//merge // ����Ԫ�غϲ������洢����һ������
//reverse // ��תָ����Χ��Ԫ��
//
//sort
//����������
//��������Ԫ�ؽ�������
//����ԭ�ͣ�
//sort(iterator beg, iterator end, _Pred);
//// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
//// beg ��ʼ������
//// end ����������
//// _Pred ν��
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(40);
//	v.push_back(20);
//
//	//����sort��������
//	sort(v.begin(), v.end());
//	for_each(v.begin(), v.end(), myPrint);
//	cout << endl;
//
//	//��Ϊ����
//	sort(v.begin(), v.end(),greater<int>());
//	for_each(v.begin(), v.end(), myPrint);
//	cout << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//random_shuffle
//����������
//ϴ�� ָ����Χ�ڵ�Ԫ�������������
//����ԭ�ͣ�
//random_shuffle(iterator beg, iterator end);
//// ָ����Χ�ڵ�Ԫ�������������
//// beg ��ʼ������
//// end ����������


//void myPrint(int val)
//{
//	cout << val << " ";
//}
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i< 10; i++)
//	{
//		v.push_back(i);
//	}
//	
//	//����ϴ���㷨����˳��
//	random_shuffle(v.begin(), v.end());
//	for_each(v.begin(), v.end(),myPrint);
//}
//int main()
//{
//	//�������
//	srand((unsigned int)time(NULL));
//	test01();
//	system("pause");
//	return 0;
//}


//merge
//����������
//��������Ԫ�غϲ������洢����һ������
//����ԭ�ͣ�
//merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
//// ����Ԫ�غϲ������洢����һ������
//// ע��: �������������������
//// beg1 ����1��ʼ������ // end1 ����1���������� // beg2 ����2��ʼ������ // end2 ����2���������� //
//dest Ŀ��������ʼ������


//void myPrint(int val)
//{
//	cout << val << " ";
//}
//void test01()
//{
//	vector<int>v1;
//	vector<int>v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v1.push_back(i+1);
//	}
//
//	//Ŀ������
//	vector<int>vTarget;
//
//	//��ǰ����ռ�
//	vTarget.resize(v1.size() + v2.size());
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), vTarget.end(), myPrint);
//}
//int main()
//{
//	//�������
//	test01();
//	system("pause");
//	return 0;
//}


//reverse
//����������
//��������Ԫ�ؽ��з�ת
//����ԭ�ͣ�
//reverse(iterator beg, iterator end);
// ��תָ����Χ��Ԫ��
// beg ��ʼ������
// end ����������
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
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(40);
//	cout << "��תǰ�� " << endl;
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//	cout << "��ת�� " << endl;
//	reverse(v.begin(), v.end());
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}