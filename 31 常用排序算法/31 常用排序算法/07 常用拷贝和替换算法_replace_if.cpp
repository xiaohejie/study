#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
	`replace_if(iterator beg, iterator end, _pred, newvalue);  `
		// �������滻Ԫ�أ������������滻��ָ��Ԫ��
		// beg ��ʼ������
		// end ����������
		// _pred ν��
		// newvalue �滻����Ԫ��

		replace_if���������ң��������÷º������ɸѡ���������
*/
class myPrint {
public:
	void operator()(int val) {
		cout << val << "  ";
	}
};
class Greater30 {
public:
	bool operator()(int value) {
		return value > 30;
	}
};
void test07() {
	vector<int>v;
	v.push_back(30);
	v.push_back(105);
	v.push_back(0);
	v.push_back(20);
	v.push_back(33);
	v.push_back(96);
	v.push_back(87);

	for_each(v.begin(), v.end(), myPrint());
	cout << endl;

	replace_if(v.begin(), v.end(), Greater30(), 99);
	for_each(v.begin(), v.end(), myPrint());
	cout << endl;
}
int main07() {
	test07();
	system("pause");
	return 0;
}