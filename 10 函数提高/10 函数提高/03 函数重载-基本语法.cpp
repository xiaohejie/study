#include <iostream>
using namespace std;
/*
	函数重载：
		作用：函数名可以相同，提高复用性
		函数重载满足条件：
			1、同一个作用域下
			2、函数名称相同
			3、函数参数类型不同 或者 个数不同 或者 顺序不同
		注意：函数的返回值不可以作为函数重载的条件
*/
void func() {
	cout << "func 的调用" << endl;
}
void func(int a) {
	cout << "func(int a) 的调用!" << endl;
}
int main3() {
	func(1);
	system("pause");
	return 0;
}