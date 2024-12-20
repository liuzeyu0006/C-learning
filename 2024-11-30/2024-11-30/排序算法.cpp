#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <ctime>
//常用排序算法
//学习目标：
//掌握常用的排序算法
//
//算法简介：
//sort //对容器内元素进行排序
//random_shuffle //洗牌 指定范围内的元素随机调整次序
//merge // 容器元素合并，并存储到另一容器中
//reverse // 反转指定范围的元素
//
//sort
//功能描述：
//对容器内元素进行排序
//函数原型：
//sort(iterator beg, iterator end, _Pred);
//// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
//// beg 开始迭代器
//// end 结束迭代器
//// _Pred 谓词
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(40);
//	v.push_back(20);
//
//	//利用sort进行升序
//	sort(v.begin(), v.end());
//	for_each(v.begin(), v.end(), myPrint);
//	cout << endl;
//
//	//改为降序
//	sort(v.begin(), v.end(),greater<int>());
//	for_each(v.begin(), v.end(), myPrint);
//	cout << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//random_shuffle
//功能描述：
//洗牌 指定范围内的元素随机调整次序
//函数原型：
//random_shuffle(iterator beg, iterator end);
//// 指定范围内的元素随机调整次序
//// beg 开始迭代器
//// end 结束迭代器


//void myPrint(int val)
//{
//	cout << val << " ";
//}
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i< 10; i++)
//	{
//		v.push_back(i);
//	}
//	
//	//利用洗牌算法打乱顺序
//	random_shuffle(v.begin(), v.end());
//	for_each(v.begin(), v.end(),myPrint);
//}
//int main()
//{
//	//随机种子
//	srand((unsigned int)time(NULL));
//	test01();
//	system("pause");
//	return 0;
//}


//merge
//功能描述：
//两个容器元素合并，并存储到另一容器中
//函数原型：
//merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
//// 容器元素合并，并存储到另一容器中
//// 注意: 两个容器必须是有序的
//// beg1 容器1开始迭代器 // end1 容器1结束迭代器 // beg2 容器2开始迭代器 // end2 容器2结束迭代器 //
//dest 目标容器开始迭代器


//void myPrint(int val)
//{
//	cout << val << " ";
//}
//void test01()
//{
//	vector<int>v1;
//	vector<int>v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v1.push_back(i+1);
//	}
//
//	//目标容器
//	vector<int>vTarget;
//
//	//提前分配空间
//	vTarget.resize(v1.size() + v2.size());
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), vTarget.end(), myPrint);
//}
//int main()
//{
//	//随机种子
//	test01();
//	system("pause");
//	return 0;
//}


//reverse
//功能描述：
//将容器内元素进行反转
//函数原型：
//reverse(iterator beg, iterator end);
// 反转指定范围的元素
// beg 开始迭代器
// end 结束迭代器
//class myPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//void test01()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(40);
//	cout << "反转前： " << endl;
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//	cout << "反转后： " << endl;
//	reverse(v.begin(), v.end());
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}