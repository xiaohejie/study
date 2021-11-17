#include<iostream>
using namespace std;
#include <set>
/*
	set容器排序：
		set容器默认排序规则为从小到大，掌握如何改变排序规则
		利用仿函数，可以改变排序规则
*/
class MyCompare
{
public:
	//(int v1,int v2)后面加const
	bool operator()(int v1,int v2)const {
		return v1 > v2;
	}
};
void test07()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);
	s1.insert(50);

	//默认从小到大
	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	//指定排序规则
	set<int, MyCompare> s2;
	s2.insert(10);
	s2.insert(40);
	s2.insert(20);
	s2.insert(30);
	s2.insert(50);

	for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int main() {

	test07();

	system("pause");

	return 0;
}