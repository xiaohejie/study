#include<iostream>
using namespace std;
#include <set>
/*
	set������
		* set������������ʱ��insert
		* set�����������ݵ����ݻ��Զ�����
*/
void printSet01(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//����͸�ֵ
void test01()
{
	set<int> s1;

	//ֻ����ʹ��insert���в���
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	printSet01(s1);

	//��������
	set<int>s2(s1);
	printSet01(s2);

	//��ֵ
	set<int>s3;
	s3 = s2;
	printSet01(s3);
}

int main1() {

	test01();

	system("pause");

	return 0;
}