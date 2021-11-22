#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
	`replace_if(iterator beg, iterator end, _pred, newvalue);  `
		// 按条件替换元素，满足条件的替换成指定元素
		// beg 开始迭代器
		// end 结束迭代器
		// _pred 谓词
		// newvalue 替换的新元素

		replace_if按条件查找，可以利用仿函数灵活筛选满足的条件
*/
class myPrint {
public:
	void operator()(int val) {
		cout << val << "  ";
	}
};
class Greater30 {
public:
	bool operator()(int value) {
		return value > 30;
	}
};
void test07() {
	vector<int>v;
	v.push_back(30);
	v.push_back(105);
	v.push_back(0);
	v.push_back(20);
	v.push_back(33);
	v.push_back(96);
	v.push_back(87);

	for_each(v.begin(), v.end(), myPrint());
	cout << endl;

	replace_if(v.begin(), v.end(), Greater30(), 99);
	for_each(v.begin(), v.end(), myPrint());
	cout << endl;
}
int main07() {
	test07();
	system("pause");
	return 0;
}