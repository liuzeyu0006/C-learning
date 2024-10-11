#include <iostream>
using namespace std;

////函数的声明可以有多次
//int max(int a, int b);
//int max(int a, int b);
//int max(int a, int b);

//提前告诉编译器存在
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
////函数的定义。声明可以有多次，定义只能有一次
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



//函数的分文件编写
//创建.h的头文件用来写函数的声明
//创建.cpp的源文件用来写函数的定义
// 
//函数的声明
//void swap(int a, int b);
////函数的定义
//void swap(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//}

//#include "swap.h"//再包含一下自己的头文件就可以引用函数了
//int main()
//{
//	int x = 10;
//	int y = 20;
//	
//	swap(x, y);
//	system("pause");
//	return 0;
//}



//指针:可以通过指针来保存一个地址
//int main()
//{
//	int a = 10;
//	int* p;
//	p = &a;
//	cout << p << endl;
//
//
//	//使用指针：解引用,来指向指针中的数据
//	*p = 1000;
//	cout << a << endl;
//	system("pause");
//	return 0;
//}


//指针所占的内存空间
//不管是什么类型的指针，在32位操作空间下，指针占4个字节，64位下指针占8个字节
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



//空指针和野指针
//空指针：指向内存中编号为0的空间，用于初始化指针变量，空指针指向的内存不可以访问
// 0~255之间的内存编号是系统占用的，不可以访问。
//
//int main()
//{
//	//int* p = NULL;
// 
////野指针：指向非法的向量空间
//	int* p = (int*)0x1100;//随便找个地址不可以去操作的，属于非法向量空间。
//	system("pause");
//	return 0;
//}




//const修饰指针
//const修饰指针-常量指针
// const修饰常量-指针常量
// const既修饰指针，又修饰常量
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	const int* p = &a;//常量指针，指针指向可以修改，指针内容不可以修改。
//	//*p=20;错     p=&b;对
//
//	int* const p = &a;//指针常量，指针指向不可以改，指针内容可以修改。
//	//*p=20;对     p=&b;错
//
//	const int* const p = &a;//指针的指向和内容都不允许修改。
//	//*p=20;错     p=&b;错
//
//	system("pause");
//	return 0;
//}



////指针和数组：利用指针访问数组中的元素
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
////指针和函数
////利用指针作为函数参数，可以修改实参的值
//int main()
//{
//	//1、值传递：不会改变实参的值
//	//2、地址传递：会改变实参的值
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	cout << a << endl;
//	cout << b << endl;
//
//	system("pause");
//	return 0;
//}



//指针、数组、函数
//封装一个函数，利用冒泡排序，实现对整形数组的升序排列

//void bubbleSort(int*arr,int len)//学会如何将数组传递到函数中int*arr，冒泡排序熟练应用
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



//结构体 用户自定义的数据类型
//struct 结构体名{结构体成员列表}；
#include <string>
//学生（姓名，年龄，分数）


//定义结构体时struct不可以省略
//struct Student
//{
//	string name;
//	int age;
//	int score;
//};
//int main()
//{
//	//1、struct Student s1
//	//cpp中结构体创建变量时struct关键字可以省略
//	struct Student s1;
//	//通过.来访问结构体变量中的属性
//	s1.name = "张三";
//	s1.age = 18;
//	s1.score = 100;
//	cout << "姓名：" << s1.name << "年龄：" << s1.age << "分数：" << s1.score << endl;
//
//	//2、struct Student s2={};
//	struct Student s2 = {"李四",19,80};
//	cout << "姓名：" << s2.name << "年龄：" << s2.age << "分数：" << s2.score << endl;
//
//	//3、在结构体定义时顺便创建结构体变量
//	struct Student
//	{
//		string name;
//		int age;
//		int score;
//	}s3;
//	s3.name = "王五";
//	s3.age = 20;
//	s3.score = 60;
//	cout << "姓名：" << s3.name << "年龄：" << s3.age << "分数：" << s3.score << endl;
//
//	system("pause");
//	return 0;
//}




