#include <iostream>
using namespace std;
#include <vector>
/*
	vector容器构造：
		
*/
void vectorPrint1(vector<int>&v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << "  ";
	}
	cout << endl;
}
void test01() {
	vector<int>v1;		//默认构造
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i + 1);
	}
	vectorPrint1(v1);

	//通过区间的方式进行构造
	vector<int>v2(v1.begin(), v1.end());
	vectorPrint1(v2);

	//n个elem的方式进行构造
	vector<int>v3(10, 100);
	vectorPrint1(v3);

	//拷贝构造
	vector<int>v4(v3);
	vectorPrint1(v4);
}
int main1() {
	test01();
	system("pause");
	return 0;
}