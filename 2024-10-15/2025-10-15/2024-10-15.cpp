#include <iostream>
using namespace std;



//�ڴ����ģ��
// 
// ����ǰ���򣺴�������ȫ����
// 
// ����������ź�����Ķ����ƴ��룬�ɲ���ϵͳ���й���
// ���������CPUִ�еĻ���ָ���������ֻ���͹����
// 
// ȫ��������ž�̬������static�ؼ��֡��ַ���������const���ε�ȫ�ֱ�����ȫ�ֳ�����
// ȫ��������žֲ������;ֲ�����
// ���ȫ�ֱ����;�̬�����Լ�������������������ڳ���������ɲ���ϵͳ�ͷ�
// 
// ջ�����ɱ������Զ������ͷţ���ź����Ĳ���ֵ���ֲ�������
// ע�⣺��Ҫ���ؾֲ������ĵ�ַ��ջ�����ٵ������ɱ������Զ��ͷ�
// �������ɳ���Ա������ͷţ������ͷţ��������ʱ�ɲ���ϵͳ����
//
//
////ȫ�ֱ���
//int g_a = 10;
//int g_b = 20;
//
////const���ε�ȫ�ֱ���,��ȫ�ֳ���
//int c_g_a = 10;
//int c_g_b = 10;
//int main()
//{
//	//�ֲ�����
//	int a = 10;
//	int b = 20;
//
//	cout << "�ֲ�����a�ĵ�ַ��" << (int)&a << endl;
//	cout << "�ֲ�����b�ĵ�ַ��" << (int)&b << endl;
//
//	cout << "ȫ�ֱ���g_a�ĵ�ַ��" << (int)&g_a << endl;
//	cout << "ȫ�ֱ���g_b�ĵ�ַ��" << (int)&g_b << endl;
//
//	//��̬����
//	static int s_a = 10;
//	static int s_b = 10;
//	cout << "��̬����s_a�ĵ�ַ��" << (int)&s_a << endl;
//	cout << "��̬����s_b�ĵ�ַ��" << (int)&s_b << endl;
//
//	//����
//	//�ַ�������
//	cout << "�ַ����ĵ�ַ��" << (int)&"hello world" << endl;
//
//	//const���εı���
//	//const���ε�ȫ�ֱ�����const���εľֲ�����
//	cout << "ȫ�ֳ���c_g_a�ĵ�ַ��" << (int)&c_g_a<< endl;
//	cout << "ȫ�ֳ���c_g_b�ĵ�ַ��" << (int)&c_g_b << endl;
//
//	const int c_l_a = 10;
//	const int c_l_b = 10;
//	cout << "�ֲ�����c_g_a�ĵ�ַ��" << (int)&c_l_a << endl;
//	cout << "�ֲ�����c_g_b�ĵ�ַ��" << (int)&c_l_b << endl;
//	system("pause");
//	return 0;
//}



//ջ������ע������--��Ҫ���ؾֲ������ĵ�ַ

//int* func()
//{
//	int a = 10;//�ֲ����������ջ����ջ����������ִ������Զ��ͷ�
//	return  &a;
//}
//int main()
//{
//	int* p = func();
//
//	cout << *p << endl;//��һ�δ�ӡ����ȷ����ֵ����Ϊ���������˱���
//	cout << *p << endl;//�ڶ������ݾͲ��ڱ�����
//
//
//	system("pause");
//	return 0;
//}



//����
//����new�ڶ�����������
//int* func()
//{
//	//����new���Խ����ݿ��ٵ�����
//	//ָ��ı���Ҳ�Ǿֲ�����������ջ�ϣ�ָ�뱣��������ڶ���
//	int* p = new int(10);
//	return p;
//}
//int main()
//{
//	int* p = func();
//
//	cout << *p << endl;//
//	cout << *p << endl;//
//
//
//	system("pause");
//	return 0;
//}


