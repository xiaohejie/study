#include <iostream>
using namespace std;

//定义常量的方式：
//1、#define 宏常量
//2、const修饰的变量

#define Day 7

int main4(){
	
	cout << "一周一共有" << Day << "天" << endl;

	//2、const修饰的变量
	const int month = 12;
	cout << "一年一共有" <<	month << "月" << endl;
	
	system("pause");
	return 0;

}