#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
	reserve:
		语法：`reverse(iterator beg, iterator end);  `
		// 反转指定范围的元素
		// beg 开始迭代器
		// end 结束迭代器
*/
class myPrint {
public:
	void operator()(int val) {
		cout << val << "  ";
	}
};
void test04() {
	vector<int>v;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		int random = rand() % 50;
		v.push_back(random);
	}
	cout << "反转前：" << endl;
	for_each(v.begin(), v.end(), myPrint());
	cout << endl;

	cout << "反转后：" << endl;
	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint());
	cout << endl;

}
int main04() {
	test04();
	system("pause");
	return 0;
}