#include <iostream>
using namespace std;

////���������������ж��
//int max(int a, int b);
//int max(int a, int b);
//int max(int a, int b);

//��ǰ���߱���������
//
//int main()
//{
//	int x = 10;
//	int y = 20;
//	int c = max(x, y);
//	cout << c << endl;
//	system("pause");
//	return 0;
//}
//
////�����Ķ��塣���������ж�Σ�����ֻ����һ��
//int max(int a, int b)
//{
//	/*if (a > b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}*/
//	return a > b ? a : b;
//}



//�����ķ��ļ���д
//����.h��ͷ�ļ�����д����������
//����.cpp��Դ�ļ�����д�����Ķ���
// 
//����������
//void swap(int a, int b);
////�����Ķ���
//void swap(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//}

//#include "swap.h"//�ٰ���һ���Լ���ͷ�ļ��Ϳ������ú�����
//int main()
//{
//	int x = 10;
//	int y = 20;
//	
//	swap(x, y);
//	system("pause");
//	return 0;
//}



//ָ��:����ͨ��ָ��������һ����ַ
//int main()
//{
//	int a = 10;
//	int* p;
//	p = &a;
//	cout << p << endl;
//
//
//	//ʹ��ָ�룺������,��ָ��ָ���е�����
//	*p = 1000;
//	cout << a << endl;
//	system("pause");
//	return 0;
//}


//ָ����ռ���ڴ�ռ�
//������ʲô���͵�ָ�룬��32λ�����ռ��£�ָ��ռ4���ֽڣ�64λ��ָ��ռ8���ֽ�
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	cout << "sizeof(int*)" << sizeof(int*) <<endl;
//	cout << "sizeof(float*)" << sizeof(float*) << endl;
//	cout << "sizeof(double*)" << sizeof(double*) << endl;
//	cout << "sizeof(char*)" << sizeof(char*) << endl;
//	
//	system("pause");
//	return 0;
//}



//��ָ���Ұָ��
//��ָ�룺ָ���ڴ��б��Ϊ0�Ŀռ䣬���ڳ�ʼ��ָ���������ָ��ָ����ڴ治���Է���
// 0~255֮����ڴ�����ϵͳռ�õģ������Է��ʡ�
//
//int main()
//{
//	//int* p = NULL;
// 
////Ұָ�룺ָ��Ƿ��������ռ�
//	int* p = (int*)0x1100;//����Ҹ���ַ������ȥ�����ģ����ڷǷ������ռ䡣
//	system("pause");
//	return 0;
//}




//const����ָ��
//const����ָ��-����ָ��
// const���γ���-ָ�볣��
// const������ָ�룬�����γ���
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	const int* p = &a;//����ָ�룬ָ��ָ������޸ģ�ָ�����ݲ������޸ġ�
//	//*p=20;��     p=&b;��
//
//	int* const p = &a;//ָ�볣����ָ��ָ�򲻿��Ըģ�ָ�����ݿ����޸ġ�
//	//*p=20;��     p=&b;��
//
//	const int* const p = &a;//ָ���ָ������ݶ��������޸ġ�
//	//*p=20;��     p=&b;��
//
//	system("pause");
//	return 0;
//}



////ָ������飺����ָ����������е�Ԫ��
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	for (int i = 0;i < 10; i++)
//	{
//		cout << *p << endl;
//		p++;
//	}
//	//cout << *p << endl;
//	system("pause");
//	return 0;
//}


//void swap(int* p1, int* p2)
//{
//	int temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}
////ָ��ͺ���
////����ָ����Ϊ���������������޸�ʵ�ε�ֵ
//int main()
//{
//	//1��ֵ���ݣ�����ı�ʵ�ε�ֵ
//	//2����ַ���ݣ���ı�ʵ�ε�ֵ
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	cout << a << endl;
//	cout << b << endl;
//
//	system("pause");
//	return 0;
//}



//ָ�롢���顢����
//��װһ������������ð������ʵ�ֶ������������������

