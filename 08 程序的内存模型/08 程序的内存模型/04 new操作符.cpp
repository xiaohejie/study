#include <iostream>
using namespace std;
int* fun() {
	//在堆区创建一个整型数据
	//new返回的是该数据类型的指针
	int* p = new int(10);
	return p;
}
void test01() {
	int* p = fun();
	cout << *p << endl;
	//堆区中的数据，由程序员管理员开辟，程序员释放
	//如果想要释放对区中的数据，利用关键字delete
	delete p;
	//cout << *p << endl;//内存已经释放，再次访问就是非法操作，会报错
}
//在堆区利用new开辟数组
void test02() {
	//创建10整型数据的数组，在堆区
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//释放堆区数组
	delete[] arr;
}
int main() {
	/*
		new操作符：
			1、new的基本语法：
				
			2、在堆区利用new开辟数组：
				
	*/
	//test01();
	test02();
	system("pause");
	return 0;
}