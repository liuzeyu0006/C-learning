#include <iostream>
using namespace std;

//��������ʱ���������ݶ�������ʱ���ݣ�����һ�����н������ᱻ�ͷ�
//ͨ���ļ����Խ����ݳ־û�
//C++�ж��ļ�������Ҫ����ͷ�ļ�<fstream>
//�ļ����ͷ�Ϊ����:
//1. �ı��ļ�  - �ļ����ı���ASCII����ʽ�洢�ڼ������
//2.�������ļ� - �ļ����ı��Ķ�������ʽ�洢�ڼ�����У��û�һ�㲻��ֱ�Ӷ�������
//�����ļ��������� :
//1.ofstream : д����
//2.ifstream : ������
//3. fstream :��д����

//�ı��ļ�
//д�ļ�
//д�ļ��������� :
//1.����ͷ�ļ�
//#include <fstream>
//2.����������
//ofstream ofs;
//3.���ļ�
//ofs.open(���ļ�·��",�򿪷�ʽ);
//4. д����
//ofs << "д������ݡ�,
//5.�ر��ļ�
//ofs.close();

//�򿪷�ʽ				����
//ios::in				Ϊ���ļ������ļ�
//ios::out				Ϊд�ļ������ļ�
//ios::ate				��ʼλ�� : �ļ�β
//ios::app				׷�ӷ�ʽд�ļ�
//ios::trunc			����ļ�������ɾ�����ٴ���
//ios::binary			�����Ʒ�ʽ


//�ļ��򿪷�ʽ�������ʹ�ã�����   |   ������
//�����ö����Ʒ�ʽд�ļ���ios::binary|ios::out


//�ܽ�:
//���ļ������������ͷ�ļ� fstream
//�����ļ��������� ofstream ������fstream��
//�����ļ�ʱ����Ҫָ�������ļ���·�����Լ��򿪷�ʽ
//������ << �������ļ���д����
//��������ϣ�Ҫ�ر��ļ�


//#include <fstream>
//void test01()
//{	
////1.����ͷ�ļ�
////#include <fstream>
////2.����������
//ofstream ofs;
////3.���ļ�
//ofs.open("test.txt",ios::out);
////4. д����
//ofs << "����������" << endl;
//ofs << "�Ա���" << endl;
//ofs << "���䣺18" << endl;
////5.�ر��ļ�
//ofs.close();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//���ļ�
//���ļ���������:
//1.����ͷ�ļ�
//#include <fstream>
//2.����������
//ifstream ifs;
//3.���ļ����ж��ļ��Ƿ�򿪳ɹ�
//ifs.open("�ļ�·��", �򿪷�ʽ);
//4. ������
//���ַ�ʽ��ȡ
//5.�ر��ļ�
//ifs.close();


//#include <fstream>
//#include <string>
//void test01()
//{
//	//1.����ͷ�ļ�
//	//#include <fstream>
//	//2.����������
//	ifstream ifs;
//	//3.���ļ�  �����ж��Ƿ�ɹ�
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//	//4. ������(����)
//
//	////��һ��
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//
//	////�ڶ���
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf,sizeof(buf)) )
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//������
//	//string buf;
//	//while (getline(ifs,buf))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//������(���Ƽ�)
//	char c;
//	while ((c = ifs.get()) != EOF)//EOF�ļ�β
//	{
//		cout << c;
//	}
//
//	//5.�ر��ļ�
//	ifs.close();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//�Զ����Ƶķ�ʽ���ļ����ж�д����
//
//�򿪷�ʽҪָ��Ϊ ios::binary
//
//д�ļ�
//�����Ʒ�ʽд�ļ���Ҫ������������ó�Ա����write
//����ԭ�� : ostream & write(const char* buffer, int len);
//�������� : �ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䡣len�Ƕ�д���ֽ���

//#include <fstream>
//#include <string>
//class Person
//{
//public:
//	char m_Name[64];
//	int m_Age;
//};
//
//void test01()
//{
////1.����ͷ�ļ�
////#include <fstream>
////2.����������
//ofstream ofs("person.txt", ios::out | ios::binary);
////3.���ļ�
////ofs.open("person.txt",ios::out|ios::binary);
////4. д�ļ�
//Person p = { "����",18 };
//ofs.write((const char*)&p, sizeof(Person));
////5.�ر��ļ�
//ofs.close();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//���ļ�
//�����Ʒ�ʽ���ļ���Ҫ������������ó�Ա����read
//����ԭ�� : istream & read(char* buffer, int len);
//��������:�ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䡣len�Ƕ�д���ֽ���
#include <fstream>
#include <string>
class Person
{
public:
	char m_Name[64];
	int m_Age;
};

void test01()
{
	//1.����ͷ�ļ�
	//#include <fstream>
	//2.����������
	ifstream ifs;
	//3.���ļ�  �ж��Ƿ�򿪳ɹ�
	ifs.open("person.txt",ios::in|ios::binary);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
	}
	//4. д�ļ�
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "������ " << p.m_Name << "   ���䣺 " << p.m_Age << endl;
	//5.�ر��ļ�
	ifs.close();
}
int main()
{
	test01();
	system("pause");
	return 0;
}