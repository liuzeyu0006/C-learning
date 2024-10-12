//通讯录管理系统
// 添加联系人
//系统中需要实现的功能如下:
//添加联系人 : 向通讯录中添加新人，信息包括(姓名、性别、年龄、联系电话、家庭住址)最多记录1000人
//显示联系人 : 显示通讯录中所有联系人信息
//删除联系人 : 按照姓名进行删除指定联系人
//查找联系人 : 按照姓名查看指定联系人信息
//修改联系人 : 按照姓名重新修改指定联系人
//清空联系人 : 清空通讯录中所有信息
//退出通讯录 : 退出当前使用的通讯录
#include <iostream>
using namespace std;
#include <string>
#define MAX 1000

//设计联系人结构体
struct Person
{
	string m_Name;
	int m_Sex;
	int m_Age;
	string m_Phone;
	string m_Addr;
};
//通讯录的结构体
struct Addressbooks 
{
	//通讯录中保存的联系人数组
	struct Person personArray[MAX];

	//通讯录中当前记录联系人个数
	int m_Size;
};

//1、添加联系人
void addPerson(Addressbooks* abs)
{
	//判断通讯录是否满了
	if (abs->m_Size == MAX)
	{
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
	else
	{
		//添加联系人
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name= name;

		//添加性别
		cout << "请输入性别：" << endl;
		cout << "1--男" << endl;
		cout << "2--女" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
				cout << "输入非法，请重新输入！" << endl;
		}
		//添加年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		//添加电话
		cout << "请输入联系电话：" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//添加家庭住址
		cout << "请输入家庭住址" << endl;
		string addr;
		cin >> addr;
		abs->personArray[abs->m_Size].m_Addr = addr;

		//更新通讯录中的人数
		abs->m_Size++;
		cout << "添加成功"<<endl;

		system("pause");//请按任意键继续
		system("cls");//清屏操作
	}
}

//显示联系人
void showPerson(Addressbooks* abs)
{
	//判断通讯录中是否为0
	if (abs->m_Size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名：" << abs->personArray[i].m_Name <<"\t";
			cout << "性别：" << (abs->personArray[i].m_Sex ==1?"男":"女" )<< "\t";
			cout << "年龄：" << abs->personArray[i].m_Age << "\t";
			cout << "电话：" << abs->personArray[i].m_Phone << "\t";
			cout << "住址：" << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");//请按任意键继续
	system("cls");//清屏操作
}


//显示菜单
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出通讯录  *****" << endl;
	cout << "***************************" << endl;
}
int main()
{
	//创建通讯录结构体变量
	Addressbooks abs;
	//初始化通讯录中当前人个数
	abs.m_Size = 0;


	int select = 0;
	//菜单的调用
	while (true)
	{
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1://添加联系人 
			addPerson(&abs);
			break;

		case 2://显示联系人
			showPerson(&abs);
			break;

		case 3://删除联系人
			break;

		case 4://查找联系人
			break;

		case 5://修改联系人
			break;

		case 6://清空联系人
			break;

		case 0://退出通讯录 
			cout << "欢迎下次使用！" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	system("pause");
	return 0;
}