#include <iostream>
using namespace std;
#include "WorkerManager.h"

//#include "worker.h"
//#include "employee.h"
//#include "manager.h"
//#include "boss.h"

int main()
{

	////测试代码
	//Worker* worker = NULL;
	//worker = new Employee(1, "张三", 1);
	//worker->showInfo();
	//delete worker;

	//worker = new Manager(2, "张三", 2);
	//worker->showInfo();
	//delete worker;

	//worker = new Boss(3, "张三", 3);
	//worker->showInfo();
	//delete worker;


	//实例化管理者对象
	WorkerManager wm;
	int choice = 0;
	while (true)
	{
		//调用展示菜单的成员函数
		wm.Show_Menu();

		cout << "请输入您的选择：" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0://退出系统
			wm.ExitSystem();
			break;
		case 1://增加职工
			wm.Add_Emp();
			break;
		case 2://显示职工
			break;
		case 3://删除职工
			break;
		case 4://修改职工
			break;
		case 5://查找职工
			break;
		case 6://排序职工
			break;
		case 7://清空文档
			break;
		default:
			system("cls");
			break;
		}
	}

	system("pause");
	return 0;
}