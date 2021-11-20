#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
	- `count(iterator beg, iterator end, value);  `
	  // 统计元素出现次数
	  // beg 开始迭代器
	  // end 结束迭代器
	  // value 统计的元素
*/
//1、统计内置数据类型
void test07() {
	vector<int>v;
	srand((unsigned)time(NULL));
	for (int i = 0; i<100000; i++)
	{
		int random = rand() % 100;
		v.push_back(random);
	}
	int num = count(v.begin(), v.end(), 40);
	cout << num << endl;
}
//2、统计自定义数据类型
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	int operator==(const Person& p)
	{
		if (this->m_Age == p.m_Age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	string m_Name;
	int m_Age;
};

void test07_1()
{
	vector<Person> v;

	Person p1("刘备", 35);
	Person p2("关羽", 35);
	Person p3("张飞", 35);
	Person p4("赵云", 30);
	Person p5("曹操", 25);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	Person p("诸葛亮", 35);

	int num = count(v.begin(), v.end(), p);
	cout << "num = " << num << endl;
}
int main07() {
	test07_1();
	system("pause");
	return 0;
}