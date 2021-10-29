#include <iostream>
using namespace std;
/*
	初始化列表：
		C++中给提供了初始化列表语法，用来初始化属性
		语法：构造函数():属性1(值1),属性2(值2)...{}
*/
class Person6 {
public:
	//传统初始化操作
	/*Person6(int a,int b,int c) {
		m_A = a;
		m_B = b;
		m_C = c;
	}*/

	//初始化列表初始化属性
	Person6(int a,int b,int c) :m_A(a), m_B(b), m_C(c) {
		
	}

	int m_A;
	int m_B;
	int m_C;

};
void test06() {
	//Person6 p(10, 20, 30);
	Person6 p(10,20,30);
	cout << "m_A = " << p.m_A << "\tm_B = " << p.m_B << "\tm_C = " << p.m_C << endl;
}
int main6() {
	test06();
	system("pause");
	return 0;
}