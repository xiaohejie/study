#include <iostream>
using namespace std;
#include <vector>
/*
	vector预留空间：
		`reserve(int len);`//容器预留len个元素长度，预留位置不初始化，元素不可访问。
*/
void test07() {
	vector<int>v;
	//利用reserve预留空间:就不会出现已知找新空间的操作
	v.reserve(10000);
	int num = 0;		//统计开辟内存的次数
	int* p = NULL;

	for (int i = 0; i < 10000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
	cout << "num = " << num << endl;
}
int main() {
	test07();
	system("pause");
	return 0;
}