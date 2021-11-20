#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
/*
	`transform(iterator beg1, iterator end1, iterator beg2, _func);`
		//beg1 源容器开始迭代器

		//end1 源容器结束迭代器

		//beg2 目标容器开始迭代器

		//_func 函数或者函数对象
*/
class TransForm {
public:
	int operator()(int v) {
		return v;
	}

};
class MyPrint {
public:
	void operator()(int v) {
		cout << v << "  ";
	}
};
void test02() {
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>vTarget;
	//注意：要申请容量
	vTarget.resize(v.size());
	transform(v.begin(), v.end(), vTarget.begin(), TransForm());
	for_each(vTarget.begin(), vTarget.end(), MyPrint());
	cout << endl;
}
int main2() {
	test02();
	system("pause");
	return 0;
}