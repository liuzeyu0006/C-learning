#include "swap.h"//����Ϊ�Զ���ͷ�ļ�


//�����Ķ���
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}