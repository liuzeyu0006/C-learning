#include <iostream>
//using namespace std;


//�����
//�Ӽ��˳� ���� ����
//ȡģ% ǰ��++ ����++ ǰ��-- ����--
//int main()
//{
	//int a = 10;
	//int b = 3;

	//cout << a + b << endl;
	//cout << a - b << endl;
	//cout << a * b << endl;
	//cout << a / b << endl;//ֵΪ3��������������ȻΪ����

	//int a1 = 10;
	//int b1 = 20;
	//cout << a1 / b1 << endl;

	//double d1 = 0.5;
	//double d2 = 0.22;
	//cout << d1 / d2 << endl;//������������С��

	////ȡģ����
	//cout << a % b << endl;
	//cout << a1 % b1 << endl;
	//С��������ȡģ��ȡģʱ������������0
	

	// ǰ��++
	//++a  ��++��ʹ��
	// ����--
	//a--  ��ʹ����--


	//��ֵ�����
	//+=  *=  /=  %=


	// �Ƚ������
	// �ж��Ƿ����==  �ж��Ƿ���ȣ�=  �ж��Ƿ����>   
	// �ж��Ƿ�С��>   �ж��Ƿ���ڵ���>=   �ж��Ƿ�С�ڵ���<=
	//cout << (a != b) << endl;
	//cout << (a == b) << endl;


	//�߼������
	//�߼��ǣ� a�٣���a��
	//�߼���&&  ȫ�����棬����Ϊ��
	//�߼���||  �������棬ȫ�ٲż�
//	int a = 10;
//	int b = 10;
//
//	cout << !a << endl;
//	cout << !!a << endl;
//	cout << (a&&b) << endl;
//	cout << (a || b) << endl;
//
//	system("pause");
//	return 0;
//}



//�������̽ṹ
// ˳��  ѡ��  ѭ��  
//if������if��������{ִ�����}  ����  ������
//int main()
//{
	////����if�����治Ҫ�ӷֺ�
	//if (a > 100)
	//{


	//}
	

	//����if
	/*if (a > 100)
	{

	}
	else 
	{

	}*/


	//������if
	//if (a > 100)
	//{

	//}
	//else if (a > 50)
	//{

	//}
	//else if (a > 20)
	//{

	//}
	//else 
	//{

	//}

	////Ƕ��if
	//int a = 0;
	//cout << "�����������" << endl;
	//cin >> a;
	//cout << "��ķ����ǣ�" << a << endl;
	//if (a > 100)
	//{
	//	cout << "����һ����ѧ" << endl;
	//	if (a > 150)
	//	{
	//		cout << "���뱱��" << endl;
	//	}
	//	else if (a > 120)
	//	{
	//		cout << "�����廪" << endl;
	//	}
	//	else
	//	{
	//		cout << "�����˴�" << endl;
	//	}

	//}
	//else if (a > 50)
	//{
	//	cout << "������ѧ" << endl;
	//}
	//else if (a > 20)
	//{
	//	cout << "������ѧ" << endl;
	//}
	//else
	//{
	//	cout << "ûѧ��" << endl;
	//}


	//С������أ�˭���أ�
//	int piga = 0;
//	cout << "����С��a�����أ�" << endl;
//	cin >> piga;
//	int pigb = 0;
//	cout << "����С��b�����أ�" << endl;
//	cin >> pigb;
//	int pigc = 0;
//	cout << "����С��c�����أ�" << endl;
//	cin >> pigc;
//
//	if (piga > pigb)
//	{
//		if (piga > pigc)
//		{
//			cout << "���ص�С���ǣ�a" << endl;
//		}
//		else
//		{
//			cout << "���ص�С���ǣ�c" << endl;
//		}
//	}
//	else
//	{
//		if (pigb>pigc)
//		{
//			cout << "���ص�С���ǣ�b" << endl;
//		}
//		else
//			cout << "���ص�С���ǣ�c" << endl;
//	}
//	system("pause");
//	return 0;
//}


//��Ŀ�����
//1������2������2
//1������3������3
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c=(a > b ? a : b);
//	cout << "c=" << c << endl;
//
//	//����Ŀ���������ֵ�Ǳ��������Լ�����ֵ
//	(a < b ? a : b) = 100;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//system("pause");
//return 0;
//}


