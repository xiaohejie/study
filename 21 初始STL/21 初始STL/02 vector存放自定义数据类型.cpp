#include <iostream>
using namespace std;
#include <vector>
/*
	vector�����д���Զ�����������

*/
class Person {
public:
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};
void test02() {
	vector<Person>v;
	Person p1("����", 12);
	Person p2("����", 22);
	Person p3("����", 32);
	Person p4("����", 42);

	//���������������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	//����Ԫ���е�����
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
		cout << "������" << (*it).m_Name << "  ";
		cout << "���䣺" << it->m_Age	<< endl;
	}
}

//����Զ������͵�ָ��
void test02_1() {
	vector<Person*>v;
	Person p1("����", 12);
	Person p2("����", 22);
	Person p3("����", 32);
	Person p4("����", 42);

	//���������������
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);

	//��������
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������" << (*it)->m_Name << "  ";
		cout << "���䣺" << (*it)->m_Age << endl;
	}
}
int main2() {
	test02_1();
	system("pause");
	return 0;
}