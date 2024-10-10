#include <iostream>
using namespace std;
//continue可以筛选条件，执行到此就不在向下进行
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


//goto跳转语句
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

//数组:相同数据类型，内存中是连续的
//一维数组定义
//数据类型 数组名[数组长度]；
//数据类型 数组名[数组长度]={值1,值2,...}；
////数据类型 数组名[]={值1,值2,...}；
//int main()
//{
	//数据类型 数组名[数组长度]；
	//int arr[5];
	//arr[0] = 10;//下标从0开始索引
	//arr[1] = 20;
	//arr[2] = 30;
	//arr[3] = 40;
	//arr[4] = 50;
	//cout << arr[0] << endl;
	//cout << arr[1] << endl;
	//cout << arr[2] << endl;
	//cout << arr[3] << endl;
	//cout << arr[4] << endl;

	//数据类型 数组名[数组长度]={值1,值2,...}；
	//int arr2[5] = {10,20,30,40,50};
	//数据类型 数组名[]={值1,值2,...}；


	//int arr2[] = { 10,20,30 };//第3和4元素赋值为0，用0补齐
	////定义数组必须有初始长度
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << arr2[i] << endl;
	//}
	//system("pause");
	//return 0;


	//一维数组名作用
	//统计整个数组在内存中的长度    元素个数sizeof(arr)/sizeof(arr[0])
	// 可以获取数组在内存中的首地址   cout<<arr<<endl;
	
	/*int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	cout << "整个数组的长度" << sizeof(arr) << endl;
	cout << "每个元素的长度" << sizeof(arr[0]) << endl;
	cout << "元素个数" << sizeof(arr)/sizeof(arr[0]) << endl;

	cout << "数组的地址" << arr << endl;
	cout << "数组的首元素地址" << &arr[0]<< endl;
	cout << "数组的首元素地址" << &arr[1] << endl;
	system("pause");
	return 0;*/
//}


//五只小猪称体重:先认定一个最大值，再去作比较
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
//	cout << "最重的小猪是：" <<max<< endl;
//	system("pause");
//	return 0;
//}


//元素逆置
//int main()
//{
//	int arr[] = { 1,3,2,5,4 };
//	int start = 0;//初始下表
//	int end = sizeof(arr) / sizeof(arr[0]) - 1;//结束下标
//	while (start<end)//while条件判断要注意
//	{
//		int temp = arr[start];//temp:临时变量
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



//冒泡排序
//
// 排序总轮数=元素个数-1；
// 每轮对比次数=元素个数-排序轮数-1；
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


//二维数组
//int main()
//{
//	/*数据类型 数组名[行数][列数];
//	数据类型 数组名[行数][列数] = { {数据1，数据2}，{数据3，数据4} };
//	数据类型 数组名[行数][列数] = { 数据1，数据2，数据3，数据4 };
//	数据类型 数组名[][列数] = { 数据1，数据2，数据3，数据4 };*/
//		
//	int arr[2][3];
//	arr[0][0] = 1;
//	//外循环打印行数，内循环打印列数
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
//	int arr4[][3] = { 1,2,3,4,5,6 };//只写列数可以，只写行数不可以
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


//二维数组的数组名
//查看二维数组所占的内存空间
// 获取二维数组的首地址
////
//int main()
//{
//	int arr[2][3] =
//	{
//		{1,2,3},
//		{4,5,6}
//	};
//	//所占内存空间
//	cout << sizeof(arr) << endl;
//	cout << sizeof(arr[0]) << endl;//第一行占用空间
//	cout << sizeof(arr[0][0]) << endl;//每个元素占用空间
//	cout << sizeof(arr)/sizeof(arr[0]) << endl;//行数
//	cout << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;//列数
//
//
//	//首地址
//	cout << arr << endl;
//	cout << arr[0] << endl;
//	cout << arr[1] << endl;
//	cout << (int)&arr[0][0] << endl;
//
//	system("pause");
//	return 0;
//}



//考试成绩统计
//int main()
//{
//	int scores[3][3]
//	{
//		{100,100,100},
//		{70,80,100},
//		{60,70,80}
//	};
//
//	string name[3] = { "张三","李四","王五" };
//	for (int i = 0; i < 3; i++)
//	{
//		int sum = 0;
//		for (int j = 0; j < 3; j++)
//		{
//			sum = sum + scores[i][j];
//			/*cout << scores[i][j] <<" ";*/
//		}
//		cout <<name[i]<<"的成绩总和为" <<sum << endl;
//	}
//	system("pause");
//	return 0;
//}



//函数
//返回值类型
// 函数名
// 参数表列
// 函数体语句
// return表达式

//int add(int num1, int num2) //num为形参
//{
//	int sum = num1 + num2;
//	return sum;
//}
//int main()
//{
//	int a = 10;//实参，调用函数时传递给形参
//	int b = 20;
//	int c = add(a, b);
//	cout << c << endl;
//	system("pause");
//	return 0;
//}



//值传递,形参发生改变不会影响实参
//函数不需要返回值（两数互换），声明函数类型可void
//void swap(int num1, int num2) //num为形参
//{
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//	cout << num1<<" ";
//	cout << num2;
//}
//int main()
//{
//	int a = 10;//实参，调用函数时传递给形参
//	int b = 20;
//	swap(a, b);
//	system("pause");
//	return 0;
//}


//函数的样式
//无参无返
//有参无返
// 无参有返
// 有参有返

//无参无返
//void test01()
//{
//	cout << "test01" << endl;
//}
////有参无返
//void test02(int a)
//{
//	cout << "test02" << a << endl;
//}
//// 无参有返
//int test03()
//{
//	cout << "test03" << endl;
//	return 1000;
//}
//// 有参有返
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