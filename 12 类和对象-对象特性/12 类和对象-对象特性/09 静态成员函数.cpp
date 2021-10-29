#include <iostream>
using namespace std;
/*
	静态成员函数：
		所有对象共享同一个函数
		静态成员函数只能访问静态成员变量

		静态成员函数也是有访问权限的，即类外访问不到私有静态成员函数
*/
class Person9 {
public:
	//静态成员函数
	static void func() {
		m_A = 100;//静态的成员函数可以访问静态的成员变量
		//m_B = 10;//静态成员变量不可以访问非静态成员变量,因为m_B要通过对象进行调用
		//编译器无法区分到底是哪个对象的m_B属性
		cout << "static void func调用" << endl;
	}
	static int m_A;//静态成员变量
	int m_B;//非静态成员变量

};
 int Person9::m_A = 10;
void test09() {
	//1、通过对象访问
	Person9 p;
	p.func();

	//2、通过类名访问
	//Person9::func();
}
int main() {
	test09();
	system("pause");
	return 0;
}