#include <iostream>
using namespace std;
class Person06 {
public:
	Person06(string name, int age) {
		m_Name = name;
		m_Age = age;
	}
	//���ع�ϵ�����==
	bool operator==(Person06& p) {
		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
		{
			return true;
		}
		return false;
	}
	string m_Name;
	int m_Age;
};
void test06() {
	Person06 p1("�ν�", 23);
	Person06 p2("�ν�",24);

	if (p1 == p2)
	{
		cout << "���" << endl;
	}
	else
	{
		cout << "�����" << endl;
	}

}
int main06() {
	test06();
	system("pause");
	return 0;
}