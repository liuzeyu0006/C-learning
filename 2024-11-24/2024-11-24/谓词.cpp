//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
////ν��
////ν�ʸ���
////���
////����bool���͵ķº�����Ϊν��
////���operator()����һ����������ô����һԪν��
////���operator()����������������ô������Ԫν��
//
//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//
////һԪν��
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//����������  ��û�д���5������
//	//GreaterFive()  ������������
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//	if (it == v.end())
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ��˴���5������Ϊ��" << *it << endl;
//	}
//}
//
////��Ԫν��
//class MyCompare
//{
//public:
//	bool operator()(int v1,int v2)
//	{
//		return v1 > v2;
//	}
//};
//void test02()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(50);
//
//	sort(v.begin(), v.end());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << "  ";
//	}
//	cout << endl;
//
//	//ʹ�ú��������Ϊ��������
//	sort(v.begin(), v.end(),MyCompare());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << "  ";
//	}
//	cout << endl;
//
//}
//int main()
//{
//	/*test01();*/
//	test02(); 
//	system("pause");
//	return 0;
//}