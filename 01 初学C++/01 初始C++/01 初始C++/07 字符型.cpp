#include <iostream>
using namespace std;

int main7() {
	//1、字符型变量创建方式
	char ch = 'a';
	//2、字符型变量所占内存大小（1个字节）

	//3、字符型变量常见错误
		//要是用单引号
		//单引号内只能使用1个字符

	//4、字符型变量对应ASCII编码（通过强制转换）
	cout << (int)ch << endl;
 	system("pause");
	return 0;
}