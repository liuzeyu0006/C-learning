#include <iostream>
using namespace std;
#include <string>


//C++����ģ�ͺ�thisָ��
//��C++�У����ڵĳ�Ա�����ͳ�Ա�����ֿ��洢
//ֻ�зǾ�̬��Ա��������Ķ�����
class Person
{
	int m_A;//�Ǿ�̬��Ա����  ������Ķ����� 
	static int m_B;//��̬��Ա���������������������ʼ��
	               //��������Ķ�����

	void func() {}//�Ǿ�̬��Ա������ֻ��һ�ݣ���������Ķ�����
	static void func2() {}//��̬��Ա���� ��������Ķ�����
};
int Person::m_B = 0;
void test01()
{
	Person p;
	//�ն���ռ�õ��ڴ�ռ�Ϊ��1���ֽ�
	//C++���������ÿ���ն���Ҳ����һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
	cout << "size of p=" << sizeof(p) << endl;
}
void test02()
{
	Person p;
	cout << "size of p=" << sizeof(p) << endl;
}
int main()
{
	test01();
	test02();

	system("pause");
	return 0;
}