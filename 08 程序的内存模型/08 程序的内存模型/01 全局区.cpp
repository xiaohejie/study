#include <iostream>
using namespace std;
//全局变量
int g_a = 10;
int main1() {
	/*
		全局变量：
			用来存放全局变量、静态变量、全局常量(局部常量不在也就是const修饰的局部变量)

		总结：C++中程序运行前分为全局区和代码区
			  代码区特点是共享和只读
			  全局区中存放全局变量、静态变量、常量
			  常量区中存放从const修饰的全局常量以及字符串常量
	*/

	//创建局部变量
	int a = 10;
	int b = 10;
	cout << (int)&a << endl;
	cout << (int)&b << endl;
	cout << (int)&g_a << endl;

	//静态变量
	static int s_a = 10;
	cout << (int)&s_a << endl;

	//常量：字符串常量和const修饰的变量
	//局部常量
	const int c_l_a = 10;
	cout << (int)&c_l_a << endl;
	system("pause");
	return 0;
}