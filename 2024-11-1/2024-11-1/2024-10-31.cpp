#include <iostream>
using namespace std;

//程序运行时产生的数据都属于临时数据，程序一旦运行结束都会被释放
//通过文件可以将数据持久化
//C++中对文件操作需要包含头文件<fstream>
//文件类型分为两种:
//1. 文本文件  - 文件以文本的ASCII码形式存储在计算机中
//2.二进制文件 - 文件以文本的二进制形式存储在计算机中，用户一般不能直接读懂它们
//操作文件的三大类 :
//1.ofstream : 写操作
//2.ifstream : 读操作
//3. fstream :读写操作

//文本文件
//写文件
//写文件步骤如下 :
//1.包含头文件
//#include <fstream>
//2.创建流对象
//ofstream ofs;
//3.打开文件
//ofs.open(“文件路径",打开方式);
//4. 写数据
//ofs << "写入的数据”,
//5.关闭文件
//ofs.close();
int main()
{

	system("pause");
	return 0;
}