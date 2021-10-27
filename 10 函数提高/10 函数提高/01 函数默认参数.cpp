#include <iostream>
using namespace std;
/*
	函数的默认参数：
		如果我们自己传入参数，就用自己的数据，如果没有，那么用默认值；
		语法：返回值类型 函数名(形参 = 默认值){}

		注意事项：
			1、如果某个位置已经有了默认参数，那么从这个位置之后，从左到右都必须有默认值
			2、如果函数的声明有默认参数，函数的实现就不能有默认参数，即声明和实现只能有一个有默认参数
*/
int func(int a , int b= 20 , int c = 30) {
	return a + b + c;
}
int main1() {
	func(10 , 20);
	system("pause");
	return 0;
}