#include <iostream>
using namespace std;
//string��������
//���� :
//��string��C++�����ַ�������string��������һ����
//string��char * ���� :
//	��char * ��һ��ָ��
//	��string��һ���࣬���ڲ���װ��char * ����������ַ�������һ��char * �͵�������
//�ص� :
//string ���ڲ���װ�˺ܶ��Ա������
//���� : ����find������copy��ɾ��delete�滻replace������insert
//string����char * ��������ڴ棬���õ��ĸ���Խ���ȡֵԽ��ȣ������ڲ����и���

//string���캯��
//���캯��ԭ�� :
//string();					����һ���յ��ַ��� ���� : string str;
//string(const char* s);		ʹ���ַ���s��ʼ��
//string(const string& str);	ʹ��һ��string�����ʼ����һ��string����
//string(it n, char c);		ʹ��n���ַ�c��ʼ��


//string�Ĺ��캯��
//void test01()
//{
//	string s1;//Ĭ�Ϲ���
//
//	const char* str = "hello world";
//	string s2(str);
//	cout << "s2= " << s2 << endl;
//
//	string s3(s2);
//	cout << "s3= " << s3 << endl;
//
//	string s4(10, 'a');
//	cout << "s4= " << s4 << endl;
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//-----------------------------------------

//string��ֵ����
//�������� :
//����string�ַ������и�ֵ
//��ֵ�ĺ���ԭ�� :
//string & operator=(const char* s);		//char*�����ַ��� ��ֵ����ǰ���ַ���
//string& operator=(const string& s);		//���ַ���s������ǰ���ַ���
//string& operator=(char c);				//�ַ���ֵ����ǰ���ַ���
//string& assign(const char* s);			//���ַ���s������ǰ���ַ���
//string& assign(const char* s, int n);	//���ַ���s��ǰn���ַ�������ǰ���ַ���
//string& assign(const string& s);		//���ַ���s������ǰ�ַ���
//string& assign(int n, char c);			//��n���ַ�c������ǰ�ַ���

//void test01()
//{
//	//string & operator=(const char* s);
//	string str1;
//	str1 = "hello world";
//	cout << "str1= " << str1 << endl;
//
//	//string& operator=(const string& s);
//	string str2;
//	str2 = str1;
//	cout << "str2= " << str2 << endl;
//
//	//string& operator=(char c);			
//	string str3;
//	str3 = 'a';
//	cout << "str3= " << str3 << endl;
//
//	//string& assign(const char* s);
//	string str4;
//	str4.assign("hello C++");
//	cout << "str4= " << str4 << endl;
//
//	//string& assign(const char* s, int n);	
//	string str5;
//	str5.assign("hello C++",5);
//	cout << "str5= " << str5 << endl;
//
//	//string& assign(const string& s);
//	string str6;
//	str6.assign(str5);
//	cout << "str6= " << str6 << endl;
//
//	//string& assign(int n, char c);
//	string str7;
//	str7.assign(10,'w');
//	cout << "str7= " << str7 << endl;
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//--------------------------------------------------------------------------------------------

//string�ַ���ƴ��T
//�������� :
//ʵ�����ַ���ĩβƴ���ַ���
//����ԭ�� :
//string & operator+=(const char* str);			//����+=������
//string& operator+=(const char c);				//����+=������
//string& operator+=(const string& str);			//����+=������
//string& append(const char* s);					//���ַ���s���ӵ���ǰ�ַ�����β
//string& append(const char* s, int n);			//���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
//string& append(const string& s);				//ͬoperator+=(const string& str)
//string& append(const string& s��int pos,int n);	//�ַ���s�д�p0s��ʼ��n���ַ����ӵ��ַ�����β


//void test01()
//{
//	string str1 = "��";
//	str1 += "������Ϸ";
//	cout << "str1= " << str1 << endl;
//
//	str1 += ':';
//	cout << "str1= " << str1 << endl;
//
//	string str2 = "LOL DNF";
//	str1 += str2;
//	cout << "str1= " << str1 << endl;
//
//	string str3 = "I ";
//	str3.append("love ");
//	cout << "str3= " << str3 << endl;
//
//	str3.append("game abcde",4);
//	cout << "str3= " << str3 << endl;
//
//	str3.append(str2);
//	cout << "str3= " << str3 << endl;
//
//	//str3.append(str2,0,3);//ֻ��ȡǰLOL
//	str3.append(str2, 4, 3); //ֻ��ȡǰDNF
//	cout << "str3= " << str3 << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//-----------------------------------------------------
//string���Һ��滻
//�������� :
//���� : ����ָ���ַ����Ƿ����
//�滻 : ��ָ����λ���滻�ַ���
//����ԭ�� :
//int find(const string & str, int pos = 0)const;		//����str��-�γ���λ��,��pos��ʼ����
//int find(const char* s, int pos = 0)const;			//����s��һ�γ���λ��,��pos��ʼ����
//int find(const char* s, int pos, int n)const;		//��posλ�ò���s��ǰn���ַ���һ��λ��
//int find(const char c, int pos = 0)const;			//�����ַ�c��һ�γ���λ��
//int rfind(const string& str, int pos = npos)const;	//����str���һ��λ��,��pos��ʼ����
//int rfind(const char* s, int pos = npos)const;		//����s���һ�γ���λ��,��pos��ʼ����	
//int rfind(const char* s, int pos, int n)const;		//��pos����s��ǰn���ַ����һ��λ��
//int rfind(const charc, int pos = 0)const;			//�����ַ�c���һ�γ���λ��
//string& replace(int pos, int n, const string& str); //�滻��pos��ʼn���ַ�Ϊ�ַ���str
//string& replace(int pos, int n, const char* s);		//�滻��pos��ʼ��n���ַ�Ϊ�ַ���s		

