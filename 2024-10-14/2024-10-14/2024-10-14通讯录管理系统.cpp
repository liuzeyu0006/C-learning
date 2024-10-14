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
		abs->personArray[abs->m_Size].m_Name = name;

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
		cout << "��ӳɹ�" << endl;

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
			cout << "������" << abs->personArray[i].m_Name << "\t";
			cout << "�Ա�" << (abs->personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << abs->personArray[i].m_Age << "\t";
			cout << "�绰��" << abs->personArray[i].m_Phone << "\t";
			cout << "סַ��" << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");//�밴���������
	system("cls");//��������
}


//�����ϵ��
//����Ƿ����
int isExist(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray->m_Name == name)
		{
			return i;
		}
	}
	return -1;
}



//ɾ����ϵ��
void deletePerson(Addressbooks* abs)
{
	cout << "������Ҫɾ������ϵ������" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);

	if(ret!=-1)
	{
		//����ǰ��
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;//����ͨѶ¼����Ա��
		cout << "ɾ���ɹ�"<<endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");//�밴���������
	system("cls");//��������
}



//������ϵ��
void findPerson(Addressbooks* abs)
{
	cout << "������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;
	//�ж���ϵ���Ƿ����
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "������" << abs->personArray[ret].m_Name << "\t";
		cout << "�Ա�" << (abs->personArray[ret].m_Sex == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺" << abs->personArray[ret].m_Age  << "\t";
		cout << "�绰��" << abs->personArray[ret].m_Phone<< "\t";
		cout << "סַ��" << abs->personArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");//�밴���������
	system("cls");//��������
}


//�޸���ϵ����Ϣ
void modifyPerson(Addressbooks* abs)
{
	cout << "������Ҫ�޸ĵ���ϵ������" << endl;
	string name;
	cin >> name;
	//�ж���ϵ���Ƿ����
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//�޸�����
		cout << "������������"<<endl;
		string name;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		//����Ա�
		cout << "�������Ա�" << endl;
		cout << "1--��" << endl;
		cout << "2--Ů" << endl;
		int sex=0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "����Ƿ������������룡" << endl;
		}

		//�������
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		//��ӵ绰
		cout << "��������ϵ�绰��" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		//��Ӽ�ͥסַ
		cout << "�������ͥסַ" << endl;
		string addr;
		cin >> addr;
		abs->personArray[ret].m_Addr = addr;
		cout << "�޸ĳɹ�!" << endl;

	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");//�밴���������
	system("cls");//��������
}


//�����ϵ��
void clearPerson(Addressbooks* abs)
{
	abs->m_Size = 0;//�߼��ϵ����
	cout << "ͨѶ¼�����" << endl;
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
			deletePerson(&abs);
			break;

		case 4://������ϵ��
			findPerson(&abs);
			break;

		case 5://�޸���ϵ��
			modifyPerson(&abs);
			break;

		case 6://�����ϵ��
			break;
			clearPerson(&abs);

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