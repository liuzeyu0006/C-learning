//�������������㷨
//ѧϰĿ�꣺
//���ճ��õ����������㷨
//ע�⣺
//���������㷨����С���㷨��ʹ��ʱ������ͷ�ļ�Ϊ #include <numeric>
//�㷨��飺
//accumulate // ��������Ԫ���ۼ��ܺ�
//fill // �����������Ԫ��
//5.5.1 accumulate
//����������
//���������� ����Ԫ���ۼ��ܺ�
//����ԭ�ͣ�
//accumulate(iterator beg, iterator end, value);
//// ��������Ԫ���ۼ��ܺ�
//// beg ��ʼ������
//// end ����������
//// value ��ʼֵ
#include <iostream>
using namespace std;
#include <numeric>
#include <vector>
#include <algorithm>

//void test01()
//{
//	vector<int> v;
//	for (int i = 0; i <= 100; i++) {
//		v.push_back(i);
//	}
//	int total = accumulate(v.begin(), v.end(), 0);
//	cout << "total = " << total << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}



//fill
//����������
//�����������ָ����Ԫ��
//����ԭ�ͣ�
//fill(iterator beg, iterator end, value);
// �����������Ԫ��
// beg ��ʼ������
// end ����������
// value ����ֵ
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
//	v.resize(10);
//	//���
//	fill(v.begin(), v.end(), 100);
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}