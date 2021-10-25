#include <iostream>
using namespace std;
int* fun(int b) {//形参数据也会放在栈区
	b = 100;
	int a = 10;		//局部变量存放在栈区，栈区的数据在函数执行完后自动释放
	return &a;
}
int main2() {
	/*
		栈区：
			1、栈区的数据由编译器管理开辟和释放
			2、注意：不要返回局部变量的地址
			3、栈区中存放的时局部变量和形参
	*/
	int* p = fun(10);

	cout << *p << endl;//第一次可以打印正确的数字，是因为编译器做了保留
	cout << *p << endl;//第二次这个数据就不在保留了
	system("pause");
	return 0;
}