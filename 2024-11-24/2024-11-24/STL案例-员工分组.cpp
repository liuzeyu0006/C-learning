//#include <iostream>
//#include <vector>
//#include <string>
//#include <map>
//#include <ctime>
//using namespace std;
//
////案例 - 员工分组
////案例描述
////公司今天招聘了10个员工（ABCDEFGHIJ），10名员工进入公司之后，需要指派员工在那个部门工作
////员工信息有 : 姓名 工资组成；部门分为：策划、美术、研发
////随机给10名员工分配部门和工资
////通过multimap进行信息的插入 key(部门编号) value(员工)
////分部门显示员工信息
////
////实现步骤
////1. 创建10名员工，放到vector中
////2. 遍历vector容器，取出每个员工，进行随机分组
////3. 分组后，将员工部门编号作为key，具体员工作为value，放入到multimap容器中
////4. 分部门显示员工信息
//#define CEHUA 0
//#define MEISHU 1
//#define YANFA 2
//class Worker
//{
//public:
//	//Worker(string name, int salary)
//	//{
//	//	this->m_Name = name;
//	//	this->m_Salary = salary;
//	//}
//	string m_Name;
//	int m_Salary;
//};
//void creatWorker(vector<Worker>&v)
//{
//	string nameSeed = "ABCDEFGHIJ";
//	for (int i = 0; i < 10; i++)
//	{
//		Worker worker;
//
//		worker.m_Name = "员工：";
//		worker.m_Name += nameSeed[i];
//
//		worker.m_Salary = rand() % 10000 + 10000;//10000~19999
//		//将员工放入容器中
//		v.push_back(worker);
//	}
//}
////员工的分组
//
//void setGroup(vector<Worker>&v,multimap<int,Worker>&m)
//{
//	for (vector<Worker>::iterator it= v.begin(); it != v.end(); it++)
//	{
//		//产生随机部门编号
//		int deptId = rand() % 3;//0 1 2
//		//将员工插入到分组中
//		//key部门编号，value具体员工
//		m.insert(make_pair(deptId, *it));
//	}
//}
//
////输出标题：首先，程序输出“策划部门：”作为标题。
////查找第一个员工：程序使用 find() 方法定位到 multimap 中策划部门的第一个员工。
////统计员工人数：通过 count() 方法，程序获取该部门的员工总数。
////遍历输出：程序使用 for 循环遍历所有属于策划部门的员工，逐个输出他们的姓名和工资，直到输出所有员工的信息或到达 multimap 的末尾。
//void showWorkerByGroup(multimap<int, Worker>& m)
//{
//	cout << "策划部门：" << endl;
//	multimap<int, Worker>::iterator pos = m.find(CEHUA); //使用 find() 方法定位到 multimap 中策划部门（CEHUA）的第一个员工。
//	int count = m.count(CEHUA);//统计策划具体人数
//	int index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)//index < count：确保已输出的员工数量不超过策划部门的员工总数。
//	{
//		cout << "姓名： " << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
//	}
//
//	cout << "------------------------------------" << endl;
//	cout << "美术部门：" << endl;
//	pos = m.find(MEISHU);
//	count = m.count(MEISHU);//统计美术具体人数
//	index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "姓名： " << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
//	}
//
//	cout << "------------------------------------" << endl;
//	cout << "研发部门：" << endl;
//	pos = m.find(YANFA);
//	count = m.count(YANFA);//统计研发具体人数
//	index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "姓名： " << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
//	}
//
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	//创建员工
//	vector<Worker>vWorker;
//	creatWorker(vWorker);
//
//	//测试
//	//for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
//	//{
//	//	cout << "姓名：" << it->m_Name << "   工资：" << it->m_Salary << endl;
//	//}
//
//	//员工分组
//	multimap<int,Worker>mWorker;
//	setGroup(vWorker, mWorker);
//
//	//分组显示员工
//	showWorkerByGroup(mWorker);
//
//	system("pause");
//	return 0;
//}