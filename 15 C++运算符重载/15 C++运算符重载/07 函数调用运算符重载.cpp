#include <iostream>
using namespace std;
#include <string>
/*
		函数调用运算符重载：
			函数调用运算符()也可以重载
			由于重载后使用的方式非常像函数的调用，因此成为仿函数
			仿函数没有固定写法，非常灵活
*/
class MyPrint {
public:
	//重载函数调用运算符
	void operator()(string test) {
		cout << test << endl;
	}

};
void MyPrint02(string test) {
	cout << test << endl;
}

void test07() {
	MyPrint myPrint;
	myPrint("hello world");//由于使用起来非常类似于函数调用，因此称为仿函数

	MyPrint02("hello world");
}
class MyAdd {
public:
	//重载函数调用运算符
	int operator()(int num1, int num2) {
		return num1 + num2;
	}
};
void test07_1() {
	/*MyAdd myAdd;
	int add = myAdd.operator()(1 , 2);
	cout << add << endl;*/

	//匿名函数对象
	cout << MyAdd()(100 , 1000) << endl;
}
int main() {
	//test07();
	test07_1();
	system("pause");
	return 0;
}