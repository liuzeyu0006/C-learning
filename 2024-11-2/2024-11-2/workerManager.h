#pragma once//防止头文件重复包含
#include <iostream>//包含输入输出流头文件
using namespace std;//使用标准命名空间

class WorkerManager
{
public:
	WorkerManager();

	//展示菜单
	void Show_Menu();

	//退出系统
	void ExitSystem();


	~WorkerManager();
};