//结构体数组
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
//		{"张三",18,100},
//		{"李四",19,80},
//		{"王五",20,60}
//	};
////给结构体数组中的元素赋值
//	stuArray[2].name = "赵六";
//	stuArray[2].age = 30;
//	stuArray[2].score = 70;
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "  姓名:" << stuArray[i].name 
//			 << "  年龄:" << stuArray[i].age 
//			 << "  分数:" << stuArray[i].score << endl;
//	}
//	
//
//	system("pause");
//	return 0;
//}



//结构体指针
//利用操作符->可以通过结构体指针访问结构体属性
//struct Student
//{
//	string name;
//	int age;
//	int score;
//};
//int main()
//{
//	struct Student s = { "张三",18,100 };
//
//	//通过指针指向结构体变量
//	struct Student* p = &s;
//
//	//通过指针访问结构体变量中的数据
//	cout << "  姓名:" << p->name
//		 << "  年龄:" << p->age
//		 << "  分数:" << p->score << endl;
//
//	system("pause");
//	return 0;
//}






//结构体嵌套结构体
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
//	//创建老师
//	struct teacher t;
//	t.id = 10000;
//	t.name = "张三";
//	t.age = 50;
//	t.stu.name="小王";
//	t.stu.age = 20;
//	t.stu.score = 100;
//
//	cout<< "   老师姓名:" << t.name
//		<< "   老师编号:" << t.id
//		<< "   老师年纪:" << t.age
//		<< "   辅导学生姓名:" << t.stu.name
//		<< "   辅导学生年纪:" << t.stu.age
//		<< "   辅导学生成绩:" << t.stu.score << endl;
//
//	system("pause");
//	return 0;
//}





//结构体做函数参数
//将结构体作为参数向函数中传递
//值传递
// 地址传递
//
//struct Student
//{
//	string name;
//	int age;
//	int score;
//};
//值传递,同样形参改变不会改变主函数中的实参值
//void printStudent1(struct Student s1)
//{
//	s1.age = 100;
//	cout << "姓名：" << s1.name << "年纪：" << s1.age << "分数：" << s1.score << endl;
//
//}
//地址传递，同样形参改变会改变主函数中的实参值
//void printStudent2(struct Student*p)
//{
//	p->age = 100;
//	cout << "姓名：" << p->name << "年纪：" << p->age << "分数：" << p->score << endl;
//}
//int main()
//{
//	struct Student s1;
//	s1.name = "张三";
//	s1.age = 18;
//	s1.score = 100;
//	printStudent1(s1);
//	printStudent2(&s1);
//
//	cout << "主函数"<<"姓名：" << s1.name << "年纪：" << s1.age << "分数：" << s1.score << endl;
//	system("pause");
//	return 0;
//}




//结构体中的const使用
//struct Student
//{
//	string name;
//	int age;
//	int score;
//};
//void printStudent1(const Student *s)//const加入后，有修改会报错，防止误操作
//{
//	//s->age = 150;//防止数据乱改
//	cout << "姓名：" << s->name << "年纪：" << s->age << "分数：" << s->score << endl;
//}
//int main()
//{
//	struct Student s = {"张三",18,100};
//	printStudent1(&s);
//	//cout << "主函数" << "姓名：" << s1.name << "年纪：" << s1.age << "分数：" << s1.score << endl;
//	system("pause");
//	return 0;
//}



#include <iostream>
#include <ctime>
//结构体案例
//案例1
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
//	//给老师开始赋值
//	for (int i = 0; i < len; i++)
//	{
//		tArray[i].tName = "Teacher_";
//		tArray[i].tName += nameSeed[i];
//		//通过循环给每名老师所带的学生赋值
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
//		cout << "老师的名字：" << tArray[i].tName << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\t学生的名字：" << tArray[i].sArray[j].sName << " 学生的分数：" << tArray[i].sArray[j].score << endl;
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




//案例2
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
			cout << "姓名：" << heroArray[i].name  << "  年龄：" << heroArray[i].age << "  性别：" << heroArray[i].sex << endl;
		}
}
int main()
{
	struct Hero heroArray[5] =
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"}
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
		

	//排序
	bubbleSort(heroArray, len);
	printHero(heroArray, len);

	system("pause");
	return 0;
}