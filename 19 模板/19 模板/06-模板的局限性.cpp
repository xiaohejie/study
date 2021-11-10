#include <iostream>
using namespace std;
/*
	模板的局限性：
		模板不是万能的，有些特定的数据类型，需要具体化做特殊实现
*/

class Person {
public:
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};
//对比两个数据是否相等
template<class T>
bool myCompare(T& a, T& b) {
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//利用具体化Person的版本实现代码，具体化优先调用
template<> bool myCompare(Person& a, Person& b) {
	if (a.m_Age == b.m_Age && a.m_Name == b.m_Name)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void test06() {
	Person p1("张三", 23);
	Person p2("李四", 23);

	bool ret = myCompare(p1, p2);
	if (ret)
	{
		cout << "p1 == p2" << endl;
	}
	else
	{
		cout << "p1 != p2" << endl;
	}
}
int main() {
	test06 ();
	system("pause");
	return 0;
}