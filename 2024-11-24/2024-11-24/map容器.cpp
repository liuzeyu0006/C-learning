#include <iostream>
#include <map>
#include <string>
using namespace std;

//map��������
//
//��飺
//map������Ԫ�ض���pair
//pair�е�һ��Ԫ��Ϊkey����ֵ�������������ã��ڶ���Ԫ��Ϊvalue��ʵֵ��
//����Ԫ�ض������Ԫ�صļ�ֵ�Զ�����
//
//���ʣ�
//map / multimap���ڹ���ʽ�������ײ�ṹ���ö�����ʵ�֡�
//
//�ŵ㣺
//���Ը���keyֵ�����ҵ�valueֵ
// 
//map��multimap����
//map���������������ظ�keyֵԪ��
//multimap�������������ظ�keyֵԪ��
//
//map����͸�ֵ
//����������
//��map�������й���͸�ֵ����
//
//���죺
//map<T1, T2> mp; //mapĬ�Ϲ��캯��:
//map(const map& mp); //�������캯��
//
//��ֵ��
//map& operator=(const map& mp); //���صȺŲ�����

//void printMap(map<int, int> &m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "������" << (*it).first << " ֵ��" << it->second<< endl;
//	}
//	cout << endl;
//}
//void test01()
//{
//	map<int, int> m;
//
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//	m.insert(pair<int, int>(2, 20));
//
//	printMap(m);
//
//	//��������
//	map<int, int> m2(m);
//	printMap(m2);
//
//	//��ֵ
//	map<int, int> m3;
//	m3 = m2;
//	printMap(m3);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//map��С�ͽ���
//����������
//ͳ��map������С�Լ�����map����
//����ԭ�ͣ�
//size(); //����������Ԫ�ص���Ŀ
//empty(); //�ж������Ƿ�Ϊ��
//swap(st); //����������������

//void printMap(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "������" << (*it).first << " ֵ��" << it->second << endl;
//	}
//	cout << endl;
//}
//void test01()
//{
//	map<int, int> m;
//
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//	m.insert(pair<int, int>(2, 20));
//
//	printMap(m);
//
//	if (m.empty())
//	{
//		cout << "mΪ��" << endl;
//	}
//	else
//	{
//		cout << "m��Ϊ��" << endl;
//		cout << "��СΪ��"<<m.size() << endl;
//	}
//}
//void test02()
//{
//	map<int, int> m;
//
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//	m.insert(pair<int, int>(2, 20));
//
//	map<int, int> m2;
//
//	m2.insert(pair<int, int>(1, 100));
//	m2.insert(pair<int, int>(3, 300));
//	m2.insert(pair<int, int>(4, 400));
//	m2.insert(pair<int, int>(2, 200));
//
//	cout << "����ǰ��" << endl;
//	printMap(m);
//	printMap(m2);
//
//	cout << "������" << endl;
//	m.swap(m2);
//	printMap(m);
//	printMap(m2);
//}
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//}


//map�����ɾ��
//����������
//map�������в������ݺ�ɾ������
//����ԭ�ͣ�
//insert(elem); //�������в���Ԫ�ء�
//clear(); //�������Ԫ��
//erase(pos); //ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�������
//erase(beg, end); //ɾ������[beg,end)������Ԫ�� ��������һ��Ԫ�صĵ�������
//erase(key); //ɾ��������ֵΪkey��Ԫ�ء�
//void printMap(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "������" << (*it).first << " ֵ��" << it->second << endl;
//	}
//	cout << endl;
//}
//void test01()
//{
//	//����
//	map<int, int> m;
//	//��һ�ֲ��뷽ʽ
//	m.insert(pair<int, int>(1, 10));
//	//�ڶ��ֲ��뷽ʽ
//	m.insert(make_pair(2, 20));
//	//�����ֲ��뷽ʽ
//	m.insert(map<int, int>::value_type(3, 30));
//	//�����ֲ��뷽ʽ
//	m[4] = 40;//���Ƽ����룬����������key����value
//	printMap(m);
//
//	//ɾ��
//	m.erase(m.begin());
//	printMap(m);
//	m.erase(3);
//	printMap(m);
//
//	//���
//	m.erase(m.begin(), m.end());
//	m.clear();
//	printMap(m);
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}


//map���Һ�ͳ��
//����������
//��map�������в��������Լ�ͳ������
//����ԭ�ͣ�
//find(key); //����key�Ƿ����,�����ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end();
//count(key); //ͳ��key��Ԫ�ظ���

//void test01()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	//����
//	map<int, int>::iterator pos = m.find(3);
//	if (pos != m.end())
//	{
//		cout << "�ҵ���Ԫ�� key = " << (*pos).first << " value = " << (*pos).second << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�Ԫ��" << endl;
//	}
//	//ͳ��
//	//map����������ظ�key Ԫ�أ�countͳ�ƶ��� ���Ҫô��0Ҫô��1I
//	//multimap��countͳ�ƿ��ܴ���1
//	int num = m.count(3);
//	cout << "num = " << num << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}



//map��������
//ѧϰĿ�꣺
//map����Ĭ���������Ϊ ����keyֵ���� ��С��������������θı��������
//��Ҫ������ :
//���÷º��������Ըı��������

//class MyCompare {
//public:
//	bool operator()(int v1, int v2) const
//	{
//		return v1 > v2;
//	}
//};
//void test01()
//{
//	//Ĭ�ϴ�С��������
//	//���÷º���ʵ�ִӴ�С����
//	map<int, int, MyCompare> m;
//	m.insert(make_pair(1, 10));
//	m.insert(make_pair(2, 20));
//	m.insert(make_pair(3, 30));
//	m.insert(make_pair(4, 40));
//	m.insert(make_pair(5, 50));
//	for (map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++) 
//	{
//		cout << "key:" << it->first << " value:" << it->second << endl;
//	}
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}