////new��ʹ��
//int* func()
//{
//	//����new���Խ����ݿ��ٵ�����
//	//ָ��ı���Ҳ�Ǿֲ�����������ջ�ϣ�ָ�뱣��������ڶ���
//	int* p = new int(10);
//	return p;
//}
//void test01()
//{
//	int* p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	//���������ݣ��ɳ���Ա���ٺ��ͷ�
//	//���Ҫ�ͷŶ��������ùؼ���delete
//	delete p;
//	//cout << *p << endl;//�ڴ��Ѿ����ͷţ��ٴη��ʾ��ǷǷ��������ᱨ��
//}
////�ڶ�������new��������
//void test02()
//{
//	int *arr = new int[10];
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout<<arr[i] <<endl;
//	}
//	//�ͷ�����ʱ��Ҫ��һ��[]�ſ���
//	delete[] arr;
//}
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}



//����
//�����������
//�������� &����=ԭ��
//���ñ����ʼ��
//�����ڳ�ʼ���󣬲��ɸı�
//int main()
//{
//
//	int a = 10;
//	int& b = a;
//
//	cout << a << endl;
//	cout << b << endl;
//
//	b = 20;
//	cout << a << endl;
//	cout << b << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//int &b  ���У������ʼ��
//	int a = 10;
//	int& b = a;
//
//	//��ʼ���󲻿ɸı䣬b��a�ı������Ͳ�������c�ı�����
//	int c = 20;
//	b = c;//��ֵ����
//
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//	system("pause");
//	return 0;
//}




//��������������
//���ã���������ʱ�������������õļ������β�������ʵ��
//���Լ�ָ���޸�ʵ��
//��������
//1��ֵ���� 2����ַ���� 3�����ô���

//ֵ����
//void mySwap01(int a,int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
	//cout << "swap01��a=" << a << endl;
	//cout << "swap01��b=" << b << endl;
//}
//��ַ����
//void mySwap02(int *a, int *b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
	//cout << "swap01��a=" << a << endl;
	//cout << "swap01��b=" << b << endl;
//}
////���ô���
//void mySwap03(int &a, int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//mySwap01(a, b);//ֵ���ݣ��ββ�������ʵ��
//	//mySwap02(&a, &b);//��ַ���ݣ��βλ�����ʵ��
//	mySwap03(a, b);//���ô��ݣ��βλ�����ʵ��,���ַ����һ��
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	system("pause");
//	return 0;
//}



//�����������ķ���ֵ
//��Ҫ���ؾֲ�����������
//int& test01()
//{
//	int a = 10;//�ֲ���������ջ��
//	return a;
//}
////����������Ϊ��ֵ
//int& test02()
//{
//	static int a = 10;//��̬��������ȫ����
//	return a;
//}
//int main()
//{
//	int& ref = test01();
//	int& ref2 = test02();
//	
//	cout << "ref=" << ref << endl;//��һ�ν���Ե�
//	cout << "ref=" << ref << endl;//�ڶ��δ����ڴ��Ѿ��ͷ�
//
//	cout << "ref2=" << ref2 << endl;
//	cout << "ref2=" << ref2 << endl;
//	test02() = 1000;//����������Ϊ��ֵ,��a�޸ĳ�1000�ˣ�ref�Ǳ�����Ҳ������a�ģ���ҲΪ1000
//	cout << "ref2=" << ref2 << endl;
//	cout << "ref2=" << ref2 << endl;
//	system("pause");
//	return 0;
//}


//���õı���
//���õı�����C++�ڲ�ʵ����һ��ָ�볣��
//void func(int& ref)
//{
//	ref = 100;//ref�����ã�ת��Ϊ*ref=100��
//}
//int main()
//{
//	int a = 10;
//	int& ref = a;//�Զ�ת��Ϊint* const ref = &a;ָ�볣����ָ��ָ�򲻿ɸģ�Ҳ��˵��Ϊʲô���ò��ɸ���
//	ref = 20;//�ڲ�����ref�����ã��Զ�������ת��Ϊ:*ref=20��
//	cout << "a:" << a << endl;
//	cout << "ref:" << ref << endl;
//
//	func(a);
//
//	system("pause");
//	return 0;
//}



