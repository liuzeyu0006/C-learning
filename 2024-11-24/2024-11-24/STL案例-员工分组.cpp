//#include <iostream>
//#include <vector>
//#include <string>
//#include <map>
//#include <ctime>
//using namespace std;
//
////���� - Ա������
////��������
////��˾������Ƹ��10��Ա����ABCDEFGHIJ����10��Ա�����빫˾֮����Ҫָ��Ա�����Ǹ����Ź���
////Ա����Ϣ�� : ���� ������ɣ����ŷ�Ϊ���߻����������з�
////�����10��Ա�����䲿�ź͹���
////ͨ��multimap������Ϣ�Ĳ��� key(���ű��) value(Ա��)
////�ֲ�����ʾԱ����Ϣ
////
////ʵ�ֲ���
////1. ����10��Ա�����ŵ�vector��
////2. ����vector������ȡ��ÿ��Ա���������������
////3. ����󣬽�Ա�����ű����Ϊkey������Ա����Ϊvalue�����뵽multimap������
////4. �ֲ�����ʾԱ����Ϣ
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
//		worker.m_Name = "Ա����";
//		worker.m_Name += nameSeed[i];
//
//		worker.m_Salary = rand() % 10000 + 10000;//10000~19999
//		//��Ա������������
//		v.push_back(worker);
//	}
//}
////Ա���ķ���
//
//void setGroup(vector<Worker>&v,multimap<int,Worker>&m)
//{
//	for (vector<Worker>::iterator it= v.begin(); it != v.end(); it++)
//	{
//		//����������ű��
//		int deptId = rand() % 3;//0 1 2
//		//��Ա�����뵽������
//		//key���ű�ţ�value����Ա��
//		m.insert(make_pair(deptId, *it));
//	}
//}
//
////������⣺���ȣ�����������߻����ţ�����Ϊ���⡣
////���ҵ�һ��Ա��������ʹ�� find() ������λ�� multimap �в߻����ŵĵ�һ��Ա����
////ͳ��Ա��������ͨ�� count() �����������ȡ�ò��ŵ�Ա��������
////�������������ʹ�� for ѭ�������������ڲ߻����ŵ�Ա�������������ǵ������͹��ʣ�ֱ���������Ա������Ϣ�򵽴� multimap ��ĩβ��
//void showWorkerByGroup(multimap<int, Worker>& m)
//{
//	cout << "�߻����ţ�" << endl;
//	multimap<int, Worker>::iterator pos = m.find(CEHUA); //ʹ�� find() ������λ�� multimap �в߻����ţ�CEHUA���ĵ�һ��Ա����
//	int count = m.count(CEHUA);//ͳ�Ʋ߻���������
//	int index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)//index < count��ȷ���������Ա�������������߻����ŵ�Ա��������
//	{
//		cout << "������ " << pos->second.m_Name << " ���ʣ�" << pos->second.m_Salary << endl;
//	}
//
//	cout << "------------------------------------" << endl;
//	cout << "�������ţ�" << endl;
//	pos = m.find(MEISHU);
//	count = m.count(MEISHU);//ͳ��������������
//	index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "������ " << pos->second.m_Name << " ���ʣ�" << pos->second.m_Salary << endl;
//	}
//
//	cout << "------------------------------------" << endl;
//	cout << "�з����ţ�" << endl;
//	pos = m.find(YANFA);
//	count = m.count(YANFA);//ͳ���з���������
//	index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "������ " << pos->second.m_Name << " ���ʣ�" << pos->second.m_Salary << endl;
//	}
//
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	//����Ա��
//	vector<Worker>vWorker;
//	creatWorker(vWorker);
//
//	//����
//	//for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
//	//{
//	//	cout << "������" << it->m_Name << "   ���ʣ�" << it->m_Salary << endl;
//	//}
//
//	//Ա������
//	multimap<int,Worker>mWorker;
//	setGroup(vWorker, mWorker);
//
//	//������ʾԱ��
//	showWorkerByGroup(mWorker);
//
//	system("pause");
//	return 0;
//}