//����
//void test01()
//{
//	string str1 = "abcdefg";
//	int pos = str1.find("de");//deλ�ù̶�Ϊ�±�3��4.
//	if (pos == -1)
//	{
//		cout << "δ�ҵ��ַ���" << endl;
//	}
//	else
//	{
//		cout << "pos=" << pos << endl;
//	}
//
//	//rfind find ������
//	//rfind�Ǵ���������ң�find�Ǵ������Ҳ���
//	pos = str1.rfind("de");
//	cout << "pos=" << pos << endl;
//}
//
////�滻
//void test02()
//{
//	string str1 = "abcdefg";
//	str1.replace(1, 3, "1111");//a1111efg
//	cout << "str1=" << str1 << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}

//----------------------------------

//string�ַ����Ƚ�
//�������� :
//�ַ���֮��ıȽ�
//�ȽϷ�ʽ :
//���ַ����Ƚ��ǰ��ַ���ASCII����жԱ�
//= ���� 0
//> ���� 1
//< ���� - 1
//����ԭ��:
//int compare(const string & s)const;//���ַ���s�Ƚ�
//int compare(const char* s)const; //���ַ���s�Ƚ�

//void  test01()
//{
//	string str1 = "hello world";
//	string str2 = "xello world";
//	if (str1.compare(str2) == 0)
//	{
//		cout << "str1 ���� str2" << endl;
//	}
//	else if (str1.compare(str2) > 0)
//	{
//		cout << "str1 ���� str2" << endl;
//	}
//	else
//	{
//		cout << "str1 С�� str2" << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//-----------------------------------------------
//string�ַ���ȡ
//string�е����ַ���ȡ��ʽ������
//char& operator[](int n);//ͨ��[]��ʽȡ�ַ�
//char& at(int n);//ͨ��at������ȡ�ַ�

//void test01()
//{
//	string str = "hello";
//	cout << "str=" << str << endl;
//	//1��char& operator[](int n);//ͨ��[]��ʽȡ�ַ�
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str[i] << " ";
//	}
//	cout << endl;
//	//2��char& at(int n);//ͨ��at������ȡ�ַ�
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str.at(i) << " ";
//	}
//	cout << endl;
//
//	//�޸ĵ����ַ�
//	str[0] = 'x';
//	//xello
//	cout << "str=" << str << endl;
//	str.at(1) = 'x';
//	//xxllo
//	cout << "str=" << str << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//-------------------------------------
//string�����ɾ��
//�������� :
//����string�ַ������в����ɾ���ַ�����
//����ԭ�� :
//string & insert(int pos, const char* s);		//�����ַ���
//string& insert(int pos, const string& str);		//�����ַ���
//string& insert(int pos, int n, char c);			//��ָ��λ�ò���n���ַ�c
//string& erase(int pos, int n = npos);			//ɾ����Pos��ʼ��n���ַ�

//void test01()
//{
//	string str = "hello";
//	//����
//	str.insert(1, "111");
//	cout << "str=" << str << endl;
//
//	//ɾ��
//	str.erase(1,3);
//	cout << "str=" << str << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//----------------------------------------------------
//string�Ӵ�
//�������� :
//���ַ����л�ȡ��Ҫ���Ӵ�
//����ԭ�� :
//string substr(int pos = 8��intn = npos)const; //������pOS��ʼ��n���ַ���ɵ��ַ���

//void test01()
//{
//	string str = "abcdef";
//	string subStr = str.substr(1, 3);
//	cout << "subStr=" << subStr << endl;
//}
////ʵ�ò���
//void test02()
//{
//	string email = "lisi@sina.com";
//	//���ʼ��н�ȡ�û���
//	int pos = email.find("@");
//	cout << pos << endl;
//
//	string userName = email.substr(0, pos);
//	cout << userName << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}