//void bubbleSort(int*arr,int len)//ѧ����ν����鴫�ݵ�������int*arr��ð����������Ӧ��
//{
//	for (int i = 0; i < len-1;i++)
//	{
//		for (int j = 0; j < len-i-1; j++)
//		{
//			while (arr[j] > arr[j+1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//
//			}
//		}
//	}
//}
//void printArry(int*arr, int len)
//{
//	for (int a = 0; a < 10; a++)
//	{
//		cout << arr[a] << endl;
//	}
//}
//int main()
//{
//	int arr[] = { 4,3,6,9,1,2,10,8,7,5 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	bubbleSort(arr, len);
//	printArry(arr, len);
//	
//	system("pause");
//	return 0;
//}



//�ṹ�� �û��Զ������������
//struct �ṹ����{�ṹ���Ա�б�}��
#include <string>
//ѧ�������������䣬������


//����ṹ��ʱstruct������ʡ��
//struct Student
//{
//	string name;
//	int age;
//	int score;
//};
//int main()
//{
//	//1��struct Student s1
//	//cpp�нṹ�崴������ʱstruct�ؼ��ֿ���ʡ��
//	struct Student s1;
//	//ͨ��.�����ʽṹ������е�����
//	s1.name = "����";
//	s1.age = 18;
//	s1.score = 100;
//	cout << "������" << s1.name << "���䣺" << s1.age << "������" << s1.score << endl;
//
//	//2��struct Student s2={};
//	struct Student s2 = {"����",19,80};
//	cout << "������" << s2.name << "���䣺" << s2.age << "������" << s2.score << endl;
//
//	//3���ڽṹ�嶨��ʱ˳�㴴���ṹ�����
//	struct Student
//	{
//		string name;
//		int age;
//		int score;
//	}s3;
//	s3.name = "����";
//	s3.age = 20;
//	s3.score = 60;
//	cout << "������" << s3.name << "���䣺" << s3.age << "������" << s3.score << endl;
//
//	system("pause");
//	return 0;
//}




//�ṹ������
//struct Student
//{
//		string name;
//		int age;
//		int score;
//};
//int main()
//{
//	struct Student stuArray[3] = 
//	{
//		{"����",18,100},
//		{"����",19,80},
//		{"����",20,60}
//	};
////���ṹ�������е�Ԫ�ظ�ֵ
//	stuArray[2].name = "����";
//	stuArray[2].age = 30;
//	stuArray[2].score = 70;
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "  ����:" << stuArray[i].name 
//			 << "  ����:" << stuArray[i].age 
//			 << "  ����:" << stuArray[i].score << endl;
//	}
//	
//
//	system("pause");
//	return 0;
//}



//�ṹ��ָ��
//���ò�����->����ͨ���ṹ��ָ����ʽṹ������
//struct Student
//{
//	string name;
//	int age;
//	int score;
//};
//int main()
//{
//	struct Student s = { "����",18,100 };
//
//	//ͨ��ָ��ָ��ṹ�����
//	struct Student* p = &s;
//
//	//ͨ��ָ����ʽṹ������е�����
//	cout << "  ����:" << p->name
//		 << "  ����:" << p->age
//		 << "  ����:" << p->score << endl;
//
//	system("pause");
//	return 0;
//}






//�ṹ��Ƕ�׽ṹ��
//

//struct Student
//{
//	string name;
//	int age;
//	int score;
//};
//struct teacher
//{
//	int id;
//	string name;
//	int age;
//	struct Student stu;
//};
//
//int main()
//{
//	//������ʦ
//	struct teacher t;
//	t.id = 10000;
//	t.name = "����";
//	t.age = 50;
//	t.stu.name="С��";
//	t.stu.age = 20;
//	t.stu.score = 100;
//
//	cout<< "   ��ʦ����:" << t.name
//		<< "   ��ʦ���:" << t.id
//		<< "   ��ʦ���:" << t.age
//		<< "   ����ѧ������:" << t.stu.name
//		<< "   ����ѧ�����:" << t.stu.age
//		<< "   ����ѧ���ɼ�:" << t.stu.score << endl;
//
//	system("pause");
//	return 0;
//}





