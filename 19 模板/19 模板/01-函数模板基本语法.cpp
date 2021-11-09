#include <iostream>
using namespace std;
/*
	函数模板：
		
*/
//两个整型交换函数
void swapInt(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
//交换两个浮点型
void swapDouble(double& a, double& b) {
	double temp = a;
	a = b;
	b = temp;
}

//函数模板
template<typename T>
void mySwap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

void test01() {
	int a = 10;
	int b = 20;
	//swapInt(a, b);
	//利用函数模板进行交换
	//两种方式

	//1、自动类型推到
	mySwap(a, b);
	//2、显示指定类型
	mySwap<int>(a, b);


	cout << a << endl;
	cout << b << endl;
}
int main1() {
	test01();
	system("pause");
	return 0;
}