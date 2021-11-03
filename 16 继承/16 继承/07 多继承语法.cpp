#include <iostream>
using namespace std;
/*
	多继承与法：
		C++中允许继承多个类
		语法：class 子类 : 继承方式 父类1 , 继承方式 父类2...
		注意：多继承中可能引发父类中有同名成员的出现，需要加作用域进行区分
*/
class Base {
public:
	Base() {
		m_A = 100;
	}
	int m_A;
};
class Base1 {
public:
	Base1() {
		m_A = 200;
	}
	int m_A;

};
//子类需要继承Base和Base1
class Son : public Base, public Base1 {
public:
	Son() {
		m_C = 300;
		m_D = 400;
	}
	int m_C;
	int m_D;

};
void test07() {
	Son s;
	cout << "sizeof(s)：" << sizeof(s) << endl;
	cout << s.Base::m_A << endl;
	cout << s.Base1::m_A << endl;
}
int main7() {
	test07();
	system("pause");
	return 0;
}