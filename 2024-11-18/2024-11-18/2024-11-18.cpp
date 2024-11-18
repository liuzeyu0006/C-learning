#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>//��׼�㷨ͷ�ļ�


//2 STL��ʶ

//2.1 STL�ĵ���
//���������������һֱϣ������һ�ֿ��ظ����õĶ���
//C++���������ͷ��ͱ��˼�룬Ŀ�ľ��Ǹ����Ե�����
//�������£����ݽṹ���㷨��δ����һ�ױ�׼, ���±��ȴ��´����ظ�����
//Ϊ�˽������ݽṹ���㷨��һ�ױ�׼, ������STL

//2.2 STL��������
//STL(Standard Template Library, ��׼ģ���)
//STL �ӹ����Ϸ�Ϊ : ����(container) �㷨(algorithm)������(iterator)
//�������㷨֮��ͨ�������������޷����ӡ�
//STL�������еĴ��붼������ģ�������ģ�庯��

//2.3 STL�������
//STL�����Ϊ����������ֱ��� : �������㷨�����������º�����������(�����)���ռ�������
//1.���� : �������ݽṹ����vector��list��deque��set��map��, �����������
//2.�㷨 : ���ֳ��õ��㷨����sort��find��copy��for_each��
//3.������ : �������������㷨֮��Ľ��ϼ���
//4.�º��� : ��Ϊ���ƺ���������Ϊ�㷨��ĳ�ֲ��ԡ�
//5.������ : һ�����������������߷º�����������ӿڵĶ���,
//6.�ռ������� : ����ռ�����������

//2.4 STL���������㷨��������
//���� : ����֮��Ҳ
//STL�������ǽ�������㷺��һЩ���ݽṹʵ�ֳ���
//���õ����ݽṹ : ����, ����, ��, ջ, ����, ����, ӳ��� ��
//��Щ������Ϊ����ʽ�����͹���ʽ�������� :
//����ʽ����:ǿ��ֵ����������ʽ�����е�ÿ��Ԫ�ؾ��й̶���λ��
//����ʽ���� : �������ṹ����Ԫ��֮��û���ϸ�������ϵ�˳���ϵ
// 
//�㷨 : ����֮�ⷨҲ
//���޵Ĳ��裬����߼�����ѧ�ϵ����⣬��һ��ѧ�����ǽ����㷨(Algorithms)
//�㷨��Ϊ : �ʱ��㷨�ͷ��ʱ��㷨��
//�ʱ��㷨 : ��ָ��������л���������ڵ�Ԫ�ص����ݡ����翽�����滻��ɾ���ȵ�
//���ʱ��㷨 : ��ָ��������в�����������ڵ�Ԫ�����ݣ�������ҡ�������������Ѱ�Ҽ�ֵ�ȵ�
//
//������:�������㷨֮��ճ�ϼ�
//�ṩһ�ַ�����ʹ֮�ܹ�����Ѱ��ĳ�����������ĸ���Ԫ�أ��������豩¶���������ڲ���ʾ��ʽ��
//ÿ�����������Լ�ר���ĵ�����
//������ʹ�÷ǳ�������ָ�룬��ѧ�׶����ǿ�������������Ϊָ��

//����������:
//����				����															֧������
//���������			�����ݵ�ֻ������												ֻ����֧��++�� == �� !=
//���������			�����ݵ�ֻд����												ֻд��֧��++
//ǰ�������			��д������������ǰ�ƽ�������									��д��֧��++��==����=
//˫�������			��д������������ǰ��������									��д��֧��++��--
//������ʵ�����		��д��������������Ծ�ķ�ʽ�����������ݣ�����.��ǿ�ĵ�����		��д��֧��++�� -- ��[n]�� - n��<��<= ��>�� >=

//���õ������е���������Ϊ˫�����������������ʵ�����

//STL����õ�����ΪVector���������Ϊ���飬�������ǽ�ѧϰ�������������в������ݡ��������������
//2.5.1 vector���������������
//���� : vector
//�㷨: for_each
//������: vector<int>::iterator


//vector�������������������


//void myPrint(int val)
//{
//	cout << val << endl;
//}
//void test01()
//{
//	//����һ��vector����������
//	vector<int> v;
//
//	//�������в�������
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);

	////ͨ�����������������е�����
	//vector<int>::iterator itBegin = v.begin();//��ʼ������  ָ�������е�һ��Ԫ��
	//vector<int>::iterator itEnd = v.end();//����������  ָ�����������һ��Ԫ�ص���һ��λ��

	////��һ�ֱ�����ʽ
	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;
	//	itBegin++;
	//}

	//�ڶ��ֱ�������
	/*for (vector<int>::iterator it = v.begin();it != v.end();it++)
	{
		cout << *it << endl;
	}*/

//	//�����ֱ�����ʽ  ����STL�ṩ�ı����㷨
//	for_each(v.begin(), v.end(), myPrint);
// }
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//vector�����д���Զ�����������
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//void test01()
//{
//	vector<Person>v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//
//	//���������������
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	
//	//���������е�����
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//cout << "������"<<(*it).m_Name<<"  ���䣺"<<(*it).m_Age << endl;//itָ��һ��������������ָ�룬����Ҫ*it
//		cout << "������" << it->m_Name << "  ���䣺" << it->m_Age << endl;//it��ָ�룬������->���õ�����
//	}
//}
//
//
////����Զ�����������  ָ��
//void test02()
//{
//	vector<Person*>v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//
//	//���������������
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	//���������е�����
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "������"<<(*it)->m_Name<<"  ���䣺"<<(*it)->m_Age << endl;//*it �ǽ����ò�������ȡ it ָ���ָ�루Person*��
//	}
//}
//int main()
//{
//	/*test01();*/
//	test02();
//	system("pause");
//	return 0;
//}



//vector����Ƕ������   ��ά����

void test01()
{
	vector<vector<int>> v;

	//����С����
	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	vector<int>v4;

	//��С�������������
	for (int i = 0; i < 4; i++)
	{
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
	}

	//��С�������뵽��������
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);


	//ͨ�������������������ݱ���һ��
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
	{
		//(*it)---����
		for (vector<int> ::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
		{
			cout << *vit << " ";
		}
		cout << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}