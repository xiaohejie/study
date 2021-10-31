#include <iostream>
using namespace std;
/*
	总结：对于内置的数据类型的表达式的运算是不能够改变的
		  不要滥用运算符重载
	加号运算符重载：
		成员函数重载+号
		全局函数重载+号
*/
class Person {
public:
	//通过成员函数重载 + 号
	/*Person operator+(Person& p) {
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}*/
public:
	int m_A;
	int m_B;
};
//全局函数重载 + 号
Person operator+(Person& p1, Person& p2) {
	Person temp;
	temp.m_A = p1.m_A + p2.m_B;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}

void test01() {
	Person p1;
	p1.m_A = 10;
	p1.m_B = 10;
	Person p2;
	p2.m_A = 2;
	p2.m_B = 2;

	Person p3 = p1 + p2;
	cout << "p3.m_A的值为：" << p3.m_A << endl;
	cout << "p3.m_B的值为：" << p3.m_B << endl;
}
int main1() {
	test01();
	system("pause");
	return 0;
}