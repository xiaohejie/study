#include <iostream>
using namespace std;
#include <vector>
//#include <algorithm>
/*
	仿函数返回 bool 类型的仿函数称为**谓词**
*/
//一元谓词
class GreaterFive {
public:
	bool operator()(int val) {
		return val > 5;
	}
};
void test02() {
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//查找容器中有没有大于5的数字
	//GreaterFive()：匿名的函数对象
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	if (it == v.end())
	{
		cout << "未找到！" << endl;
	}
	else
	{
		cout << "找到了，该数为：" << *it << endl;
	}
}
int main2() {
	test02();
	system("pause");
	return 0;
}