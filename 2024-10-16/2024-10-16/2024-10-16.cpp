//#include <iostream>
//using namespace std;
//#include <string>

//��Ͷ���
//C++��������������������װ���̳С���̬

//��װ������
//�����Ժ���Ϊ��Ϊһ�����壬���������е�����
// �����Ժ���Ϊ����Ȩ�޿���
// 
// �﷨��class ����{ ����Ȩ�ޣ�����/��Ϊ}
//
//const double PI = 3.14;
//class Circle
//{
//	//����Ȩ��
//	//����Ȩ��
//public:
//	//����  һЩ����
//	//�뾶
//	int m_r;
//
//	//��Ϊ  �ú��������
//	//��ȡԲ���ܳ�  һ����дһ������
//	double calculateZC()
//	{
//		return 2 * PI * m_r;
//	}
//};
//int main()
//{
//	//ͨ��Բ�� ���������Բ������
//	//ʵ������ͨ��һ���� ����һ������Ĺ��̣�
//	Circle c1;
//	//��Բ���� �����Խ��и�ֵ
//	c1.m_r = 10;
//	//�����ܳ�
//	cout << "Բ���ܳ�Ϊ��" << c1.calculateZC() << endl;
//	system("pause");
//	return 0;
//}



//class Student
//{
//public:
//
//	//���е����Ժ���Ϊ��ͳһ��Ϊ ��Ա
//	//����  ��Ա���� ��Ա����
//	//��Ϊ  ��Ա���� ��Ա����
//
//	//����
//	string m_Name;
//	int m_Id;
//	//��Ϊ
//	void ShowInfor()
//	{
//		cout << " ������ " << m_Name << " ѧ�ţ� " << m_Id << endl;
//	}
//	//��������ֵ
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	//��ѧ�Ÿ�ֵ
//	void setId(int id)
//	{
//		m_Id = id;
//	}
//};
//int main()
//{
//	Student s1;
//	cout << " ������ѧ�������� " << endl;
//	cin >> s1.m_Name;
//
//	cout << " ������ѧ��ѧ�ţ� " << endl;
//	cin >> s1.m_Id;
//	s1.ShowInfor();
//
//	Student s2;
//	s2.setName("����");
//	s2.setId(12);
//	s2.ShowInfor();
//
//	system("pause");
//	return 0;
//}



//�������ʱ�����԰����Ժ���Ϊ���ڲ�ͬȨ���¼��Կ���
//����Ȩ�����֣�
//public    ����Ȩ��  ���ڿ��Է���  ������Է���
//protected ����Ȩ��  ���ڿ��Է���  ���ⲻ���Է���  ���ӿ��Է��ʸ����еı�������
//private   ˽��Ȩ��  ���ڿ��Է���  ���ⲻ���Է���  ���Ӳ����Է��ʸ����еı�������

//class Person 
//{
//public:
//	string m_Name;
//protected:
//	string m_Car;
//private:
//	int m_Password;
//public:
//	void func()
//	{
//		//���ڿ��Է���
//		m_Name = "����";
//		m_Car = "������";
//		m_Password = 123456;
//	}
//};
//int main()
//{
//	Person p1;
//	p1.m_Name = "����";
//	//p1.m_Car = "����";//����Ȩ�����������ⲻ�ɷ���
//	//p1.m_Password = 123;//˽��Ȩ�����������ⲻ�ɷ���
//	system("pause");
//	return 0;
//}



//struct��class������

//Ψһ��������Ƿ���Ȩ�޲�ͬ
//structĬ��Ȩ���ǹ���
//classĬ��Ȩ��Ϊ˽��

//class C1
//{
//	int m_A;//Ĭ��Ȩ����˽��
//};
//struct C2
//{
//	int m_A;//Ĭ��Ȩ���ǹ���
//};
//int main()
//{
//	C1 c1;
//	c1.m_A = 100;//Ĭ��Ȩ����˽�в��ɷ���
//
//	C2 c2;
//	c2.m_A = 100;//Ĭ��Ȩ���ǹ��� �ɷ���
//
//	system("pause");
//	return 0;
//}




//��Ա��������Ϊ˽��
//�ŵ�1�������г�Ա��������Ϊ˽�У������Լ����ƶ�дȨ��
//�ŵ�2������дȨ�ޣ����Լ�⵽���ݵ���Ч��

//class Person
//{
//public:
//	//��������
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	//��ȡ����
//	string getName()
//	{
//		return m_Name;
//	}
//	//��ȡ����
//	int getAge()
//	{
//		return m_Age;
//	}
//	//��������
//	void setAge(int age)
//	{
//		if (age < 0 || age>150)
//		{
//			cout << "�������󣬸�ֵʧ��" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//	//����ż��
//	void setIdol(string idol)
//	{
//		m_Idol=idol;
//	}
//private:
//	string m_Name;//���� ���ÿɶ���д
//	int m_Age=18;//����  ����ֻ�� �����������Ч�ԣ�����Ҳ����д����Χ��0~150��
//	string m_Idol;// ż��  ����ֻд
//};
//int main()
//{
//	Person p;
//	//��������
//	p.setName("����");
//	//��ȡ����
//	cout << "������" << p.getName() << endl;
//
//	//��������
//	//p.setAge(20);//û�� �������
//	//p.m_Age = 20;//˽�в��ɷ���
//	// 
//	p.setAge(160);
//	//��ȡ����
//	cout << "����Ϊ��" << p.getAge() << endl;//ֻ������д
//
//	//ż�������
//	p.setIdol("����");//ֻд��д��ż��
//	//cout << "ż��Ϊ��" << p.m_Idol<< endl;//ֻд���ܶ�
//
//	system("pause");
//	return 0;
//}



