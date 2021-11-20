#include <iostream>
using namespace std;
#include<vector>
#include <algorithm>
/*
	���operator()����������������ô������Ԫν��
*/
void printTest(vector<int>&v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << "  ";
	}
	cout << endl;
}
class MyCompare {
public:
	bool operator()(int val1, int val2) {
		return val1 > val2;
	}
};
void test03() {
	vector<int>v;
	v.push_back(20);
	v.push_back(10);
	v.push_back(40);
	v.push_back(50);
	v.push_back(30);

	sort(v.begin(), v.end()); 
	printTest(v);

	//ʹ�ú�������ı��㷨����
	sort(v.begin(), v.end(), MyCompare());
	printTest(v);
}
int main03() {
	test03();
	system("pause");
	return 0;
}