#include <iostream>
using namespace std;
#include <stack>

//stack����
//stack ��������
//���� : stack��һ���Ƚ����(First In Last Out, FILO)�����ݽṹ����ֻ��һ������
//
//push()  ��ջ
//pop()  ��ջ
//
//ջ��ֻ�ж��˵�Ԫ�زſ��Ա����ʹ�ã����ջ�������б�����Ϊ


//stack ���ýӿ�
//�������� : ջ�������õĶ���ӿ�
//���캯�� :
//
//stack<T> stk;//stack����ģ����ʵ��  stack�����Ĭ�Ϲ�����ʽ
//stack(const stack& stk); //�������캯��
//
//��ֵ���� :
//stack & operator=(const stack & stk);//���صȺŲ�����
//
//���ݴ�ȡ:
//push(elem);//��ջ�����Ԫ��
//pop();//��ջ���Ƴ���һ��Ԫ��
//top();//����ջ��Ԫ��
//
//��С����:
//empty();//�ж϶�ջ�Ƿ�Ϊ��
//size();//����ջ�Ĵ�С

//void test01()
//{
//	//�ص㣺�����Ƚ���������ݽṹ
//	stack<int>s;
//
//	//��ջ
//	s.push(10);
//	s.push(20);
//	s.push(30);
//	s.push(40);
//
//	cout << "ջ�Ĵ�С��" << s.size() << endl;
//
//	//ֻҪջ��Ϊ�գ��鿴ջ������ִ�г�ջ����
//	while (!s.empty())
//	{
//		//�鿴ջ��Ԫ��
//		cout << "ջ��Ԫ��Ϊ��" << s.top() << endl;
//
//		//��ջ
//		s.pop();
//	}
//	cout << "ջ�Ĵ�С��" << s.size() << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}