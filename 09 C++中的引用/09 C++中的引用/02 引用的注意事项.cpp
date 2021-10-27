#include <iostream>
using namespace std;
int main2() {
	/*
		引用的注意事项：
			1、引用必须被初始化
			2、引用一旦初始化后，就不可以更改
	*/
	int a = 10;
	int& b = a;
	int c = 20;
	b = c;//这是赋值操作，而不是更改引用
	system("pause");
	return 0;
}