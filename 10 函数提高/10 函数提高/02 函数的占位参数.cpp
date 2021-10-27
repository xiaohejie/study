#include <iostream>
using namespace std;
/*
	函数的占位参数：
		C++中的函数的形参列表里可以有占位参数，用来做占位，调用函数时则必须填补该位置。、
		语法：返回值类型 函数名(数据类型){}
		占位参数还可以有默认参数
*/
void func(int a , int = 10) {
	cout << "this is a func" << endl;
}
int main2() {
	func(10, 20);
	func(10);
	system("pause");
	return 0;
}