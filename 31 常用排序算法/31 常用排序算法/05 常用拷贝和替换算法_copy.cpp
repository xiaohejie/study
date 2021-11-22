#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
	`copy(iterator beg, iterator end, iterator dest);  `
		// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
		// beg  开始迭代器
		// end  结束迭代器
		// dest 目标起始迭代器

		利用copy算法在拷贝时，目标容器记得提前开辟空间
*/
class myPrint {
public:
	void operator()(int val) {
		cout << val << "  ";
	}
};
void test05() {
	vector<int>v;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		int random = rand() % 50;
		v.push_back(random);
	}
	for_each(v.begin(), v.end(), myPrint());
	cout << endl;
	vector<int>v1;
	v1.resize(v.size());
	copy(v.begin(), v.end(), v1.begin());

	for_each(v1.begin(), v1.end(), myPrint());
	cout << endl;
}
int main05() {
	test05();
	system("pause");
	return 0;
}