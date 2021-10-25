#include <iostream>
using namespace std;
int* func() {
	//利用new关键字，可以将数据开辟到堆区
	int* p = new int(10);
	return p;
}
int main3() {
	/*
		堆区：（程序运行后）
			由程序员分配释放，若程序员不释放，程序运行结束时由操作系统回收；程序员手动释放
				的话，可以用操作符delete；
			在C++中主要利用new在堆区中开辟内存
	*/
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	system("pause");
	return 0;
}