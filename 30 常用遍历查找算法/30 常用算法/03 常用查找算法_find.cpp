#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
/*
	find
*/
//����������������
void test03() {
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it == v.end())
	{
		cout << "�����ڣ�" << endl;
	}
	else
	{
		cout << "�ҵ��ˣ�"<< *it << endl;
	}
}
//�����Զ�����������
class Person {
public:
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	//����==��
	bool operator==(const Person& p) {
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
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
void test03_1() {
	vector<Person>p;
	Person p1("����", 23);
	Person p2("����", 33);
	Person p3("����", 13);
	Person p4("����", 43);
	Person p5("С��", 3); 

	p.push_back(p1);
	p.push_back(p2);
	p.push_back(p3);
	p.push_back(p4);
	p.push_back(p5);

	Person pp("С��", 3);

	vector<Person>::iterator it = find(p.begin(), p.end(), pp);
	if (it == p.end())
	{
		cout << "�����ڣ�" << endl;
	}
	else
	{
		cout << "����" << endl;
	}
}
int main03() {
	test03_1();
	system("pause");
	return 0;
}