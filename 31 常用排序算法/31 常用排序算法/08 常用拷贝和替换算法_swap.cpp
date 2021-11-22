#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
	`swap(container c1, container c2);  `
		// 互换两个容器的元素
		// c1容器1
		// c2容器2
*/
class myPrint {
public:
	void operator()(int value) {
		cout << value << "  ";
	}

};
void test08() {
	vector<int>v;
	vector<int>v1;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		int random1 = rand() % 999;
		v.push_back(random1);

		int random = rand() % 999;
		v1.push_back(random);
	}
	cout << "交换前：" << endl;
	for_each(v.begin(), v.end(), myPrint());
	cout << endl;
	for_each(v1.begin(), v1.end(), myPrint());
	cout << endl;

	swap(v1, v);
	cout << "交换后：" << endl;
	for_each(v.begin(), v.end(), myPrint());
	cout << endl;
	for_each(v1.begin(), v1.end(), myPrint());
	cout << endl;
}
int main08() {
	test08();
	system("pause");
	return 0;
}