#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
	`replace(iterator beg, iterator end, oldvalue, newvalue);  `
		// 将区间内旧元素 替换成 新元素
		// beg 开始迭代器
		// end 结束迭代器
		// oldvalue 旧元素
		// newvalue 新元素

		replace会替换区间内满足条件的元素
*/
class myPrint {
public:
	void operator()(int val) {
		cout << val << "  ";
	}
};
void test06() {
	vector<int>v;
	srand((unsigned)time(NULL));
	v.push_back(20);
	v.push_back(10);
	v.push_back(0);
	v.push_back(30);
	v.push_back(160);

	for_each(v.begin(), v.end(), myPrint());
	cout << endl;
	replace(v.begin(), v.end(), 20, 99);

	for_each(v.begin(), v.end(), myPrint());
	cout << endl;
}
int main06() {
	test06();
	system("pause");
	return 0;
}