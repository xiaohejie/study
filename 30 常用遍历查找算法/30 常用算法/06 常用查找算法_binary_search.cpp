#include<iostream>
#include <vector>
#include<algorithm> 
using namespace std;
/*
	`bool binary_search(iterator beg, iterator end, value);  `
		// ����ָ����Ԫ�أ��鵽 ����true  ����false
		// ע��: ��**���������в�����**
		// beg ��ʼ������
		// end ����������
		// value ���ҵ�Ԫ��
*/
void test06() {
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//ע�⣺�����������������������У����δ֪
	bool res = binary_search(v.begin(), v.end(), 9);
}
int main06() {
	test06();
	system("pause");
	return 0;
}