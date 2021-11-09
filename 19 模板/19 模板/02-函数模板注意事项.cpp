#include <iostream>
using namespace std;
/*
	函数模板注意事项：
		-自动类型推导，必须推导出一致的数据类型T，才可以使用
		-模板必须要确定T的数据类型，才可以使用
*/
//函数模板
template<typename T>//typename也可以替换成class（无区别）
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

void test02() {
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

template<class T>
void func() {
	cout << "func() 调用" << endl;
}
void test2_1() {
	func<int>();
}

int main2() {
	test02();
	test2_1();
	system("pause");
	return 0;
}