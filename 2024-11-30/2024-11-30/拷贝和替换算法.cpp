#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <ctime>

//���ÿ������滻�㷨
//ѧϰĿ�꣺
//���ճ��õĿ������滻�㷨
//�㷨��飺
//copy // ������ָ����Χ��Ԫ�ؿ�������һ������
//replace // ��������ָ����Χ�ľ�Ԫ���޸�Ϊ��Ԫ��
//replace_if // ������ָ����Χ����������Ԫ���滻Ϊ��Ԫ��
//swap // ��������������Ԫ��
//5.4.1 copy
//����������
//������ָ����Χ��Ԫ�ؿ�������һ������
//����ԭ�ͣ�
//copy(iterator beg, iterator end, iterator dest);
//// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
//// beg ��ʼ������
//// end ����������
//// dest Ŀ����ʼ������

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
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i + 1);
//	}
//	vector<int> v2;
//	
//	//����ռ�
//	v2.resize(v1.size());
//	copy(v1.begin(), v1.end(), v2.begin());
//	for_each(v2.begin(), v2.end(), myPrint());
//	cout << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}


//replace
//����������
//��������ָ����Χ�ľ�Ԫ���޸�Ϊ��Ԫ��
//����ԭ�ͣ�
//replace(iterator beg, iterator end, oldvalue, newvalue);
//// �������ھ�Ԫ�� �滻�� ��Ԫ��
//// beg ��ʼ������
//// end ����������
//// oldvalue ��Ԫ��
//// newvalue ��Ԫ��

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
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(40);
//	v.push_back(50);
//	v.push_back(10);
//	v.push_back(20);
//	cout << "�滻ǰ��" << endl;
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//	//�������е�20 �滻�� 2000
//	cout << "�滻��" << endl;
//	replace(v.begin(), v.end(), 20, 2000);
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}


//replace_if
//�������� :
//������������������Ԫ�أ��滻��ָ��Ԫ��
//����ԭ�ͣ�
//replace_if(iterator beg, iterator end, _pred, newvalue);
// �������滻Ԫ�أ������������滻��ָ��Ԫ��
// beg ��ʼ������
// end ����������
// _pred ν��
// newvalue �滻����Ԫ��
//class myPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//class ReplaceGreater30
//{
//public:
//	bool operator()(int val)
//	{
//		return val >= 30;
//	}
//};
//void test01()
//{
//	vector<int> v;
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(40);
//	v.push_back(50);
//	v.push_back(10);
//	v.push_back(20);
//	cout << "�滻ǰ��" << endl;
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//	cout << "�滻��" << endl;
//	replace_if(v.begin(), v.end(), ReplaceGreater30(), 3000);
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}


//swap
//����������
//��������������Ԫ��
//����ԭ�ͣ�
//swap(container c1, container c2);
//// ��������������Ԫ��
//// c1����1
//// c2����2
//swap��������ʱ��ע�⽻��������Ҫͬ������

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
//		v2.push_back(i + 100);
//	}
//	cout << "����ǰ�� " << endl;
//	for_each(v1.begin(), v1.end(), myPrint());
//	cout << endl;
//	for_each(v2.begin(), v2.end(), myPrint());
//	cout << endl;
//	cout << "������ " << endl;
//	swap(v1, v2);
//	for_each(v1.begin(), v1.end(), myPrint());
//	cout << endl;
//	for_each(v2.begin(), v2.end(), myPrint());
//	cout << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}