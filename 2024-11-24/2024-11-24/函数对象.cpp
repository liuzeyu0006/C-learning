//#include <iostream>
//using namespace std;
//�������󣨷º�����
//
//�����������
//���
//���غ������ò��������࣬����󳣳�Ϊ��������
//��������ʹ�����ص�()ʱ����Ϊ���ƺ������ã�Ҳ�зº���
//���ʣ�
//��������(�º���)��һ���࣬����һ������
//
//��������ʹ��
//�ص㣺
//����������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
//�������󳬳���ͨ�����ĸ����������������Լ���״̬
//�������������Ϊ��������

//class MyAdd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;
//	}
//};
////����������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
//void test01()
//{
//	MyAdd myAdd;
//	cout << myAdd(10, 10) << endl;
//}
//
////�������󳬳���ͨ�����ĸ����������������Լ���״̬
//class MyPrint
//{
//public:
//	MyPrint()
//	{
//		this->count = 0;
//	}
//	void operator()(string test)
//	{
//		cout << test << endl;
//		this->count++;
//	}
//
//	int count;
//};
//void test02()
//{
//	MyPrint myPrint;
//	myPrint("hello world");
//	myPrint("hello world");
//	myPrint("hello world");
//	myPrint("hello world");
//
//	cout << "myPrint���õĴ����ǣ�" << myPrint.count<< endl;
//
//}
//
////�������������Ϊ��������
//void doPrint(MyPrint& mp, string test)
//{
//	mp(test);
//}
//void test03()
//{
//	MyPrint myPrint;
//	doPrint(myPrint, "Hello c++");
//}
//int main() 
//{
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return 0;
//}