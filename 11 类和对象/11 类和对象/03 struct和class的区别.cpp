#include <iostream>
using namespace std;
/*
	在C++中struct和class的唯一区别就在于 默认的访问权限不同
	区别：
		struct默认权限为公共；
		class默认权限为私有。
*/
class C1 {
	int m_A;//默认权限是私有
};
struct C2
{
	int m_A;//默认权限是公共
};
int main3() {
	system("pause");
	return 0;
}