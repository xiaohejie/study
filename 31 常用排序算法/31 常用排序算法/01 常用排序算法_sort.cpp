#include<iostream>
#include <vector>
#include "algorithm"
using namespace std;
/*
	sort(iterator beg, iterator end, _Pred);  `
		// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
		//  beg    开始迭代器
		//  end    结束迭代器
		// _Pred  谓词
*/
void myPrint(int val) {
	
	cout << val << "  ";
}
void test01() {
	vector<int>v;
	srand((unsigned)time(NULL));
	for (int i = 0; i<100; i++)
	{
		int random = rand() % 50;
		v.push_back(random);
	}
	//利用sort进行升序
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	//改变为降序
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}
int main01() {
	test01();
	system("pause");
	return 0;
}