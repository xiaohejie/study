#include <iostream>
using namespace std;
/*
	��ģ���﷨��
		 
*/
//��ģ��
template<class NameType, class AgeType>
class Person {
public:
	Person(NameType name, AgeType age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	NameType m_Name;
	AgeType m_Age;

	void showInfo() {
		cout << "������" << this->m_Name << "  ";
		cout << "���䣺" << this->m_Age << endl;
	}

};
void test01() {
	Person<string, int>p1("�����", 23);
	p1.showInfo();
}
int main1() {
	test01();
	system("pause");
	return 0;
}