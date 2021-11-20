#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
	`count_if(iterator beg, iterator end, _Pred);  `
		// ������ͳ��Ԫ�س��ִ���
		// beg ��ʼ������
		// end ����������
		// _Pred ν��
*/
class Greater20 {
public:
	bool operator()(int val) {
		return val > 20;
	}
};
void test08() {
	vector<int>v;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 100; i++)
	{
		int random = rand() % 100;
		v.push_back(random);
	}
	int num = count_if(v.begin(), v.end(), Greater20());
	cout << "����20������" << num << endl;
}
//ͳ���Զ�����������
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

class AgeLess35
{
public:
	bool operator()(const Person& p)
	{
		return p.m_Age < 35;
	}
};
void test08_1()
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

	int num = count_if(v.begin(), v.end(), AgeLess35());
	cout << "С��35��ĸ�����" << num << endl;
}
int main() {
	test08_1();
	system("pause");
	return 0;
}