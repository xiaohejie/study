#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
	`replace(iterator beg, iterator end, oldvalue, newvalue);  `
		// �������ھ�Ԫ�� �滻�� ��Ԫ��
		// beg ��ʼ������
		// end ����������
		// oldvalue ��Ԫ��
		// newvalue ��Ԫ��

		replace���滻����������������Ԫ��
*/
class myPrint {
public:
	void operator()(int val) {
		cout << val << "  ";
	}
};
void test06() {
	vector<int>v;
	srand((unsigned)time(NULL));
	v.push_back(20);
	v.push_back(10);
	v.push_back(0);
	v.push_back(30);
	v.push_back(160);

	for_each(v.begin(), v.end(), myPrint());
	cout << endl;
	replace(v.begin(), v.end(), 20, 99);

	for_each(v.begin(), v.end(), myPrint());
	cout << endl;
}
int main06() {
	test06();
	system("pause");
	return 0;
}