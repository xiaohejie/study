#include <iostream>
using namespace std;
//1、不要返回局部变量的引用
int& test01() {
	int a = 10;//局部变量存放在四区中的栈区
	return a;
}

//2、函数的调用可以作为左值
int& test02() {
	static int a = 11;//静态变量，存放在全局区，全局区上的数据在程序结束后由系统释放
	return a;
}
int main4() {
	/*
		引用做函数返回值：
			1、不要返回局部变量的引用
			2、函数的调用可以作为左值
	*/
	int& ref = test01();
	cout << "ref = " << ref << endl;//第一次是对的，是因为编译器做了保留
	cout << "ref = " << ref << endl;
	cout << "*************" << endl;
	int& ref1 = test02();
	cout << "ref1 = " << ref1 << endl;
	cout << "ref1 = " << ref1 << endl;
	cout << "*************" << endl;
	test02() = 1000;//如果函数的返回值是引用，这个函数调用可以作为左值
	cout << "ref = " << ref1 << endl;
	cout << "ref = " << ref1 << endl;
	system("pause");
	return 0;
}