//��������
//ǰ���const�����βΣ���ֹ�����

//void showValue(const int &val)
//{
//	//val = 1000;//��ֹ�����
//	cout << "val=" << val << endl;
//}
//int main()
//{
//	//int a = 10;
//	//int& ref = 10;//���ñ�����һ��Ϸ����ڴ�ռ�
//	//const int& ref = 10;//����const�󣬱������������޸�  int temp = 10�� const int &ref=temp��
//	//ref = 20;//����const�󣬱�Ϊֻ�����Ͳ����޸���
//
//	int a = 100;
//	showValue(a);
//
//	system("pause");
//	return 0;
//}



//���������
//������Ĭ�ϲ���
// ע�⣺
//1�����ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴����Ҷ�����Ҫ��Ĭ��ֵ
// int func(int a,int b,int c=10,int d)����
// int func(int a,int b,int c=10,int d=20)��

//2���������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���
//������ʵ��ֻ����һ��Ĭ�ϲ���
//��������
//int func(int a,int b);
//
//������ʵ��
//int func(int a,int b)
//{
//return a + b;
//}
//int main()
//{
//	cout << func() << endl;
//	system("pause");
//	return 0;
//}



//����ռλ����
//����ռλ�����ú���ʱ�������λ��
//����ֵ���� ������ ���������ͣ�{}
//ռλ������������Ĭ�ϲ���
//void func(int a,int)//��һ��int����ռλ������ñ����дһ�����Ͳ��ܵ���
//{
//	cout << "ռλ" << endl;
//}
//int main()
//{
//	func(1,10);
//	system("pause");
//	return 0;
//}


//����������
//���ã�������������ͬ����߸�����

// ����������
// ͬһ���������£�����ȫ����������
// ����������ͬ������func����
// �����������Ͳ�ͬ ���� ������ͬ ���� ˳��ͬ

// �����ķ���ֵ��������Ϊ�������ص�����
//�޷����ؽ�������ֵ�������ֺ���

//void func()
//{
//	cout << "func�ĵ���" << endl;
//}
//void func(int a)
//{
//	cout << "func(int a)�ĵ���" << endl;
//}
//void func(double a)
//{
//	cout << "func(double a)�ĵ���" << endl;
//}
//void func(double a,int b)
//{
//	cout << "func(double a,int b)�ĵ���" << endl;
//}
//void func(int a, double b)
//{
//	cout << "func(int a, double b)�ĵ���" << endl;
//}
//int main()
//{
//	func();//
//	//���Ͳ�ͬ
//	func(1);
//	func(3.14);
//	//˳��ͬ
//	func(3.14, 1);
//	func(1, 3.14);
//system("pause");
//return 0;
//}



//��������ע������
//������Ϊ�������ص�����
// ����������������Ĭ�ϲ���
//

//������Ϊ�������ص�����,�Ӳ���const������Ϊ��������
void func(int& a)//int &a=10;���Ϸ�
{
	cout << "func(int &a)�ĵ���" << endl;
}
void func(const int& a)//const int &a=10;
{
	cout << "func(const int& a)�ĵ���" << endl;
}

// ����������������Ĭ�ϲ���
void func2(int a, int b = 10)
{
	cout << "func2(int a,int b)�ĵ���" << endl;
}
void func2(int a)
{
	cout << "func2(int a)�ĵ���" << endl;
}
int main()
{
	int a = 1;
	func(a);

	func(1);

	//func2(1);//��������������Ĭ�ϲ�������ֶ����ԣ�����������֣����Դ����� func2��1��2��
	system("pause");
	return 0;
}