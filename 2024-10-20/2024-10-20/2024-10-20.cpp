#include <iostream>
using namespace std;
//this ָ��
//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
// thisָ��������ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ��
// thisָ�벻��Ҫ���壬ֱ��ʹ�ü���
// 
// ��;��
// ���βκͳ�Ա����ͬ��ʱ��������thisָ������
// ����ķǾ�̬��Ա�����з��ض���������ֻ��return*this
// 
//class Person
//{
//public:
//	Person(int age)
//	{
//		//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
//		this->age = age;
//	}
//
//	Person& PersonAddAge(Person& p)
//	{
//		this->age += p.age;
//		//thisָ��ָ��p2��ָ�룬��*thisָ��ľ���p2���������
//		return *this;//��������ҪдPerson&
//	}
//	int age;//ʵ���ϲ�û�и����age��ֵ������thisָ�롣
//	//�޸�����
//	//int m_Age;//�����淶
//};
//
//// ���βκͳ�Ա����ͬ��ʱ��������thisָ������
//void test01()
//{
//	Person p1(18);
//	cout << "p1�������ǣ�" << p1.age << endl;
//}
//
//// ����ķǾ�̬��Ա�����з��ض���������ֻ��return*this
//void test02()
//{
//	Person p1(10);
//
//	Person p2(10);
//
//	//��ʽ���˼�룬����һֱ�����
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);//ÿһ��p2.PersonAddAge(p1)���صĶ���p2
//	cout << "p2�������ǣ�" << p2.age << endl;
//
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}



//��ָ����ʳ�Ա����
//C++�п�ָ��Ҳ�ǿ��Ե��ó�Ա�����ģ�����Ҫע����û���õ�thisָ��
//�õ�thisָ�룬��Ҫ�����жϱ�֤����Ľ�׳��
//class Person
//{
//public:
//	void showClassName()
//	{
//		cout << "this is Person class" << endl;
//	}
//	void showPersonAge()
//	{
//		//����ԭ������Ϊ�����ָ����ΪNULL
//		//��������,��ߴ���Ľ�׳��
//		if (this == NULL)
//		{
//			return;
//		}
//		cout << "age=" <<this->m_Age << endl;
//	}
//	int m_Age;
//};
//void test01()
//{
//	Person* p = NULL;
//
//	p->showClassName();
//
//	p->showPersonAge();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//const���γ�Ա����
//
// ��������
// ��Ա�������const�����ǳ��������Ϊ������
// �������ڲ��������γ�Ա����
// ��Ա���Ե�����ʱ�ӹؼ���mutable���ڳ���������Ȼ�����޸�

// ������
// ��������ǰ��const��Ϊ�ö���Ϊ������
// ������ֻ�ܵ��ó�����


// ������
//class Person
//{
//public:
//	//thisָ��ı���  ��ָ�볣��  ָ���ָ���ǲ������޸ĵ�
//	//�൱�� Person* const this
//	//�ڳ�Ա�����������const�൱��const Person* const this��ʵ���������ε�this����ָ��ָ���ֵҲ�������޸�
//
//	void showPerson()const
//	{
//		//this->m_A = 100;
//		this->m_B = 100;
//		//this->NULL;//thisָ�벻�����޸�ָ���ָ��
//	}
//	void func()
//	{
//
//	}
//
//	int m_A;
//	mutable int m_B;//�����������ʹ�ڳ������У�Ҳ�����޸����ֵ���ӹؼ�mutable
//};
//void test01()
//{
//	Person p;
//
//	p.showPerson();
//}
//
////������
//void test02()
//{
//	const Person p;//�ڶ���ǰ��const����Ϊ������
//	//p.m_A = 100;
//	p.m_B = 100;//m_B������ֵ���ڳ�������Ҳ�����޸�
//
//	//������ֻ�ܵ��ó�����
//	p.showPerson()
//	//p.func();//������ �����Ե�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸����ԣ��������������޸�����
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}




//��Ԫ
//��Ԫ��Ŀ�ľ�����һ�����������࣬������һ������˽�г�Ա
//��Ԫ�ؼ��ʣ�friend
//��Ԫ������ʵ�֣�
//				ȫ�ֺ�������Ԫ
//				������Ԫ
//				��Ա��������Ԫ


//ȫ�ֺ�������Ԫ
//��������
//class Building
//{
//	//������������goodGayȫ�ֺ�����Building�����ѣ����Է���Building��˽�еĳ�Ա
//	friend void goodGay(Building* building);
//public:
//	Building()
//	{
//		m_SittingRoom = "����";
//		m_Bedroom = "����";
//	}
//public:
//	string m_SittingRoom;//����
//private:
//	string m_Bedroom;//����
//};
//
////ȫ�ֺ���
//void goodGay(Building *building)
//{
//	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�" << building->m_SittingRoom << endl;//�������ԣ�����Ҳ���Է���
//
//	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�" << building->m_Bedroom << endl;
//}
//
//void test01()
//{
//	Building buliding;
//	goodGay(&buliding);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//������Ԫ
//class Building;
//class goodGay
//{
//public:
//
//	goodGay();
//
//	void visit();//�ιۺ���������Building�е�����
//
//	Building* building;
//};
//
//class Building
//{
//	//goodGay�Ǳ���ĺ����ѣ����Է��ʱ�����˽�г�Ա
//	friend class goodGay;
//public:
//	Building();
//public:
//	string m_SittingRoom;//����
//private:
//	string m_Bedroom;//����
//};
//
////����д��Ա����
//Building::Building()
//{
//		m_SittingRoom = "����";
//		m_Bedroom = "����";
//}
//goodGay::goodGay()
//{
//	//�������������
//	building = new Building;
//}
//void goodGay::visit()
//{
//	cout << "�û������ڷ��ʣ�" << building->m_SittingRoom << endl;
//
//	cout << "�û������ڷ��ʣ�" << building->m_Bedroom << endl;
//}
//void test01()
//{
//	goodGay gg;
//	gg.visit();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//��Ա��������Ԫ
class Building;
class goodGay
{
public:

	goodGay();

	void visit();//��visit�������Է���Building�е�˽�г�Ա
	void visit2();//��visit2�������Է���Building�е�˽�г�Ա

	Building* building;
};

class Building
{
	friend void goodGay::visit();
public:
	Building();
public:
	string m_SittingRoom;//����
private:
	string m_Bedroom;//����
};

//����д��Ա����
Building::Building()
{
	m_SittingRoom = "����";
	m_Bedroom = "����";
}
goodGay::goodGay()
{
	//�������������
	building = new Building;
}
void goodGay::visit()
{
	cout << "visit���ڷ��ʣ�" << building->m_SittingRoom << endl;

    cout << "visit���ڷ��ʣ�" << building->m_Bedroom<< endl;
}

void goodGay::visit2()
{
	cout << "visit2���ڷ��ʣ�" << building->m_SittingRoom << endl;

	//cout << "visit2���ڷ��ʣ�" << building->m_Bedroom << endl;
}
void test01()
{
	goodGay gg;
	gg.visit();
	gg.visit2();
}
int main()
{
	test01();
	system("pause");
	return 0;
}