//��װ��ϰ����1�������������
//����������ࣨCube��
// ������������������
// �ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
//
//class Cube
//{
//public:
//	//���ó�
//	void setL(int l)
//	{
//		m_L = l;
//	}
//	//��ȡ��
//	int getL()
//	{
//		return m_L;
//	}
//	//���ÿ�
//	void setW(int w)
//	{
//		m_W = w;
//	}
//	//��ȡ��
//	int getW()
//	{
//		return m_W;
//	}
//	//���ø�
//	void setH(int h)
//	{
//		m_H = h;
//	}
//	//��ȡ��
//	int getH()
//	{
//		return m_H;
//	}
//	//��ȡ����������
//	int calculateS()
//	{
//		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
//	}
//	//��ȡ����������
//	int calculateV()
//	{
//		return m_L * m_W * m_H;
//	}
//
//	//���ó�Ա�������ж������������Ƿ����
//	bool isSameByClass(Cube &c)  //���ڿ��Ե���˽�У�ֱ��дm_L���У���һ���������У������ڵĽ��жԱ�
//	{
//		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
//		{
//			return true;
//		}
//		return false;
//	}
//private:
//	int m_L;//��
//	int m_W;//��
//	int m_H;//��
//};
//
////����ȫ�ֺ������ж������������Ƿ����
//bool isSame(Cube& c1, Cube c2)//�����õķ�ʽ���ݣ����õ�ԭʼ���ݣ��Ͳ���ֵ������
//{
//	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
//	{
//		return true;
//	}
//	return false;
//}
//int main()
//{
//	//������һ�����������
//	Cube c1;
//	c1.setL(10);
//	c1.setW(10);
//	c1.setH(10);
//	cout << "c1�����Ϊ��" << c1.calculateS() << endl;
//	cout << "c1�����Ϊ��" << c1.calculateV()<< endl;
//
//	//�����ڶ������������
//	Cube c2;
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(10);
//	cout << "c2�����Ϊ��" << c2.calculateS() << endl;
//	cout << "c2�����Ϊ��" << c2.calculateV() << endl;
//
//	//����ȫ�ֺ��������жϣ���Ҫ��������
//	bool ret = isSame(c1, c2);
//	if (ret)
//	{
//		cout << "c1��c2����ȵ�" << endl;
//	}
//	else
//	{
//		cout << "c1��c2�ǲ���ȵ�" << endl;
//	}
//
//	//���ó�Ա���������ж�,��һ������
//	ret = c1.isSameByClass(c2);
//	if (ret)
//	{
//		cout << "c1��c2����ȵ�" << endl;
//	}
//	else
//	{
//		cout << "c1��c2�ǲ���ȵ�" << endl;
//	}
//
//	system("pause");
//	return 0;
//}



//��װ����2�����Բ�Ĺ�ϵ
//���һ��Բ���ࣨCircle������һ�����ࣨPoint����������Բ�Ĺ�ϵ��
//����
class Point
{
public:
	//����x
	void setX(int x)
	{
		m_X = x;
	}
	//����y
	void setY(int y)
	{
		m_Y = y;
	}
	//��ȡx
	int getX()
	{
		return m_X;
	}
	//��ȡy
	int getY()
	{
		return m_Y;
	}
private:
	int m_X;
	int m_Y;
};
//Բ��
class Circle
{
public:
	//���ð뾶
	void setR(int r)
	{
		m_R = r;
	}
	//��ȡ�뾶
	int getR()
	{
		return m_R;
	}
	//����Բ��
	void setCenter(Point center)
	{
		m_Center = center;
	}
	//��ȡԲ��
	Point getCenter()
	{
		return m_Center;
	}
private:
	int m_R;//�뾶

	Point m_Center;//Բ��,�����У���������һ������Ϊ�����еĳ�Ա
};
#include <iostream>
using namespace std;
#include "circle.h"
#include "point.h"

//�жϵ��Բ֮��Ĺ�ϵ
void isInCircle(Circle& c, Point& p)
{
	//����֮�����ƽ��
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//�뾶��ƽ��
	int rDistance = c.getR() * c.getR();
	//�жϹ�ϵ
	if (distance == rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}
int main()
{
	//����һ��Բ
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	//����һ����
	Point p;
	p.setX(10);
	p.setY(10);

	//�жϹ�ϵ
	isInCircle(c, p);

	system("pause");
	return 0;
}



