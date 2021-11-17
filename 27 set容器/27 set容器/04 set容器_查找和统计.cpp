#include<iostream>
using namespace std;
#include <set>
/**
	set容器-查找和统计：
		* 查找   ---  find    （返回的是迭代器）
		* 统计   ---  count  （对于set，结果为0或者1）
*/
//查找和统计
void test04()
{
	set<int> s1;
	//插入
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	//查找（返回的是迭代器）
	set<int>::iterator pos = s1.find(50);

	if (pos != s1.end())
	{
		cout << "找到了元素 ： " << *pos << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}

	//统计
	int num = s1.count(30);
	cout << "num = " << num << endl;
}

int main04() {

	test04();

	system("pause");

	return 0;
}