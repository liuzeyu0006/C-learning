#include <iostream>
using namespace std;


//�̳�

// �������ʱ���¼���ĳ�Ա����ӵ����һ���Ĺ��ԣ������Լ�����
//

////��ͨʵ��ҳ��
//class Java
//{
//public:
//	void header()
//	{
//		cout << "����ͷ��" << endl;
//	}
//	void footer()
//	{
//		cout << "�����ײ�" << endl;
//	}
//	void left()
//	{
//		cout << "���������б�" << endl;
//	}
//    void content()
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};
////Pythonҳ��
//class Python
//{
//public:
//	void header()
//	{
//		cout << "����ͷ��" << endl;
//	}
//	void footer()
//	{
//		cout << "�����ײ�" << endl;
//	}
//	void left()
//	{
//		cout << "���������б�" << endl;
//	}
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
////C++��ҳ��
//class Cpp
//{
//public:
//	void header()
//	{
//		cout << "����ͷ��" << endl;
//	}
//	void footer()
//	{
//		cout << "�����ײ�" << endl;
//	}
//	void left()
//	{
//		cout << "���������б�" << endl;
//	}
//	void content()
//	{
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//};



//�̳�ʵ��ҳ��
//�̳еĺô������ٴ�����
//�﷨��class ���ࣺ�̳з�ʽ ����
//����  Ҳ��Ϊ  ������
//����  Ҳ��Ϊ  ����
//class BasePage
//{
//public:
//	void header()
//		{
//			cout << "����ͷ��" << endl;
//		}
//		void footer()
//		{
//			cout << "�����ײ�" << endl;
//		}
//		void left()
//		{
//			cout << "���������б�" << endl;
//		}
//};
////Javaҳ��
//class Java :public BasePage
//{
//public:
//	void content()
//		{
//			cout << "Javaѧ����Ƶ" << endl;
//		}
//};
////Pythonҳ��
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
////C++ҳ��
//class Cpp :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//};
//void test01()
//{
//	cout << "Java������Ƶҳ������" << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//
//	cout << "--------------------------"<<endl;
//	cout << "Python������Ƶҳ������" << endl;
//	Python p;
//	p.header();
//	p.footer();
//	p.left();
//	p.content();
//
//	cout << "--------------------------" << endl;
//	cout << "C++������Ƶҳ������" << endl;
//	Cpp cpp;
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//	cpp.content();
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//�̳еĻ�����ʽ
//�̳е��﷨��class ���ࣺ�̳з�ʽ ����
//�̳з�ʽ:
//        �����̳�  ������˽��Ȩ�޵Ĳ��ɷ��ʣ������վɲ���
//        �����̳�  ������˽��Ȩ�޵Ĳ��ɷ��ʣ�������Ϊ����Ȩ��
//        ˽�м̳�  ������˽��Ȩ�޵Ĳ��ɷ��ʣ�������Ϊ˽��Ȩ��
//class Base1
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
////
//class Son1 :public Base1
//{
//public:
//	void func()
//	{
//		m_A = 10;//�����еĹ���Ȩ�޳�Ա  ����������Ȼ�ǹ���Ȩ��
//		m_B = 10;//�����еı���Ȩ�޳�Ա  ����������Ȼ�Ǳ���Ȩ��
//		//m_C = 10;//�����е�˽��Ȩ�޳�Ա  ������ʲ���
//	}
//};
//
//void test01()
//{
//	Son1 s1;
//	s1.m_A = 100;
//	//s1.m_B = 100;//��Son1��m_B�Ǳ���Ȩ��  ������ʲ���
//}
//
////�����̳�
//class Base2
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
////
//class Son2 :protected Base2
//{
//public:
//	void func()
//	{
//		m_A = 10;//�����еĹ���Ȩ�޳�Ա  ����������Ȼ�Ǳ���Ȩ��
//		m_B = 10;//�����еı���Ȩ�޳�Ա  ����������Ȼ�Ǳ���Ȩ��
//		//m_C = 10;//�����е�˽��Ȩ�޳�Ա  ������ʲ���
//	}
//};
//void test02()
//{
//	Son2 s2;
//	//s1.m_A = 100;//��Son2��m_A��Ϊ����Ȩ��  ������ʲ���
//	//s1.m_B = 100;//��Son2��m_B��Ϊ����Ȩ��  ������ʲ���
//}
//
////˽�м̳�
//class Base3
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
////
//class Son3 :private Base3
//{
//public:
//	void func()
//	{
//		m_A = 10;//�����еĹ���Ȩ�޳�Ա  �������б�Ϊ˽��Ȩ�޳�Ա
//		m_B = 10;//�����еı���Ȩ�޳�Ա  �������б�Ϊ˽��Ȩ�޳�Ա
//		//m_C = 10;//�����е�˽��Ȩ�޳�Ա  ������ʲ���
//	}
//};
//
//class Grandson3 :public Son3
//{
//public:
//	void func()
//	{
//		m_A = 100;//����Son3��m_A��Ϊ˽�У���ʹ�Ƕ���Ҳ���ʲ���
//		m_B = 100;//����Son3��m_B��Ϊ˽�У���ʹ�Ƕ���Ҳ���ʲ���
//	}
//};
//void test03()
//{
//	Son3 s3;
//	//s1.m_A = 100;//��Son3��m_A��Ϊ˽��Ȩ��  ������ʲ���
//	//s1.m_B = 100;//��Son3��m_B��Ϊ˽��Ȩ��  ������ʲ���
//}
//int main()
//{
//	test01();
//	test02();
//	test03();
//	system("pause");
//	return 0;
//}




