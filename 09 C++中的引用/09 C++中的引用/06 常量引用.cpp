#include <iostream>
using namespace std;
void showValue(const int& val) {
	//val = 1000;  
	cout << val << endl;
}
int main() {
	/*
		常量引用：主要用来修饰形参，防止误操作；
			在函数列表中，可以用const修饰形参，防止形参改变实参；
	*/
	//int a = 10;
	//int& ref = a;//不可以使用int& ref = 10;因为引用必须引一块合法的内存空间

	//const int& ref1 = 10;//加上const之后，编译器会将代码修改 int temp = 10;const int& ref  = temp; 
	//ref1 = 20;//加入const之后变为只读，就不可修改
	
	
	int a = 100;
	showValue(a);
	cout << a << endl;
	system("pause");
	return 0;
}