//�ṹ������������
//���ṹ����Ϊ���������д���
//ֵ����
// ��ַ����
//
//struct Student
//{
//	string name;
//	int age;
//	int score;
//};
//ֵ����,ͬ���βθı䲻��ı��������е�ʵ��ֵ
//void printStudent1(struct Student s1)
//{
//	s1.age = 100;
//	cout << "������" << s1.name << "��ͣ�" << s1.age << "������" << s1.score << endl;
//
//}
//��ַ���ݣ�ͬ���βθı��ı��������е�ʵ��ֵ
//void printStudent2(struct Student*p)
//{
//	p->age = 100;
//	cout << "������" << p->name << "��ͣ�" << p->age << "������" << p->score << endl;
//}
//int main()
//{
//	struct Student s1;
//	s1.name = "����";
//	s1.age = 18;
//	s1.score = 100;
//	printStudent1(s1);
//	printStudent2(&s1);
//
//	cout << "������"<<"������" << s1.name << "��ͣ�" << s1.age << "������" << s1.score << endl;
//	system("pause");
//	return 0;
//}




//�ṹ���е�constʹ��
//struct Student
//{
//	string name;
//	int age;
//	int score;
//};
//void printStudent1(const Student *s)//const��������޸Ļᱨ����ֹ�����
//{
//	//s->age = 150;//��ֹ�����Ҹ�
//	cout << "������" << s->name << "��ͣ�" << s->age << "������" << s->score << endl;
//}
//int main()
//{
//	struct Student s = {"����",18,100};
//	printStudent1(&s);
//	//cout << "������" << "������" << s1.name << "��ͣ�" << s1.age << "������" << s1.score << endl;
//	system("pause");
//	return 0;
//}



#include <iostream>
#include <ctime>
//�ṹ�尸��
//����1
//struct Student
//{
//	string sName;
//	int score;
//};
//struct Teacher
//{
//	string tName;
//	struct Student sArray[5];
//};
//void allocateSpace(struct Teacher tArray[], int len)
//{
//	string nameSeed = "ABCDE";
//	//����ʦ��ʼ��ֵ
//	for (int i = 0; i < len; i++)
//	{
//		tArray[i].tName = "Teacher_";
//		tArray[i].tName += nameSeed[i];
//		//ͨ��ѭ����ÿ����ʦ������ѧ����ֵ
//		for (int j = 0; j < 5; j++)
//		{
//			tArray[i].sArray[j].sName = "Student)_";
//			tArray[i].sArray[j].sName += nameSeed[j];
//			int random = rand() % 61 + 40;
//			tArray[i].sArray[j].score = random;
//		}
//	}
//}
//void printInfo(struct Teacher tArray[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "��ʦ�����֣�" << tArray[i].tName << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\tѧ�������֣�" << tArray[i].sArray[j].sName << " ѧ���ķ�����" << tArray[i].sArray[j].score << endl;
//			
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	struct Teacher tArray[3];
//	int len = sizeof(tArray) / sizeof(tArray[0]);
//	allocateSpace(tArray, len);
//	printInfo(tArray, len);
//
//	system("pause");
//	return 0;
//}




//����2
#include <string>
struct Hero
{
	string name;
	int age;
	string sex;
};

void bubbleSort(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len - i - 1;j++)
		{
			if(heroArray[j].age> heroArray[j + 1].age)
			{
				struct Hero temp= heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1]= temp;
			}
		}
	}
}
void printHero(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
		{
			cout << "������" << heroArray[i].name  << "  ���䣺" << heroArray[i].age << "  �Ա�" << heroArray[i].sex << endl;
		}
}
int main()
{
	struct Hero heroArray[5] =
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"}
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
		

	//����
	bubbleSort(heroArray, len);
	printHero(heroArray, len);

	system("pause");
	return 0;
}