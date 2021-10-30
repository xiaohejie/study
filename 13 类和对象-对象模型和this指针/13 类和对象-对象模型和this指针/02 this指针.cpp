#include <iostream>
using namespace std;
/*
	this指针概念：
		C++中成员变量和成员函数是分开存储的
		每一个非静态成员函数只会诞生一份函数实例，即多个同类型的对象会共用一块代码
		那么问题是：这一块代码是如何区分哪个对象调用自己

	C++通过提供特殊的对象指针，this指针，解决上述问题，this指针指向被调用的成员函数所属的对象
	this指针是隐含每一个非静态成员函数内的一种指针
	this指针不需要定义，直接使用即可

	this指针的用途：
		当形参和成员变量同名时，可用this指针来区分（解决名称冲突）
		在类的非静态成员函数中返回对象本身，可食用return *this（返回对象本身用*this）
		
*/
class Person02 {
public:
	Person02(int age) {
		//this指针指向被调用的成员函数所属的对象
		this->age = age;
	}
	int age;

	Person02& PersonAddAge(Person02& p) {
		this->age += p.age;

		//this指向p2的指针，而*this指向的就是p2这个对象本体
		return *this;
	}

};
void test02() {
	Person02 p1(18);
	cout << "P1的年龄为：" << p1.age << endl;
}
void test02_1() {
	Person02 p1(10);
	Person02 p2(10);
	//链式编程思想
	p1.PersonAddAge(p2).PersonAddAge(p2).PersonAddAge(p2).age;
	cout << "p2的年龄为：" << p1.age << endl;
}
int main2() {
	//test02();
	test02_1();
	system("pause");
	return 0;
}