#include <iostream>
using namespace std;
//
////���ͱ��
////����ģ�壺����ͨ�ú������亯������ֵ���ͺ��β����Ϳ��Բ������ƶ�����һ����������ʹ���
//
////ע�����
////�Զ������Ƶ��������Ƶ���һ�µ���������T,�ſ���ʹ��
////ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��T
//
//
////template<typename T>
////������������
//
//template<typename T>//����ģ�壬���߱����������������ŵ�T��Ҫ����T��һ��ͨ����������,typename���Ի�Ϊclass
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	//���ú���ģ�彻��
//	//���ַ�ʽʹ�ú���ģ��
//	//1���Զ������Ƶ�
//	mySwap(a, b);//��ȷ
//	//mySwap(a, c);//�����Ƶ�����һ�µ���������T
//	//2����ʾָ������,<int>ָ��T����������
//	mySwap<int>(a, b);
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//}
//
//
////ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��T
//template<class T>
//void func()
//{
//	cout << "func ����" << endl;
//}
//void test02()
//{
//	//func();//����
//	func<int>();//��Ҫ����һ����������
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}




//��������
//���ú���ģ���װһ������ĺ��������ԶԲ�ͬ�������������������
//�������Ӵ�С�������㷨Ϊѡ������
//�ֱ�����char�����int������в���

////��������ģ��
//template<class T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//
////�����㷨
//template<class T>
//void mySort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;//�϶����ֵ�±�
//		for (int j = i + 1; j < len; j++)
//		{
//			//�϶������ֵ�ȱ���������ֵҪС��˵��j�±��Ԫ�ز������ֵ
//			if (arr[max] < arr[j])
//			{
//				max = j;//�������ֵ�±�
//			}
//		}
//		if (max != i) 
//		{
//			//����max��i�±�Ԫ��
//			mySwap(arr[max], arr[i]);
//		}
//	}
//}
////�ṩ��ӡ����ģ��
//template<class T>
//void printArray(T arr[],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	//����char��ֵ
//	char charArr[] = "badcfe";
//	int num =sizeof(charArr) / sizeof(char);
//	mySort(charArr, num);
//	printArray(charArr, num);
//}
//
//void test02()
//{
//	//����int��ֵ
//	int intArr[] = {4,3,1,6,5,7};
//	int num = sizeof(intArr) / sizeof(int);
//	mySort(intArr, num);
//	printArray(intArr, num);
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}


//��ͨ�����뺯��ģ������
//��ͨ��������ʱ���Է����Զ�����ת��(��ʽ����ת��)
//����ģ�����ʱ����������Զ������Ƶ������ᷢ����ʽ����ת��
//���������ʾָ�����͵ķ�ʽ�����Է�����ʽ����ת��


//��ͨ����
//int myAdd01(int a, int b)
//{
//	return a + b;
//}
//
////����ģ��
//template<class T>
//T myAdd02(T a, T b)
//{
//	return a + b;
//}
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';//a��Ӧ97��c��Ӧ99
//	cout << myAdd01(a, c) << endl;
//
//	//����ģ�����ʱ����������Զ������Ƶ������ᷢ����ʽ����ת��
//	//cout << myAdd02(a, c) << endl;
//	//���������ʾָ�����͵ķ�ʽ�����Է�����ʽ����ת��
//	cout << myAdd02<int>(a, c) << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//��ͨ�����뺯��ģ��ĵ��ù���
//���ù������� 
//1.�������ģ�����ͨ����������ʵ�֣����ȵ�����ͨ����
//2.����ͨ����ģ������б���ǿ�Ƶ��ú���ģ��
//3.����ģ��Ҳ���Է�������
//4.�������ģ����Բ������õ�ƥ��, ���ȵ��ú���ģ��


//void myPrint(int a, int b)
//{
//	cout << "���õ���ͨ����" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b)
//{
//	cout << "���õ�ģ��" << endl;
//}
//template<class T>
//void myPrint(T a, T b,T c)
//{
//	cout << "�������ص�ģ��" << endl;
//}
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	//myPrint(a, b);
//
//	//����ͨ����ģ������б���ǿ�Ƶ��ú���ģ��
//	//myPrint<>(a, b);
//
//	//����ģ��Ҳ���Է�������
//	//myPrint<>(a, b,100);
//
//	//�������ģ����Բ������õ�ƥ��, ���ȵ��ú���ģ��
//	char c1 = 'a';
//	char c2 = 'b';
//	myPrint(c1, c2);
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//ģ��ľ�����
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_age = age;
	}
	string m_Name;
	int m_age;
};


//�Ա������Ƿ����
template<class T>
bool myCompare(T& a, T& b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//���þ��廯Person�İ汾ʵ�ִ��룬���廯���ȵ���
template<>bool myCompare(Person& p1, Person& p2)
{
	if (p1.m_Name == p2.m_Name && p1.m_age == p2.m_age)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void test01()
{
	int a = 10;
	int b = 20;
	bool ret = myCompare(a, b);
	if (ret)
	{
		cout << "a��b���" << endl;
	}
	else
	{
		cout << "a��b�����" << endl;
	}
}

void test02()
{
	Person p1 = ("Tom", 10);
	Person p2 = ("Tom", 10);
	bool ret = myCompare(p1, p2);
	if (ret)
	{
		cout << "p1��p2���" << endl;
	}
	else
	{
		cout << "p1��p2�����" << endl;
	}
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
