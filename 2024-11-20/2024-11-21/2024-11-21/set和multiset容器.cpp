#include <iostream>
#include <set>
using namespace std;

//set / multiset ����
//set��������
//
//��飺
//����Ԫ�ض����ڲ���ʱ�Զ�������
//
//���ʣ�
//set / multiset���ڹ���ʽ�������ײ�ṹ���ö�����ʵ�֡�
//
//set��multiset����
//set���������������ظ���Ԫ��
//multiset�������������ظ���Ԫ��
//
//3.8.2 set����͸�ֵ
//��������������set�����Լ���ֵ
//
//���죺
//set<T> st; //Ĭ�Ϲ��캯����
//set(const set& st); //�������캯��
//
//��ֵ��
//set& operator=(const set& st); //���صȺŲ�����

//void PrintSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	set<int>s1;
//	//��������ֻ��insert
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(30);
//
//	//��������
//	//����Ԫ�ض����ڲ���ʱ�Զ�������
//	//set����������ظ�ֵ
//	PrintSet(s1);
//
//	//��������
//	set<int>s2(s1);
//	PrintSet(s1);
//
//	//��ֵ����
//	set<int>s3;
//	s3 = s2;
//	PrintSet(s3);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//--------------------------------------
//set��С�ͽ���
//����������
//ͳ��set������С�Լ�����set����
//����ԭ�ͣ�
//size(); //����������Ԫ�ص���Ŀ
//empty(); //�ж������Ƿ�Ϊ��
//swap(st); //����������������
//void PrintSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	set<int>s1;
//	//��������ֻ��insert
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(50);
//
//	//��������
//	//����Ԫ�ض����ڲ���ʱ�Զ�������
//	//set����������ظ�ֵ
//	PrintSet(s1);
//
//	//�ж��Ƿ�Ϊ��
//	if (s1.empty())
//	{
//		cout << "s1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "s1��Ϊ��" << endl;
//		cout << "s1�Ĵ�СΪ��" << s1.size() << endl;
//	}
//}
//
////����
//void test02()
//{
//	set<int>s1;
//	//��������ֻ��insert
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(50);
//
//	set<int>s2;
//	//��������ֻ��insert
//	s2.insert(100);
//	s2.insert(200);
//	s2.insert(300);
//	s2.insert(400);
//	s2.insert(500);
//
//	cout << "����ǰ" << endl;
//	PrintSet(s1);
//	PrintSet(s2);
//
//	cout << "������" << endl;
//	s1.swap(s2);
//	PrintSet(s1);
//	PrintSet(s2);
//
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}

//---------------------------------
//set�����ɾ��
//����������
//set�������в������ݺ�ɾ������
//����ԭ�ͣ�
//insert(elem); //�������в���Ԫ�ء�
//clear(); //�������Ԫ��
//erase(pos); //ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�������
//erase(beg, end); //ɾ������[beg,end)������Ԫ�� ��������һ��Ԫ�صĵ�������
//erase(elem); //ɾ��������ֵΪelem��Ԫ�ء�

//void PrintSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	set<int>s1;
//	//��������ֻ��insert
//	s1.insert(30);
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(40);
//
//	//��������
//	//����Ԫ�ض����ڲ���ʱ�Զ�������
//	//set����������ظ�ֵ
//	PrintSet(s1);
//
//	//ɾ��
//	//��ɾ��10
//	s1.erase(s1.begin());
//	PrintSet(s1);
//
//	s1.erase(30);
//	PrintSet(s1);
//
//	//���
//	s1.erase(s1.begin(), s1.end());
//	PrintSet(s1);
//
//	s1.clear();
//	PrintSet(s1);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//----------------------------------------------------
//set���Һ�ͳ��
//����������
//��set�������в��������Լ�ͳ������
//����ԭ�ͣ�
//find(key); //����key�Ƿ����,�����ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end();
//count(key); //ͳ��key��Ԫ�ظ���
//����-- - find �����ص��ǵ�������
//ͳ��-- - count ������set�����Ϊ0����1��

//void PrintSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	set<int>s1;
//	//��������ֻ��insert
//	s1.insert(30);
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(40);
//
//	//����
//	set<int>::iterator pos = s1.find(30);
//	if (pos != s1.end())
//	{
//		cout << "�ҵ���Ԫ�� �� " << *pos << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�Ԫ��" << endl;
//	}
//	//ͳ��
// //����set���ԣ�ͳ�ƽ��ҪôΪ0��ҪôΪ1
//	int num = s1.count(30);
//	cout << "num = " << num << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

