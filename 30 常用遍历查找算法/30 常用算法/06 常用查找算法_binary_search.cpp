#include<iostream>
#include <vector>
#include<algorithm> 
using namespace std;
/*
	`bool binary_search(iterator beg, iterator end, value);  `
		// 查找指定的元素，查到 返回true  否则false
		// 注意: 在**无序序列中不可用**
		// beg 开始迭代器
		// end 结束迭代器
		// value 查找的元素
*/
void test06() {
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//注意：必须是有序，如果是无序的序列，结果未知
	bool res = binary_search(v.begin(), v.end(), 9);
}
int main06() {
	test06();
	system("pause");
	return 0;
}