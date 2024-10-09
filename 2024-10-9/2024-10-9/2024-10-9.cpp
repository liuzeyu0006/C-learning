#include <iostream>
//using namespace std;


//运算符
//加减乘除 正号 负号
//取模% 前置++ 后置++ 前置-- 后置--
//int main()
//{
	//int a = 10;
	//int b = 3;

	//cout << a + b << endl;
	//cout << a - b << endl;
	//cout << a * b << endl;
	//cout << a / b << endl;//值为3，两个整数除依然为整数

	//int a1 = 10;
	//int b1 = 20;
	//cout << a1 / b1 << endl;

	//double d1 = 0.5;
	//double d2 = 0.22;
	//cout << d1 / d2 << endl;//运算结果可以是小数

	////取模运算
	//cout << a % b << endl;
	//cout << a1 % b1 << endl;
	//小数不可以取模，取模时除数不可以是0
	

	// 前置++
	//++a  先++再使用
	// 后置--
	//a--  先使用再--


	//赋值运算符
	//+=  *=  /=  %=


	// 比较运算符
	// 判断是否相等==  判断是否不相等！=  判断是否大于>   
	// 判断是否小于>   判断是否大于等于>=   判断是否小于等于<=
	//cout << (a != b) << endl;
	//cout << (a == b) << endl;


	//逻辑运算符
	//逻辑非！ a假，！a真
	//逻辑与&&  全真则真，否则为假
	//逻辑或||  有真则真，全假才假
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



//程序流程结构
// 顺序  选择  循环  
//if：单行if（条件）{执行语句}  多行  多条件
//int main()
//{
	////单行if，后面不要加分号
	//if (a > 100)
	//{


	//}
	

	//多行if
	/*if (a > 100)
	{

	}
	else 
	{

	}*/


	//多条件if
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

	////嵌套if
	//int a = 0;
	//cout << "请输入分数：" << endl;
	//cin >> a;
	//cout << "你的分数是：" << a << endl;
	//if (a > 100)
	//{
	//	cout << "考入一本大学" << endl;
	//	if (a > 150)
	//	{
	//		cout << "考入北大" << endl;
	//	}
	//	else if (a > 120)
	//	{
	//		cout << "考入清华" << endl;
	//	}
	//	else
	//	{
	//		cout << "考入人大" << endl;
	//	}

	//}
	//else if (a > 50)
	//{
	//	cout << "二本大学" << endl;
	//}
	//else if (a > 20)
	//{
	//	cout << "三本大学" << endl;
	//}
	//else
	//{
	//	cout << "没学上" << endl;
	//}


	//小猪称体重，谁最重？
//	int piga = 0;
//	cout << "输入小猪a的体重：" << endl;
//	cin >> piga;
//	int pigb = 0;
//	cout << "输入小猪b的体重：" << endl;
//	cin >> pigb;
//	int pigc = 0;
//	cout << "输入小猪c的体重：" << endl;
//	cin >> pigc;
//
//	if (piga > pigb)
//	{
//		if (piga > pigc)
//		{
//			cout << "最重的小猪是：a" << endl;
//		}
//		else
//		{
//			cout << "最重的小猪是：c" << endl;
//		}
//	}
//	else
//	{
//		if (pigb>pigc)
//		{
//			cout << "最重的小猪是：b" << endl;
//		}
//		else
//			cout << "最重的小猪是：c" << endl;
//	}
//	system("pause");
//	return 0;
//}


//三目运算符
//1真运行2，返回2
//1假运行3，返回3
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c=(a > b ? a : b);
//	cout << "c=" << c << endl;
//
//	//在三目运算符返回值是变量，可以继续赋值
//	(a < b ? a : b) = 100;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//system("pause");
//return 0;
//}


//switch
//if与switch区别
//switch在判断是只能是整型或者字符型，不能判断区间。
//switch结构清晰，效率高。
//



//while
//必须有跳出循环的出口，否则出现死循环
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

//time的头文件<ctime>
//猜数字游戏
//int main()
//{
//	srand((unsigned int)time(NULL));//根据系统时间来生成真随机数
//	//1、生成伪随机数
//	int num = rand() % 100 + 1;//rand() % 100只能生成0~99，要加1
//	//2、玩家猜数字
//	int val = 0;
//	cout << "输入数字" << endl;
//	
//	//3、判断猜测是否正确
//	while (1)
//	{
//		cin >> val;
//		if (num > val)
//		{
//			cout << "猜小了" << endl;
//		}
//		else if (num < val)
//		{
//			cout << "猜大了" << endl;
//		}
//		else
//		{
//			cout << "猜对了" << endl;
//			break;
//		}
//	}
//	//正确退出游戏，错误提示大小并返回第2步
//	system("pause");
//	return 0;
//}

//do while
//先执行一次循环，再判断循环条件
//int main()
//{
//	int num = 0;
//	/*do{
//		cout << num << endl;
//		num++;
//
//	} while (num);*/ //会执行，先执行一次再判断
//
//
//	while(num){
//		cout << num << endl;
//		num++;
//	}//不会执行，先判断再执行
//	system("pause");
//	return 0;
//}


//水仙花数,do...while
//int main()
//{
//	//1、打印所有三位数
//	int num = 100;
//	do
//	{
//		//如果是水仙花数才打印
//		int a = 0;
//		int b = 0;
//		int c = 0;
//		a = num % 10;//获取个位数
//		b = num / 10 % 10;//获取十位数
//		c = num / 100;//获取百位数
//
//		if (a * a * a + b * b * b + c * c * c == num)
//		{
//			cout << num << endl;
//		}
//		num++;
//	} while (num < 1000);
//	//2、从所有三位数中获取水仙花数
//	system("pause");
//	return 0;
//}


////for循环
////（起始表达式；条件表达式；末尾循环体）
//int main()
//{
//	for (int i = 0; i < 10; i++)//分号隔开
//	{
//		cout << i << endl;
//	}
//	system("pause");
//	return 0;
//}

//using namespace std;
////敲桌子
//int main()
//{
//
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i%7 == 0 || i%10 == 7 || i / 10 == 7) 
//		//  7的倍数     个位是7      十位是7
//		{
//			cout << "敲桌子" << endl;
//		}
//		else
//		{
//			cout << i << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}


//嵌套循环,外层执行一次，内层执行一轮
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


//乘法口诀表
//列数*行数=计算结果
//列数<=当前行数
//using namespace std;
//int main()
//{
//	for (int i = 1; i < 10; i++)//行数i 列数j
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



//break 跳出选择结构或循环结构
// 终止case并跳出switch
// 跳出当前循环语句
// 嵌套中，跳出最近的内层循环语句

//using namespace std;
//int main()
//{
//	// 跳出当前循环语句
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