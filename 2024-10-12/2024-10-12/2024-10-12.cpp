//ͨѶ¼����ϵͳ
// �����ϵ��
//ϵͳ����Ҫʵ�ֵĹ�������:
//�����ϵ�� : ��ͨѶ¼��������ˣ���Ϣ����(�������Ա����䡢��ϵ�绰����ͥסַ)����¼1000��
//��ʾ��ϵ�� : ��ʾͨѶ¼��������ϵ����Ϣ
//ɾ����ϵ�� : ������������ɾ��ָ����ϵ��
//������ϵ�� : ���������鿴ָ����ϵ����Ϣ
//�޸���ϵ�� : �������������޸�ָ����ϵ��
//�����ϵ�� : ���ͨѶ¼��������Ϣ
//�˳�ͨѶ¼ : �˳���ǰʹ�õ�ͨѶ¼
#include <iostream>
using namespace std;
#include <string>
#define MAX 1000

//�����ϵ�˽ṹ��
struct Person
{
	string m_Name;
	int m_Sex;
	int m_Age;
	string m_Phone;
	string m_Addr;
};
//ͨѶ¼�Ľṹ��
struct Addressbooks 
{
	//ͨѶ¼�б������ϵ������
	struct Person personArray[MAX];

	//ͨѶ¼�е�ǰ��¼��ϵ�˸���
	int m_Size;
};

//1�������ϵ��
void addPerson(Addressbooks* abs)
{
	//�ж�ͨѶ¼�Ƿ�����
	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼�������޷����" << endl;
		return;
	}
	else
	{
		//�����ϵ��
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name= name;

		//����Ա�
		cout << "�������Ա�" << endl;
		cout << "1--��" << endl;
		cout << "2--Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
				cout << "����Ƿ������������룡" << endl;
		}
		//�������
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		//��ӵ绰
		cout << "��������ϵ�绰��" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//��Ӽ�ͥסַ
		cout << "�������ͥסַ" << endl;
		string addr;
		cin >> addr;
		abs->personArray[abs->m_Size].m_Addr = addr;

		//����ͨѶ¼�е�����
		abs->m_Size++;
		cout << "��ӳɹ�"<<endl;

		system("pause");//�밴���������
		system("cls");//��������
	}
}

//��ʾ��ϵ��
void showPerson(Addressbooks* abs)
{
	//�ж�ͨѶ¼���Ƿ�Ϊ0
	if (abs->m_Size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������" << abs->personArray[i].m_Name <<"\t";
			cout << "�Ա�" << (abs->personArray[i].m_Sex ==1?"��":"Ů" )<< "\t";
			cout << "���䣺" << abs->personArray[i].m_Age << "\t";
			cout << "�绰��" << abs->personArray[i].m_Phone << "\t";
			cout << "סַ��" << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");//�밴���������
	system("cls");//��������
}


//��ʾ�˵�
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;
}
int main()
{
	//����ͨѶ¼�ṹ�����
	Addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ�˸���
	abs.m_Size = 0;


	int select = 0;
	//�˵��ĵ���
	while (true)
	{
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1://�����ϵ�� 
			addPerson(&abs);
			break;

		case 2://��ʾ��ϵ��
			showPerson(&abs);
			break;

		case 3://ɾ����ϵ��
			break;

		case 4://������ϵ��
			break;

		case 5://�޸���ϵ��
			break;

		case 6://�����ϵ��
			break;

		case 0://�˳�ͨѶ¼ 
			cout << "��ӭ�´�ʹ�ã�" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	system("pause");
	return 0;
}