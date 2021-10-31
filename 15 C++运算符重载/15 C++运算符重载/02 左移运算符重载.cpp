#include <iostream>
using namespace std;
/*
	左移运算符重载：
		作用：可以输出自定义数据类型
*/
class Person02 {
	friend ostream& operator<<(ostream& cout, Person02 p);
	friend void test02();
public:
	//利用成员函数实现左移运算符
	//一般不会用成员函数实现左移运算符，因为无法实现cout在左侧
	/*void operator<<(Person02& p){
		
	}*/
private:
	int m_A;
	int m_B;
};
//只能利用全局函数实现左移运算符
ostream& operator<<(ostream& cout ,Person02 p) {
	cout << "m_A = " << p.m_A << " m_B = " << p.m_B;
	return cout;
}
void test02() {
	Person02 p;
	p.m_A = 10;
	p.m_B = 20;
	cout << p << endl;
}
int main2() {
	test02();
	system("pause");
	return 0;
}