#include <iostream>
using namespace std;
#include <map>

/*
	���Һ�ͳ��
		- ����   ---  find    �����ص��ǵ�������
		- ͳ��   ---  count  ������map�����Ϊ0����1��
*/
void test04()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));

	//����
	map<int, int>::iterator pos = m.find(3);

	if (pos != m.end())
	{
		cout << "�ҵ���Ԫ�� key = " << (*pos).first << " value = " << (*pos).second << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}

	//ͳ��
	int num = m.count(10);
	cout << "num = " << num << endl;
}

int main04() {

	test04();

	system("pause");

	return 0;
}