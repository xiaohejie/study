#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
/*
	逻辑仿函数：
		* `template<class T> bool logical_and<T>`              //逻辑与
		* `template<class T> bool logical_or<T>`                //逻辑或
		* `template<class T> bool logical_not<T>`              //逻辑非
*/
void test06() {
	vector<bool>v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(false);
	v.push_back(true);
	v.push_back(true);

	//利用逻辑非 将容器v搬运到容器v2中，并执行去反操作
	vector<bool>v2;
	v2.resize(v.size());		//开辟空间
	//transform：搬运
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++) {
		cout << *it << "  ";
	}
	cout << endl;
}
int main() {
	test06();
	system("pause");
	return 0; 
}