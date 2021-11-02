#include <iostream>
using namespace std;
/*
	同名静态成员的处理：
		静态成员和非静态成员出现同名，处理方式一致

*/
class Base06 {
public:
	static int m_A;
	static void func() {
		cout << "Base - func()调用" << endl;
	}

};
int Base06::m_A = 100;

class Son06 : public Base06 {
public:
	static int m_A;
	static void func() {
		cout << "Son - func()调用" << endl;
	}
};
int Son06::m_A = 200;

void test06() {
	Son06 s;
	/*
		同名静态成员属性
	*/
	//1、通过对象访问数据
	cout << "通过对象访问数据" << endl;
	cout << "Son 下的静态成员：" << s.m_A << endl;
	cout << "Base下的静态成员：" << s.Base06::m_A << endl;
	//2、通过类名访问
	cout << "通过类名访问" << endl;
	cout << "Son 下的静态成员：" << Son06::m_A << endl;
		//第一个::代表通过类名方式访问 第二个::代表访问父类作用域下的
	cout << "Base下的静态成员：" << Son06::Base06::m_A<< endl;

	/*
		同名静态函数
	*/
	/*s.func();
	s.Base06::func();*/
	Son06::func();
	Son06::Base06::func();
}
int main() {
	test06();
	system("pause");
	return 0;
}