#include<iostream>
#include <vector>
using namespace std;
/*
	`find_if(iterator beg, iterator end, _Pred);  `
		// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
		// beg ��ʼ������
		// end ����������
		// _Pred ��������ν�ʣ�����bool���͵ķº�����
*/
//1������������������
class GreaterFive {
public:
	bool operator()(int val) {
		return val > 5;
	}
};
void test04() {
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	if (it == v.end())
	{
		cout << "δ�ҵ���" << endl;
	}
	else
	{
		cout << "�ҵ��ˣ�ֵΪ��" << *it << endl;
	}
}
//2�������Զ�����������
class Person {
public:
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};
class Greater20
{
public:
	bool operator()(Person& p)
	{
		return p.m_Age > 20;
	}

};
void test04_1() {
	vector<Person> v;

	//��������
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	vector<Person>::iterator it = find_if(v.begin(), v.end(), Greater20());
	if (it == v.end())
	{
		cout << "û���ҵ�!" << endl;
	}
	else
	{
		cout << "�ҵ�����:" << it->m_Name << " ����: " << it->m_Age << endl;
	}
}
int main4() {
	test04_1();
	system("pause");
	return 0;
}