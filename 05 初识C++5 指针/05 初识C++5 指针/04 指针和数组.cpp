#include <iostream>
using namespace std;
int main4() {
	/*
		指针和数组：
			利用指针访问数组中的元素
	*/
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int* p = arr;
	cout << "利用指针访问第一个元素：" << *p << endl;
	p++;//让指针向后偏移四个字节
	cout << "利用指针访问第二个元素：" << *p << endl;
	system("pause");
	return 0;
}