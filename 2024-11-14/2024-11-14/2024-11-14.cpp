#include <iostream>
using namespace std;

//goto语句是一种编程语言中的控制流语句，它可以无条件地跳转到程序中的另一个标记位置。
int main()
{
	int init_value = 0;
	int sum = 0;
label_start:
	init_value++;
	sum += init_value;
	if (init_value < 10)
	{
		goto label_start;
	}
	cout << sum << endl;
	return 0;
}