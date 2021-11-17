#include<iostream>
using namespace std;
#include <set>
/*
	set容器的大小和交换：	
		* 统计大小   --- size
		* 判断是否为空   --- empty
		* 交换容器   --- swap
*/
void printSet02(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//大小
void test02()
{

	set<int> s1;

	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	if (s1.empty())
	{
		cout << "s1为空" << endl;
	}
	else
	{
		cout << "s1不为空" << endl;
		cout << "s1的大小为： " << s1.size() << endl;
	}

}

//交换
void test02_1()
{
	set<int> s1;

	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	set<int> s2;

	s2.insert(100);
	s2.insert(300);
	s2.insert(200);
	s2.insert(400);

	cout << "交换前" << endl;
	printSet02(s1);
	printSet02(s2);
	cout << endl;

	cout << "交换后" << endl;
	s1.swap(s2);
	printSet02(s1);
	printSet02(s2);
}

int main2() {

	//test02();

	test02_1();

	system("pause");

	return 0;
}