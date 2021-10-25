#include <iostream>
using namespace std;
int main7() {
	//水仙花数：是指一个3位数，它的每个位上的数字的3次幂之和等于它本身
	//例如 1^3 + 5^3 + 3^3 = 153
	int n = 0;
	int a, b, c;
	cout << "请输入你想判断的数：" << endl;
	cin >> n;
	a = n % 10; 
	b = n / 10 % 10;
	c = n / 100;
	if (a*a*a + b*b*b + c*c*c == n) {
		cout << "该数为水仙花数！" << endl;
	}
	else
	{
		cout << "该数不是水仙花数！" << endl;
	}
	system("pause");
	return 0;
}