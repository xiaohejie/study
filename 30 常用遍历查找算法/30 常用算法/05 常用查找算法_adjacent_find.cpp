#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
	adjacent_find:
		`adjacent_find(iterator beg, iterator end);  `
		// ���������ظ�Ԫ��,��������Ԫ�صĵ�һ��λ�õĵ�����
		// beg ��ʼ������
		// end ����������
*/
void test05() {
	vector<int>v;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		int random = rand() % 5;
		v.push_back(random);
	}
	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());
	if (pos == v.end())
	{
		cout << "δ�ҵ������ظ�Ԫ�أ�" << endl;
	}
	else
	{
		cout << "�ҵ������ظ�Ԫ�أ�����Ϊ��" << (*pos) << endl;
	}

}
int main05() {
	test05();
	system("pause");
	return 0;
}