#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
	- `count(iterator beg, iterator end, value);  `
	  // ͳ��Ԫ�س��ִ���
	  // beg ��ʼ������
	  // end ����������
	  // value ͳ�Ƶ�Ԫ��
*/
//1��ͳ��������������
void test07() {
	vector<int>v;
	srand((unsigned)time(NULL));
	for (int i = 0; i<100000; i++)
	{
		int random = rand() % 100;
		v.push_back(random);
	}
	int num = count(v.begin(), v.end(), 40);
	cout << num << endl;
}
//2��ͳ���Զ�����������
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	int operator==(const Person& p)
	{
		if (this->m_Age == p.m_Age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	string m_Name;
	int m_Age;
};

void test07_1()
{
	vector<Person> v;

	Person p1("����", 35);
	Person p2("����", 35);
	Person p3("�ŷ�", 35);
	Person p4("����", 30);
	Person p5("�ܲ�", 25);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	Person p("�����", 35);

	int num = count(v.begin(), v.end(), p);
	cout << "num = " << num << endl;
}
int main07() {
	test07_1();
	system("pause");
	return 0;
}