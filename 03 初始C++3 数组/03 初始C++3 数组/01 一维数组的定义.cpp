#include <iostream>
using namespace std;
int main1() {
	//数组
	/*
		1、数据类型 数组名[ 数组长度 ];
		2、数据类型 数组名[ 数组长度 ] = {值1 ， 值2 }；
		3、数据类型 数组名 = { 值1 ， 值2 }；
	*/

	/*
		一维数组的用途：
			1、可以统计整个数组在内存中的长度：sizeof(arr)
			2、可以获取数组在内存中的首地址
	*/
	int arr[5] = { 1 , 2 ,3 ,4 ,5 };
	cout << sizeof(arr) << endl;
	cout << sizeof(arr[0]) << endl;
	cout << sizeof(arr) / sizeof(arr[0]) << endl;
	//cout << arr.length << endl;
	cout << arr << endl;
	cout << &arr[0] << endl;

	system("pause");
	return 0;
}