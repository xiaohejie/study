#include<iostream>
#include <vector>
#include <numeric>
using namespace std;
/*
	`accumulate(iterator beg, iterator end, value);  `
		// ��������Ԫ���ۼ��ܺ�
		// beg ��ʼ������
		// end ����������
		// value ��ʼֵ
*/
void test01() {
	vector<int>v;
	for (int i = 0; i <= 100; i++)
	{
		v.push_back(i);
	}
	int total = accumulate(v.begin(), v.end(), 0);
	cout << total << endl;
}
int main01() {
	test01();
	system("pause");
	return 0;
}