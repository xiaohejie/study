#include <iostream>
using namespace std;
//发现是引用，转化为int* const ref = &a; 
void func(int& ref) {
	ref = 100;//ref是引用，转化为*ref = 100；
}
int main5() {
	/*
		引用的本质：
			引用的本质在C++内部实现是一个指针常量
	*/
	int a = 10;
	int& ref = a;//自动转换为int* const ref  = &a;指针常量的指针指向不可以修改，也就说明引用为什么不可以修改
	ref = 20;//内部发现ref是引用，自动帮我们转化为*ref = 20;
	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;

	func(a);
	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;
	system("pause");
	return 0;
}