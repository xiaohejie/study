#include <iostream>
using namespace std;
int main1() {
	/*
		指针的定义和使用
			1、定义：数据类型* 指针变量;
				int a = 10;
				int* p;
				p = &a;	//指针记录变量的值，指针就是地址
			
			2、使用指针：（可以通过解引用的方式来找到指针指向的内存：*p）
				指针前加 * 代表解引用，找到指针指向的内存中的数据
				*p = 100;
		指针所占内存空间：在32位操作系统下：占用4个字节；64位操作系统下：占用8个字节
	*/

	int a = 10;
	int* p;
	p = &a;
	cout << &a << endl;
	cout << p << endl;

	//指针所占内存空间
	cout << "sizeof(int *) = " << sizeof(p) << endl;
	cout << "sizeof(float *) = " << sizeof(float* ) << endl;
	cout << "sizeof(char *) = " << sizeof(char*) << endl;
	cout << "sizeof(string *) = " << sizeof(string*) << endl;

	*p = 10001;
	cout << *p << endl;
	cout << a << endl;
	system("pause");
	return 0;
}