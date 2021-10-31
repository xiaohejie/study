#include <iostream>
using namespace std;
/*
	递增运算符重载：
		通过递增运算符重载，实现自己的整型数据

*/
class MyInteger {
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger() {
		m_Num = 0;
	}
	//重载前置++运算符
	//在这里为什么要是用引用，因为如果如果不使用引用的话，它++后返回的是一个新的变量
	//使用引用的话可以一直对一个数据进行递增
	MyInteger& operator++() {
		//先进行++运算
		m_Num++;
		//再将自身做返回
		return *this;
	}
	//重载后置++运算符
	//void operator++(int)  int表示占位参数，可以用于区分前置和后置递增
	MyInteger	 operator++(int) {
		//先记录当时结果
		MyInteger temp = *this;
		//后递增
		m_Num++;
		//最后将记录结果做返回
		return temp;

	}
private:
	int m_Num;
};
//重载左移运算符
ostream& operator<<(ostream& cout , MyInteger myint) {
	cout << myint.m_Num;
	return cout;
}
void test03() {
	MyInteger myint;
	//cout << ++myint << endl;
	cout << myint.operator++().operator++() << endl;
	cout << myint << endl;
}
void test03_1() {
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
}

int main3() {
	//test03();
	test03_1();
	system("pause");
	return 0;
}