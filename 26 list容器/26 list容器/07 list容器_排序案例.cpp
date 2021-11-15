#include<iostream>
using namespace std;
#include<list>
class Person {
public:
	Person(string name, int age, int height) {
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}
	string m_Name;
	int m_Age;
	int m_Height;
};

void printPerson(list<Person>&l) {
	for (list<Person>::iterator it = l.begin(); it != l.end(); it++) {
		cout << "������" << (*it).m_Name << "  ���䣺" << it->m_Age <<
			"  ��ߣ�" << it->m_Height << endl;;
	}
}
//ָ���������
bool comparePerson(Person &p1, Person &p2) {
	//�����������������߽��н���
	if (p1.m_Age == p2.m_Age)
	{
		return p1.m_Height > p2.m_Height;
	}
	else
	{
		return p1.m_Age < p2.m_Age;
	}
	
}
void test07() {
	list<Person>l;
	Person p1("����", 23, 190);
	Person p2("����", 33, 186);
	Person p3("����", 13, 199);
	Person p4("����", 23, 165);
	Person p5("����", 33, 196);
	Person p6("½��", 13, 180);

	//�����ݲ�������
	l.push_back(p1);
	l.push_back(p2);
	l.push_back(p3);
	l.push_back(p4);
	l.push_back(p5);
	l.push_back(p6);

	cout << "����ǰ��" << endl;
	printPerson(l);

	l.sort(comparePerson);
	cout << "�����" << endl;
	printPerson(l);
}
int main() {
	test07();
	system("pause");
	return 0;
}