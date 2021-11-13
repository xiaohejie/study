#include <iostream>
using namespace std;
#include <deque>
/*
	edque��ֵ������
		* `deque& operator=(const deque &deq); `         //���صȺŲ�����
		* `assign(beg, end);`                 //��[beg, end)�����е����ݿ�����ֵ������
		* `assign(n, elem);`                  //��n��elem������ֵ������
*/
void printDeque02(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";

	}
	cout << endl;
}
//��ֵ����
void test02()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque02(d1);

	deque<int>d2;
	d2 = d1;
	printDeque02(d2);

	deque<int>d3;
	d3.assign(d1.begin() + 1, d1.end() - 2);
	printDeque02(d3);

	deque<int>d4;
	d4.assign(10, 100);
	printDeque02(d4);

}

int main2() {

	test02();

	system("pause");

	return 0;
}