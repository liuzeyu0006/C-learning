#include <iostream>
using namespace std;
#include <queue>


//queue ����
//queue ��������
//���� : Queue��һ���Ƚ��ȳ�(First In First Out, FIFO)�����ݽṹ��������������
//
//�������������һ������Ԫ�أ�����һ���Ƴ�Ԫ��
//������ֻ�ж�ͷ�Ͷ�β�ſ��Ա����ʹ�ã���˶��в������б�����Ϊ
//�����н����ݳ�Ϊ-- - ���push 
//�����г����ݳ�Ϊ -- ����pop
//
//���캯�� :
//queue<T> que;//queue����ģ����ʵ�֣�queue�����Ĭ�Ϲ�����ʽ
//queue(const queue& que);//�������캯��
//
//��ֵ����:
//queue& operator=(const queue& que);//���صȺŲ�����
//
//���ݴ�ȡ:
//push(elem);//����β���Ԫ��
//pop();//�Ӷ�ͷ�Ƴ���һ��Ԫ��
//back();//�������һ��Ԫ��
//front();//���ص�һ��Ԫ��
//
//��С����:
//empty();//�ж϶�ջ�Ƿ�Ϊ��
//size();//����ջ�Ĵ�С

//class Person
//{
//public:
//	Person(string name,int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//
//void test01()
//{
//	//��������
//	queue<Person>q;
//
//	Person p1("��ɮ", 30);
//	Person p2("���", 300);
//	Person p3("�˽�", 500);
//	Person p4("ɳɮ", 400);
//
//	//���
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//
//	cout << "���д�С��" << q.size() << endl;
//
//	//ֻҪ���в�Ϊ�գ��鿴��ͷ��β������
//	while (!q.empty())
//	{
//		//�鿴��ͷ
//		cout << "��ͷԪ��---������ " << q.front().m_Name << "  ��ͷԪ��---���䣺 " << q.front().m_Age << endl;
//		//�鿴��β
//		cout << "��βԪ��---������ " << q.back().m_Name << "  ��βԪ��---���䣺 " << q.back().m_Age << endl;
//
//		//����
//		q.pop();
//	}
//	cout << "���д�С��" << q.size() << endl;
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}