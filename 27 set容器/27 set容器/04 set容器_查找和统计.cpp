#include<iostream>
using namespace std;
#include <set>
/**
	set����-���Һ�ͳ�ƣ�
		* ����   ---  find    �����ص��ǵ�������
		* ͳ��   ---  count  ������set�����Ϊ0����1��
*/
//���Һ�ͳ��
void test04()
{
	set<int> s1;
	//����
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	//���ң����ص��ǵ�������
	set<int>::iterator pos = s1.find(50);

	if (pos != s1.end())
	{
		cout << "�ҵ���Ԫ�� �� " << *pos << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}

	//ͳ��
	int num = s1.count(30);
	cout << "num = " << num << endl;
}

int main04() {

	test04();

	system("pause");

	return 0;
}