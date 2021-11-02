#include <iostream>
using namespace std;
/*
	继承中同名成员处理方式：
		如果通过子类对象访问到父类中同名成员，需要加作用域
*/
class Base {
public:
	Base() {
		m_A = 100;
	}
	int m_A;
	void func() {
		cout << "Base - func()调用" << endl;
	}

};
class Son : public Base {
public:
	Son() {
		m_A = 200;
	}
	int m_A;
	void func() {
		cout << "Son - func()调用" << endl;
	}
};
void test05() {
	Son s;
	//同名成员属性处理
	/*cout << "Son	下的m_A" << s.m_A << endl;
	cout << "Base	下的m_A" << s.Base::m_A << endl;*/

	//同名成员函数处理
	s.func();
	s.Base::func();
}
int main5() {
	test05();
	system("pause");
	return 0;
}