#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
	关系仿函数：
		* `template<class T> bool equal_to<T>`                    //等于
		* `template<class T> bool not_equal_to<T>`            //不等于
		* `template<class T> bool greater<T>`                      //大于
		* `template<class T> bool greater_equal<T>`          //大于等于
		* `template<class T> bool less<T>`                           //小于
		* `template<class T> bool less_equal<T>`               //小于等于
*/
class MyCompare {
public:
	bool operator()(int v1, int v2) {
		return v1 > v2;
	}
};

void test05() {
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << "  ";
	}
	cout << endl;

	//降序
	//sort(v.begin(), v.end(), MyCompare());
	//也可以使用内建函数对象:greater<>()
	sort(v.begin(), v.end(), greater<>());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << "  ";
	}
	cout << endl;
}
int main05() {
	test05();
	system("pause");
	return 0;
}