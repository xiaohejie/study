#include <iostream>
using namespace std;
/*
	静态成员变量：
		所有对象共享同一份数据
		在编译阶段分配内存
		类内声明，类外初始化

	静态成员变量也是有访问权限的，类外访问不到私有的静态成员变量
*/
class Person8 {
public:
	static int m_A;

};
int Person8::m_A = 100;
void test08(){
	Person8 p;
	cout << p.m_A << endl;
	Person8 p1;
	p1.m_A = 200;
	cout << p.m_A << endl;
}
void test081() {
	//静态程序员不属于某个对象上，所有对象都共享同一份数据
	//因此静态成员变量有两种访问方式：
		//1、通过对象进行访问
	/*Person8 p;
	cout << p.m_A << endl;*/
		//2、通过类名进行访问
	Person8::m_A = 20;
	cout << Person8::m_A << endl;
}
int main8() {
	//test08();
	test081();
	system("pause");
	return 0;
}