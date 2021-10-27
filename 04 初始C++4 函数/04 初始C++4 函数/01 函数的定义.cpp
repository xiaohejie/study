#include <iostream>
using namespace std;

int add(int num1, int num2) {
	int sum = num1 + num2;
	return sum;

}
int main1() {
	/*
		函数的定义：
			返回值类型 函数名(参数列表){
				函数体语句；
				return表达式；
			}
	*/
	int sum = add(1, 2);
	cout << sum << endl;

	system("pause");
	return 0;
}