//switch
//if��switch����
//switch���ж���ֻ�������ͻ����ַ��ͣ������ж����䡣
//switch�ṹ������Ч�ʸߡ�
//



//while
//����������ѭ���ĳ��ڣ����������ѭ��
//int main()
//{
//	int a = 0;
//	while (a < 10) 
//	{
//	cout << "a=" << a << endl;
//	a++;
//    }
//	system("pause");
//	return 0;
//}

//time��ͷ�ļ�<ctime>
//��������Ϸ
//int main()
//{
//	srand((unsigned int)time(NULL));//����ϵͳʱ���������������
//	//1������α�����
//	int num = rand() % 100 + 1;//rand() % 100ֻ������0~99��Ҫ��1
//	//2����Ҳ�����
//	int val = 0;
//	cout << "��������" << endl;
//	
//	//3���жϲ²��Ƿ���ȷ
//	while (1)
//	{
//		cin >> val;
//		if (num > val)
//		{
//			cout << "��С��" << endl;
//		}
//		else if (num < val)
//		{
//			cout << "�´���" << endl;
//		}
//		else
//		{
//			cout << "�¶���" << endl;
//			break;
//		}
//	}
//	//��ȷ�˳���Ϸ��������ʾ��С�����ص�2��
//	system("pause");
//	return 0;
//}

//do while
//��ִ��һ��ѭ�������ж�ѭ������
//int main()
//{
//	int num = 0;
//	/*do{
//		cout << num << endl;
//		num++;
//
//	} while (num);*/ //��ִ�У���ִ��һ�����ж�
//
//
//	while(num){
//		cout << num << endl;
//		num++;
//	}//����ִ�У����ж���ִ��
//	system("pause");
//	return 0;
//}


//ˮ�ɻ���,do...while
//int main()
//{
//	//1����ӡ������λ��
//	int num = 100;
//	do
//	{
//		//�����ˮ�ɻ����Ŵ�ӡ
//		int a = 0;
//		int b = 0;
//		int c = 0;
//		a = num % 10;//��ȡ��λ��
//		b = num / 10 % 10;//��ȡʮλ��
//		c = num / 100;//��ȡ��λ��
//
//		if (a * a * a + b * b * b + c * c * c == num)
//		{
//			cout << num << endl;
//		}
//		num++;
//	} while (num < 1000);
//	//2����������λ���л�ȡˮ�ɻ���
//	system("pause");
//	return 0;
//}


////forѭ��
////����ʼ���ʽ���������ʽ��ĩβѭ���壩
//int main()
//{
//	for (int i = 0; i < 10; i++)//�ֺŸ���
//	{
//		cout << i << endl;
//	}
//	system("pause");
//	return 0;
//}

//using namespace std;
////������
//int main()
//{
//
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i%7 == 0 || i%10 == 7 || i / 10 == 7) 
//		//  7�ı���     ��λ��7      ʮλ��7
//		{
//			cout << "������" << endl;
//		}
//		else
//		{
//			cout << i << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}


//Ƕ��ѭ��,���ִ��һ�Σ��ڲ�ִ��һ��
//using namespace std;
//int main()
//{
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = 1; j < 10; j++)
//		{
//			cout << " * " ;
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}


//�˷��ھ���
//����*����=������
//����<=��ǰ����
//using namespace std;
//int main()
//{
//	for (int i = 1; i < 10; i++)//����i ����j
//	{
//		for (int j = 1; j < 10; j++) 
//		{
//			if (i >= j) 
//			{
//				cout << j << " * " << i << " = "<<i*j <<"  ";
//			}		
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}



//break ����ѡ��ṹ��ѭ���ṹ
// ��ֹcase������switch
// ������ǰѭ�����
// Ƕ���У�����������ڲ�ѭ�����

//using namespace std;
//int main()
//{
//	// ������ǰѭ�����
//	for (int a = 0; a < 10; a++)
//	{
//		if (a == 5)
//		{
//			break;
//		}
//		cout << a << endl;
//	}
//using namespace std;
//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			if (j == 5)
//			{
//				break;
//			}
//			cout << " * " ;
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}