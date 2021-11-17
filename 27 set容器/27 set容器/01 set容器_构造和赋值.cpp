#include<iostream>
using namespace std;
#include <set>
/*
	set容器：
		* set容器插入数据时用insert
		* set容器插入数据的数据会自动排序
*/
void printSet01(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//构造和赋值
void test01()
{
	set<int> s1;

	//只可以使用insert进行插入
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	printSet01(s1);

	//拷贝构造
	set<int>s2(s1);
	printSet01(s2);

	//赋值
	set<int>s3;
	s3 = s2;
	printSet01(s3);
}

int main1() {

	test01();

	system("pause");

	return 0;
}