#include <iostream>
using namespace std;
/*
	调用时机：
		1、使用一个已经创建完毕的对象来初始化一个新对象
		2、值传递的方式给函数参数传值
		3、以值方式返回局部对象
*/
class Person3 {
public:
	Person3() {
		cout << "Person默认构造函数调用" << endl;
	}
	Person3(int a) {
		m_Age = a;
		cout << "Person的有参构造函数调用" << endl;
	}
	Person3(const Person3& p) {
		m_Age = p.m_Age;
		cout << "Person的拷贝构造函数调用" << endl;
	}
	~Person3() {
		cout << "Person析构函数调用" << endl;
	}
	int m_Age;
};
//1、使用一个已经创建完毕的对象来初始化一个新对象
void test01() {
	Person3 p1(20);
	Person3 p2(p1);

	cout << "P2的年龄为：" << p2.m_Age << endl;
}
//2、值传递的方式给函数参数传值
void doWork(Person3 p) {

}
void test02() {
	Person3 p;
	doWork(p);
}
//3、以值方式返回局部对象
Person3 doWork2() {
	Person3 p1;
	cout << (int*)&p1 << endl;

	return p1;
}
void test03() {
	Person3 p = doWork2();
	cout << (int*)&p << endl;
}
int main3() {
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}