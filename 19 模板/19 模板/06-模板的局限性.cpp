#include <iostream>
using namespace std;
/*
	ģ��ľ����ԣ�
		ģ�岻�����ܵģ���Щ�ض����������ͣ���Ҫ���廯������ʵ��
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
//�Ա����������Ƿ����
template<class T>
bool myCompare(T& a, T& b) {
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//���þ��廯Person�İ汾ʵ�ִ��룬���廯���ȵ���
template<> bool myCompare(Person& a, Person& b) {
	if (a.m_Age == b.m_Age && a.m_Name == b.m_Name)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void test06() {
	Person p1("����", 23);
	Person p2("����", 23);

	bool ret = myCompare(p1, p2);
	if (ret)
	{
		cout << "p1 == p2" << endl;
	}
	else
	{
		cout << "p1 != p2" << endl;
	}
}
int main() {
	test06 ();
	system("pause");
	return 0;
}