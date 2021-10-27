#include <iostream>
using namespace std;
int main2() {
	/*
		空指针：用于给指针变量进行初始化
			    空指针是不可以进行访问的：0~255之间的编号是系统占用的，因此不可以进行访问

		野指针：指针变量指向非法的内存空间
			在程序中一定要避免出现野指针

		总结：空指针和野指针都不是我们申请的空间，因此不要进行访问
	*/
	int* p = NULL;
	system("pause");
	return 0;
}