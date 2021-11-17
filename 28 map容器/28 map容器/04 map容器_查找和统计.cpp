#include <iostream>
using namespace std;
#include <map>

/*
	查找和统计
		- 查找   ---  find    （返回的是迭代器）
		- 统计   ---  count  （对于map，结果为0或者1）
*/
void test04()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));

	//查找
	map<int, int>::iterator pos = m.find(3);

	if (pos != m.end())
	{
		cout << "找到了元素 key = " << (*pos).first << " value = " << (*pos).second << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}

	//统计
	int num = m.count(10);
	cout << "num = " << num << endl;
}

int main04() {

	test04();

	system("pause");

	return 0;
}