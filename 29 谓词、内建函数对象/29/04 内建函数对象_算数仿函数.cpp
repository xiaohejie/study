#include <iostream>
#include <functional>
using namespace std;
/*
	算数仿函数：
		* `template<class T> T plus<T>`                //加法仿函数
		* `template<class T> T minus<T>`              //减法仿函数
		* `template<class T> T multiplies<T>`    //乘法仿函数
		* `template<class T> T divides<T>`         //除法仿函数
		* `template<class T> T modulus<T>`         //取模仿函数
		* `template<class T> T negate<T>`           //取反仿函数
*/
void test04() {
	negate<int>n;
	plus<int>p;

	cout << n(50) << endl;
	cout << p(10, 20) << endl;
}
int main4() {
	test04();
	system("pause");
	return 0;
}