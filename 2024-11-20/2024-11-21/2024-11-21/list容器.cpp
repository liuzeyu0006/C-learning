#include <iostream>
using namespace std;
#include <list>
#include <algorithm>

//list����
//list��������
//���ܣ������ݽ�����ʽ�洢
//����list����һ������洢��Ԫ�Ϸ������Ĵ洢�ṹ������Ԫ�ص��߼�˳����ͨ�������е�ָ������ʵ�ֵ�
//�������ɣ�������һϵ�н�����
//������ɣ�һ���Ǵ洢����Ԫ�ص���������һ���Ǵ洢��һ������ַ��ָ����

//STL�е�������һ��˫��ѭ������
//��������Ĵ洢��ʽ�������������ڴ�ռ䣬�������list�еĵ�����ֻ֧��ǰ�ƺͺ��ƣ�����˫�������

//list���ŵ㣺
//���ö�̬�洢���䣬��������ڴ��˷Ѻ����
//����ִ�в����ɾ������ʮ�ַ��㣬�޸�ָ�뼴�ɣ�����Ҫ�ƶ�����Ԫ��

//list��ȱ�㣺
//���������ǿռ�(ָ����) �� ʱ�䣨����������ķѽϴ�
//List��һ����Ҫ�����ʣ����������ɾ���������������ԭ��list��������ʧЧ������vector�ǲ������ġ�

//�ܽ᣺STL��List��vector���������ʹ�õ�������������ȱ��

//list���캯��
//����������
//����list����
//����ԭ�ͣ�
//list<T> lst; //list���ò���ģ����ʵ��,�����Ĭ�Ϲ�����ʽ��
//list(beg, end); //���캯����[beg, end)�����е�Ԫ�ؿ���������
//list(n, elem); //���캯����n��elem����������
//list(const list& lst); //�������캯����


//void printList(const list<int>& L) 
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	//����list����
//	list<int>L1;//Ĭ�Ϲ���
//
//	//�������
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	printList(L1);
//
//	//���乹��
//	list<int>L2(L1.begin(), L1.end());
//	printList(L2);
//
//	//��������
//	list<int>L3(L2);
//	printList(L3);
//
//	//n��elem
//	list<int>L4(10,100);
//	printList(L4);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//------------------------------------------------------------------------
//list ��ֵ�ͽ���
//����������
//��list�������и�ֵ���Լ�����list����
//����ԭ�ͣ�
//assign(beg, end); //��[beg, end)�����е����ݿ�����ֵ������
//assign(n, elem); //��n��elem������ֵ������
//list& operator=(const list& lst); //���صȺŲ�����
//swap(lst); //��lst�뱾���Ԫ�ػ�����

//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	//����list����
//	list<int>L1;//Ĭ�Ϲ���
//
//	//�������
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	printList(L1);
//
//	list<int>L2;
//	L2 = L1;
//	printList(L1);
//
//	list<int>L3;
//	L3.assign(L1.begin(),L1.end());
//	printList(L3);
//
//	list<int>L4;
//	L4.assign(10, 100);
//	printList(L4);
//
//}
////����
//void test02()
//{
//	//����list����
//	list<int>L1;//Ĭ�Ϲ���
//
//	//�������
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	list<int>L2;
//	L2.assign(10, 100);
//
//	cout << "����ǰ��ӡ" << endl;
//	printList(L1);
//	printList(L2);
//
//	//����
//	L1.swap(L2);
//
//	cout << "����ǰ��ӡ" << endl;
//	printList(L1);
//	printList(L2);
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}


//------------------------------------------------
//list ��С����
//����������
//��list�����Ĵ�С���в���
//����ԭ�ͣ�
//size(); //����������Ԫ�صĸ���
//empty(); //�ж������Ƿ�Ϊ��
//resize(num); //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�á�
//					//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
//resize(num, elem); //����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�á�
//					//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����

