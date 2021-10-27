#include <iostream>
using namespace std;

//函数的声明
void swap1(int* num1, int* num2);


void swap1(int *num1 , int *num2) {
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;

	return;
}
int main2() {
	/*
		值传递：
			 
	*/
	int a = 0;
	int b = 3;
	swap1(&a, &b);
	cout << a << endl;

	system("pause");
	return 0;
}