//�̳��еĶ���ģ��
//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//class Son :public Base
//{
//public:
//	int m_D;
//
//};


//���ÿ�����Ա������ʾ���߲鿴����ģ��
//��ת�̷�  D��
//��ת�ļ�·�� cd����·����
//�鿴����
//cl /d1��ǰһ����l����һ��������1�� cl /d1 reportSingleClassLayout���� �ļ���


//void test01()
//{
//	//16
//	// ���������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
//	// ������˽�г�Ա���� �Ǳ��������������ˣ���˷��ʲ���������ȷʵ�¼̳���ȥ��
//	//
//	cout << "size of Son = " << sizeof(Son) << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}




//�̳��еĹ��������˳��
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base�Ĺ��캯��" << endl;
//	}
//	~Base()
//	{
//		cout << "Base����������" << endl;
//	}
//};
//class Son :public Base
//{
//public:
//	Son()
//	{
//		cout << "Son�Ĺ��캯��" << endl;
//	}
//	~Son()
//	{
//		cout << "Son����������" << endl;
//	}
//};
//void test01()
//{
//	//Base b1;
//
//
//	//�̳��еĹ��������˳������
//	//�ȹ��츸�࣬�ٹ������࣬������˳���ڹ����෴
//	Son s1;
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}



//�̳�ͬ����Ա����ʽ
//����������ֱ�ӷ�������ͬ����Ա
//����������������Է��ʸ���ͬ����Ա
//
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//	void func()
//	{
//		cout << "Base-func()����" <<endl;
//	}
//	void func(int a)
//	{
//		cout << "Base-func(int a)����" << endl;
//	}
//	int m_A;
//};
//class Son :public Base
//{
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//	void func()
//	{
//		cout << "Son-func()����" << endl;
//	}
//	int m_A;
//};
////ͬ���ĳ�Ա���Դ���
//void test01()
//{
//	Son s;
//	cout << "Son m_A = " << s.m_A << endl;//����ֱ�ӷ��ʾ��������
//	cout << "Base m_A = " << s.Base::m_A << endl;// ���ͨ�����������ʵ�������ͬ���ĳ�Ա����Ҫ���������
//}
////ͬ���ĳ�Ա��������
//void test02()
//{
//	Son s;
//	s.func();//ֱ�ӵ��ã����õ��������е�ͬ����Ա
//
//	//��ε��õ�������ͬ����Ա������
//	s.Base::func();
//
//
//	//��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ص����������е�ͬ����Ա����
//	//�������ʵ������б����ص�ͬ����Ա��������Ҫ��������
//	s.Base::func(100);
//}
//int main()
//{
//	/*test01();*/
//	test02();
//	system("pause");
//	return 0;
//}




