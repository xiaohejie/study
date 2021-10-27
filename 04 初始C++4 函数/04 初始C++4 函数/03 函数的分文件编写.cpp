#include <iostream>
using namespace std;
#include "swap.h"

int main() {
	/*
		函数的分文件编写：

	*/
	int a = 3;
	int b = 6;
	swap(a, b);
	cout << a << endl;
	system("pause");
	return 0;
}