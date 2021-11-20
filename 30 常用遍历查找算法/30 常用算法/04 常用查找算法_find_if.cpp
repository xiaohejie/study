#include<iostream>
#include <vector>
using namespace std;
/*
	`find_if(iterator beg, iterator end, _Pred);  `
		// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
		// beg 开始迭代器
		// end 结束迭代器
		// _Pred 函数或者谓词（返回bool类型的仿函数）
*/
//1、查找内置数据类型
class GreaterFive {
public:
	bool operator()(int val) {
		return val > 5;
	}
};
void test04() {
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	if (it == v.end())
	{
		cout << "未找到！" << endl;
	}
	else
	{
		cout << "找到了！值为：" << *it << endl;
	}
}
//2、查找自定义数据类型
class Person {
public:
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};
class Greater20
{
public:
	bool operator()(Person& p)
	{
		return p.m_Age > 20;
	}

};
void test04_1() {
	vector<Person> v;

	//创建数据
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	vector<Person>::iterator it = find_if(v.begin(), v.end(), Greater20());
	if (it == v.end())
	{
		cout << "没有找到!" << endl;
	}
	else
	{
		cout << "找到姓名:" << it->m_Name << " 年龄: " << it->m_Age << endl;
	}
}
int main4() {
	test04_1();
	system("pause");
	return 0;
}