#include <iostream>
using namespace std;
//continue����ɸѡ������ִ�е��˾Ͳ������½���
//int main()
//{
//	for (int i = 0; i <+ 100; i++)
//	{
//		if (i%2==0)
//		{
//			continue;
//		}
//		cout << i << endl;
//	}
//	system("pause");
//	return 0;
//}


//goto��ת���
//int main()
//{
//	cout << "1****" << endl;
//	cout << "2****" << endl; 
//	goto FLAG;
//	cout << "3****" << endl;
//	FLAG:
//	cout << "4****" << endl;
//	system("pause");
//	return 0;
//}

//����:��ͬ�������ͣ��ڴ�����������
//һά���鶨��
//�������� ������[���鳤��]��
//�������� ������[���鳤��]={ֵ1,ֵ2,...}��
////�������� ������[]={ֵ1,ֵ2,...}��
//int main()
//{
	//�������� ������[���鳤��]��
	//int arr[5];
	//arr[0] = 10;//�±��0��ʼ����
	//arr[1] = 20;
	//arr[2] = 30;
	//arr[3] = 40;
	//arr[4] = 50;
	//cout << arr[0] << endl;
	//cout << arr[1] << endl;
	//cout << arr[2] << endl;
	//cout << arr[3] << endl;
	//cout << arr[4] << endl;

	//�������� ������[���鳤��]={ֵ1,ֵ2,...}��
	//int arr2[5] = {10,20,30,40,50};
	//�������� ������[]={ֵ1,ֵ2,...}��


	//int arr2[] = { 10,20,30 };//��3��4Ԫ�ظ�ֵΪ0����0����
	////������������г�ʼ����
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << arr2[i] << endl;
	//}
	//system("pause");
	//return 0;


	//һά����������
	//ͳ�������������ڴ��еĳ���    Ԫ�ظ���sizeof(arr)/sizeof(arr[0])
	// ���Ի�ȡ�������ڴ��е��׵�ַ   cout<<arr<<endl;
	
	/*int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	cout << "��������ĳ���" << sizeof(arr) << endl;
	cout << "ÿ��Ԫ�صĳ���" << sizeof(arr[0]) << endl;
	cout << "Ԫ�ظ���" << sizeof(arr)/sizeof(arr[0]) << endl;

	cout << "����ĵ�ַ" << arr << endl;
	cout << "�������Ԫ�ص�ַ" << &arr[0]<< endl;
	cout << "�������Ԫ�ص�ַ" << &arr[1] << endl;
	system("pause");
	return 0;*/
//}


//��ֻС�������:���϶�һ�����ֵ����ȥ���Ƚ�
//int main()
//{
//	int max = 0;
//	int arr[] = {300,350,200,400,250};
//	for (int i = 0; i < 5; i++)
//	{
//		if (arr[i] > max)
//		{	
//			max = arr[i];
//		}
//	}
//	cout << "���ص�С���ǣ�" <<max<< endl;
//	system("pause");
//	return 0;
//}


//Ԫ������
//int main()
//{
//	int arr[] = { 1,3,2,5,4 };
//	int start = 0;//��ʼ�±�
//	int end = sizeof(arr) / sizeof(arr[0]) - 1;//�����±�
//	while (start<end)//while�����ж�Ҫע��
//	{
//		int temp = arr[start];//temp:��ʱ����
//		arr[start] = arr[end];
//		arr[end] = temp;
//		start++;
//		end--;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	system("pause");
//	return 0;
//}



//ð������
//
// ����������=Ԫ�ظ���-1��
// ÿ�ֶԱȴ���=Ԫ�ظ���-��������-1��
//
//int main()
//{
//	int arr[] = { 4,2,8,0,5,7,1,3,9 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < num; i++)
//	{
//		cout << arr[i] <<" ";
//	}
//	for (int i = 0; i < num - 1; i++) 
//	{
//		for (int j = 0; j <num-i-1;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	cout << endl;
//	for (int i = 0; i < num; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	system("pause");
//	return 0;
//}