//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	//����list����
//	list<int>L1;//Ĭ�Ϲ���
//
//	//�������
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	printList(L1);
//
//	//�ж������Ƿ�Ϊ��
//	if (L1.empty())
//	{
//		cout << "����Ϊ�գ�" << endl;
//	}
//	else
//	{
//		cout << "������Ϊ�գ�" << endl;
//		cout << "L1�е�Ԫ�ظ����ǣ�" <<L1.size()<< endl;
//	}
//
//	//����ָ����С
//	//L1.resize(10);
//	L1.resize(10,10000);
//	printList(L1);
//
//	L1.resize(2);
//	printList(L1);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//----------------------------------------------------------------
//list �����ɾ��
//����������
//��list�����������ݵĲ����ɾ��
//����ԭ�ͣ�
//push_back(elem);//������β������һ��Ԫ��
//pop_back();//ɾ�����������һ��Ԫ��
//push_front(elem);//��������ͷ����һ��Ԫ��
//pop_front();//��������ͷ�Ƴ���һ��Ԫ��
//insert(pos, elem);//��posλ�ò�elemԪ�صĿ��������������ݵ�λ�á�
//insert(pos, n, elem);//��posλ�ò���n��elem���ݣ��޷���ֵ��
//insert(pos, beg, end);//��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
//clear();//�Ƴ���������������
//erase(beg, end);//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
//erase(pos);//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
//remove(elem);//ɾ��������������elemֵƥ���Ԫ�ء�

//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	//����list����
//	list<int>L1;//Ĭ�Ϲ���
//
//	//β��
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	//ͷ��
//	L1.push_front(100);
//	L1.push_front(200);
//	L1.push_front(300);
//
//	printList(L1);
//
//	//βɾ
//	L1.pop_back();
//	printList(L1);
//
//	//ͷɾ
//	L1.pop_front();
//	printList(L1);
//	
//	//����  �ṩ������
//	list<int>::iterator it = L1.begin();
//	L1.insert(++it, 1000);
//	printList(L1);
//
//	//ɾ��  �ṩ������
//	it = L1.begin();
//	L1.erase(++it);
//	printList(L1);
//
//	//�Ƴ�
//	L1.push_back(10000);
//	L1.push_back(10000);
//	L1.push_back(10000);
//	L1.push_back(10000);
//
//	printList(L1);
//	L1.remove(10000);
//	printList(L1);
//
//	//���
//	L1.clear();
//	printList(L1);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//-----------------------------------------------------------
//list ���ݴ�ȡ
//����������
//��list���������ݽ��д�ȡ
//����ԭ�ͣ�
//front(); //���ص�һ��Ԫ�ء�
//back(); //�������һ��Ԫ�ء�
//������ͨ��[]��at���ʡ�//ԭ����1ist���������������������Կռ�洢���ݣ�������Ҳ�ǲ�֧��������ʵ�

//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	//����list����
//	list<int>L1;//Ĭ�Ϲ���
//
//	//β��
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	cout << "��һ��Ԫ���ǣ�" << L1.front() << endl;
//	cout << "���һ��Ԫ���ǣ�" << L1.back() << endl;
//
//	//��֤��������֧���������
//	list<int>::iterator it = L1.begin();
//	it++;//ֻ��++ --   ˫��
//	it = it + 1;//������+1��+2�ȣ����������ż�
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//---------------------------------------------------------------
//list ��ת������
//����������
//�������е�Ԫ�ط�ת���Լ��������е����ݽ�������
//����ԭ�ͣ�
//reverse(); //��ת����
//sort(); //��������

//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//��ת
//void test01()
//{
//	//����list����
//	list<int>L1;//Ĭ�Ϲ���
//
//	
//	L1.push_back(20);
//	L1.push_back(10);
//	L1.push_back(50);
//	L1.push_back(40);
//	L1.push_back(30);
//
//	cout << "��תǰ��" << endl;
//	printList(L1);
//	L1.reverse();
//	cout << "��ת��" << endl;
//	printList(L1);
//}
//
////����
//bool MyCompare(int v1,int v2)
//{
//	//�����õ�һ�������ڵڶ�����
//	return v1 > v2;
//}
//void test02()
//{
//	//����list����
//	list<int>L1;//Ĭ�Ϲ���
//
//
//	L1.push_back(20);
//	L1.push_back(10);
//	L1.push_back(50);
//	L1.push_back(40);
//	L1.push_back(30);
//
//	cout << "����ǰ��" << endl;
//	printList(L1);
//
//	//���в�֧��������ʵ�������������������ʹ�ñ�׼�㷨
//	//��֧��������ʵ��������������ڲ����ṩ��ӦһЩ�㷨
//	//sort(L1.begin(),L1.end());���󣬲���ʹ��ȫ�ֺ����ı�׼�㷨
//
//	L1.sort();//Ĭ������
//	cout << "�����" << endl;
//	printList(L1);
//
//	//����
//	L1.sort(MyCompare);
//	printList(L1);
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}