#include <iostream>
using namespace std;

int main2(){

	//1、单精度（占用4个字节的内存空间）	float
	//2、双精度	（占用8个字节的内存空间）	double
	//默认情况下，输出一个小数，会显示出6位有效数字
	float f1 = 3.14f;

	double d1 = 3.14;

	//科学记数法
	float f2 = 3e2;//3 * 10 ^ 2
	float f3 = 3e-2;//3 * 0.1 ^ 2


	system("pause");
	return 0;
}