//��ά����
//int main()
//{
//	/*�������� ������[����][����];
//	�������� ������[����][����] = { {����1������2}��{����3������4} };
//	�������� ������[����][����] = { ����1������2������3������4 };
//	�������� ������[][����] = { ����1������2������3������4 };*/
//		
//	int arr[2][3];
//	arr[0][0] = 1;
//	//��ѭ����ӡ��������ѭ����ӡ����
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << arr[i][j] << endl;
//		}
//	}
//
//	int arr2[2][3]=
//	{
//		{1,2,3},
//	    {4,5,6}
//	};
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << arr2[i][j] <<" ";	
//		}
//		cout << endl;;
//	}
//
//
//	int arr3[2][3] = { 1,2,3,4,5,6 };
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << arr3[i][j] << " ";
//		}
//		cout << endl;;
//	}
//
//	int arr4[][3] = { 1,2,3,4,5,6 };//ֻд�������ԣ�ֻд����������
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << arr4[i][j] << " ";
//		}
//		cout << endl;;
//	}
//	system("pause");
//	return 0;
//}


//��ά�����������
//�鿴��ά������ռ���ڴ�ռ�
// ��ȡ��ά������׵�ַ
////
//int main()
//{
//	int arr[2][3] =
//	{
//		{1,2,3},
//		{4,5,6}
//	};
//	//��ռ�ڴ�ռ�
//	cout << sizeof(arr) << endl;
//	cout << sizeof(arr[0]) << endl;//��һ��ռ�ÿռ�
//	cout << sizeof(arr[0][0]) << endl;//ÿ��Ԫ��ռ�ÿռ�
//	cout << sizeof(arr)/sizeof(arr[0]) << endl;//����
//	cout << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;//����
//
//
//	//�׵�ַ
//	cout << arr << endl;
//	cout << arr[0] << endl;
//	cout << arr[1] << endl;
//	cout << (int)&arr[0][0] << endl;
//
//	system("pause");
//	return 0;
//}



//���Գɼ�ͳ��
//int main()
//{
//	int scores[3][3]
//	{
//		{100,100,100},
//		{70,80,100},
//		{60,70,80}
//	};
//
//	string name[3] = { "����","����","����" };
//	for (int i = 0; i < 3; i++)
//	{
//		int sum = 0;
//		for (int j = 0; j < 3; j++)
//		{
//			sum = sum + scores[i][j];
//			/*cout << scores[i][j] <<" ";*/
//		}
//		cout <<name[i]<<"�ĳɼ��ܺ�Ϊ" <<sum << endl;
//	}
//	system("pause");
//	return 0;
//}



//����
//����ֵ����
// ������
// ��������
// ���������
// return���ʽ

//int add(int num1, int num2) //numΪ�β�
//{
//	int sum = num1 + num2;
//	return sum;
//}
//int main()
//{
//	int a = 10;//ʵ�Σ����ú���ʱ���ݸ��β�
//	int b = 20;
//	int c = add(a, b);
//	cout << c << endl;
//	system("pause");
//	return 0;
//}



//ֵ����,�βη����ı䲻��Ӱ��ʵ��
//��������Ҫ����ֵ�������������������������Ϳ�void
//void swap(int num1, int num2) //numΪ�β�
//{
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//	cout << num1<<" ";
//	cout << num2;
//}
//int main()
//{
//	int a = 10;//ʵ�Σ����ú���ʱ���ݸ��β�
//	int b = 20;
//	swap(a, b);
//	system("pause");
//	return 0;
//}


//��������ʽ
//�޲��޷�
//�в��޷�
// �޲��з�
// �в��з�

//�޲��޷�
//void test01()
//{
//	cout << "test01" << endl;
//}
////�в��޷�
//void test02(int a)
//{
//	cout << "test02" << a << endl;
//}
//// �޲��з�
//int test03()
//{
//	cout << "test03" << endl;
//	return 1000;
//}
//// �в��з�
//int test04(int a)
//{
//	cout << "test04" << endl;
//	return a;
//}
//
//int main()
//{
//	test01();
//
//	test02(100);
//
//	int n = test03();
//	cout << n << endl;
//
//	int m = test04(100);
//	cout << m << endl;
//	system("pause");
//	return 0;
//}