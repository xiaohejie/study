#include <iostream>
using namespace std;
/*
	函数重载的注意事项：
		1、引用作为重载的条件：
		2、函数重载碰到默认参数
*/
void fun(int& a) {//int& a = 10;不合法；因为引用的必须是堆区或栈区中的数据，而10在常量区中
	cout << "fun(int& a)调用" << endl;
}
void fun(const int& a) {
	cout << "fun(const int& a)调用" << endl;
}

void fun2(int a) {
	cout << "fun2(int a)的调用" << endl;
}
void fun2(int a , int b = 10) {
	cout << "fun2(int a, int b = 10)的调用" << endl;
}
int main() {
	//int a = 10;
	//fun(a);
	//fun(10);

	//fun2(10); //当函数重载碰到默认参数，就会出现二义性，就会报错，我们应该尽量避免
	system("pause");
	return 0;
}