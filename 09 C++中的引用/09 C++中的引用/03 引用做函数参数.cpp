#include <iostream>
using namespace std;
//实现交换函数
//1、值传递
void mySwap01(int a , int b) {
	int temp = a;
	a = b;
	b = temp;
}
//2、地址传递
void mySwap02(int *a , int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
//3、引用传递
void mySwap03(int &a , int &b) {
	int temp = a;
	a = b;
	b = temp;
}
int main3() {
	/*
		引用做函数参数：
			
	*/
	int a = 10;
	int b = 20;
	mySwap01(a, b);//值传递，形参不会修饰实参
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "*************" << endl;
	mySwap02(&a, &b);//地址传递，形参会修饰实参 
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "*************" << endl;
	mySwap03(a , b);//引用传递，可以用形参修饰实参
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	system("pause");
	return 0;
}