//�̳�ͬ����̬��Ա����ʽ
//��̬��Ա�ͷǾ�̬��Ա����ͬ��������ʽһ��
//		��������ͬ����Ա ֱ�ӷ��ʼ���
//		���ʸ���ͬ����Ա ��Ҫ��������
//
//class Base
//{
//public:
//	static int m_A;
//	static void func()
//		{
//			cout << "Base-static func()����" <<endl;
//		}
//};
//int Base::m_A = 100;
//
//class Son :public Base
//{
//public:
//	static int m_A;
//	static void func()
//	{
//		cout << "Son-static func()����" << endl;
//	}
//};
//int Son::m_A = 200;
//
////ͬ����̬��Ա����
//void test01()
//{
//	//ͨ���������
//	Son s;
//	cout << "Son m_A = " << s.m_A << endl;//
//	cout << "Base m_A = " << s.Base::m_A << endl;// 
//
//	//ͨ����������
//	cout << "Son �� m_A = " << Son::m_A << endl;// 
//	//��һ��::����ͨ��������ʽ����  �ڶ���::������ʸ�����������
//	cout << "Base �� m_A = " << Son::Base::m_A << endl;// 
//}
////ͬ����̬��Ա����
//void test02()
//{
//	//ͨ���������
//	Son s;
//	s.func();
//	s.Base::func();
//	//ͨ����������
//	Son::func();
//
//	//��������г��ֺ͸���ͬ���ľ�̬��Ա������Ҳ�����ص����������е�ͬ����Ա����
//	//�������ʵ������б����ص�ͬ����Ա��������Ҫ��������
//	Son::Base::func();
//}
//
//int main()
//{
//	/*test01();*/
//	test02();
//	system("pause");
//	return 0;
//}



//��̳��﷨
//C++������һ����̳ж����
//�﷨��class ���ࣺ�̳з�ʽ ����1���̳з�ʽ ����2....
// ��̳п���������������ͬ����Ա�ĳ��֣���Ҫ������������
// ʵ�ʿ����в������ö�̳�
//
//class Base1
//{
//public:
//	Base1()
//	{
//		m_A = 100;
//	}
//	int m_A;
//};
//class Base2
//{
//public:
//	Base2()
//	{
//		m_A =200;
//	}
//	int m_A;
//};
////����̳�Base1��Base2
//class Son :public Base1,public Base2
//{
//public:
//	Son()
//	{
//		m_C = 300;
//		m_D = 400;
//	}
//	int m_C;
//	int m_D;
//};
//
////ͬ����̬��Ա����
//void test01()
//{
//	Son s;
//	cout << "size of Son " << sizeof(Son)<< endl;//
//	//�������г���ͬ����Ա����Ҫ������������
//	cout << "Base1:m_A=" << s.Base1::m_A << endl;
//	cout << "Base2:m_A=" << s.Base2::m_A << endl;
//}
//int main()
//{
//	test01();
//	
//	system("pause");
//	return 0;
//}




//���μ̳�
//���
//����������̳�ͬһ������
// ����ĳ����ͬʱ�̳�������������
// 

class Animal
{
public:
	int m_Age;
};

//������̳� ������μ̳е�����
//�ڼ̳�֮ǰ���Ϲؼ���virtual��Ϊ��̳�
// Animal���Ϊ �����
// vbptr  �����ָ��  ָ��vbtable
// 
//����
class Sheep:virtual public Animal{};

//����
class Tuo :virtual public Animal {};

//������
class SheepTuo :public Sheep, public Tuo {};

void test01()
{
	SheepTuo st;
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;

	//�����μ̳�ʱ����������ӵ����ͬ�����ݣ���Ҫ��������������
	cout << "st.Sheep::m_Age=" << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age=" << st.Tuo::m_Age << endl;
	cout << "st.m_Age=" << st.m_Age << endl;
	//�������ֻҪһ�ݼ��ɣ����μ̳е������������ݣ���Դ�˷�
}
int main()
{
	test01();

	system("pause");
	return 0;
}