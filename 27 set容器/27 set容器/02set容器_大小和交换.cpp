#include<iostream>
using namespace std;
#include <set>
/*
	set�����Ĵ�С�ͽ�����	
		* ͳ�ƴ�С   --- size
		* �ж��Ƿ�Ϊ��   --- empty
		* ��������   --- swap
*/
void printSet02(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//��С
void test02()
{

	set<int> s1;

	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	if (s1.empty())
	{
		cout << "s1Ϊ��" << endl;
	}
	else
	{
		cout << "s1��Ϊ��" << endl;
		cout << "s1�Ĵ�СΪ�� " << s1.size() << endl;
	}

}

//����
void test02_1()
{
	set<int> s1;

	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	set<int> s2;

	s2.insert(100);
	s2.insert(300);
	s2.insert(200);
	s2.insert(400);

	cout << "����ǰ" << endl;
	printSet02(s1);
	printSet02(s2);
	cout << endl;

	cout << "������" << endl;
	s1.swap(s2);
	printSet02(s1);
	printSet02(s2);
}

int main2() {

	//test02();

	test02_1();

	system("pause");

	return 0;
}