#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
	adjacent_find:
		`adjacent_find(iterator beg, iterator end);  `
		// 查找相邻重复元素,返回相邻元素的第一个位置的迭代器
		// beg 开始迭代器
		// end 结束迭代器
*/
void test05() {
	vector<int>v;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		int random = rand() % 5;
		v.push_back(random);
	}
	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());
	if (pos == v.end())
	{
		cout << "未找到相邻重复元素！" << endl;
	}
	else
	{
		cout << "找到相邻重复元素！该数为：" << (*pos) << endl;
	}

}
int main05() {
	test05();
	system("pause");
	return 0;
}