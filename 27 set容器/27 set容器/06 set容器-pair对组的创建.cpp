#include<iostream>
using namespace std;
#include <string>
/*
	pair对组的创建：
		* `pair<type, type> p ( value1, value2 );`
		* `pair<type, type> p = make_pair( value1, value2 );`
*/
//对组创建
void test06()
{
	pair<string, int> p(string("Tom"), 20);
	cout << "姓名： " << p.first << " 年龄： " << p.second << endl;

	pair<string, int> p2 = make_pair("Jerry", 10);
	cout << "姓名： " << p2.first << " 年龄： " << p2.second << endl;
}

int main06() {

	test06();

	system("pause");

	return 0;
}