#include <iostream>
using namespace std;
#include <deque>
#include <algorithm>
/*
	���������
		`sort(iterator beg, iterator end)`  //��beg��end������Ԫ�ؽ�������
*/
void printDeque06(const deque<int>& d) {
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << "  ";
	}
	cout << endl;
}
void test06() {
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	printDeque06(d);

	//����Ĭ��������
	//����֧��������ʵĵ�����������������������sort�㷨ֱ�Ӷ����������
	//vector����Ҳ��������sort��������
	sort(d.begin(), d.end()); 
	cout << "�����" <<endl;
	printDeque06(d);
}
int main() {
	test06();
	system("pause");
	return 0;
}