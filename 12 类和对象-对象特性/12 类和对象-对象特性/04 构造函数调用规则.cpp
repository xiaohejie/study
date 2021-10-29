#include <iostream>
using namespace std;
/*
	构造函数调用规则：
	默认情况下，C++编译器至少给一个类添加3个构造函数
		1、默认构造函数（无参，函数体为空）
		2、默认析构函数（无参，函数体为空）
		3、默认拷贝函数，对属性进行值拷贝
	构造函数调用规则如下：
		如果用户定义有参构造函数，C++不在提供默认无参构造，但是会提供默认拷贝构造
		如果用户定义拷贝构造函数，C++不会再提供其他构造函数
*/
class Animal {
public:
	Animal() {
		cout << "Animal的默认构造函数调用" << endl;
	}
	Animal(int age) {
		cout << "Animal的默认构造函数调用" << endl;
		m_Age = age;

	}
	Animal(const Animal& p) {
		cout << "Animal的拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
	}
	~Animal() {
		cout << "Animal的析构函数的调用" << endl;
	}

	int m_Age;
};
void test04() {
	Animal p;
	p.m_Age = 12;

	Animal p1(p);
	cout << "P2的年龄为：" << p1.m_Age << endl;
}
int main4() {
	test04();
	system("pause");
	return 0;
}