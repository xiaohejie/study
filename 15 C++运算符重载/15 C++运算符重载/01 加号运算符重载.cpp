#include <iostream>
using namespace std;
/*
	�ܽ᣺�������õ��������͵ı��ʽ�������ǲ��ܹ��ı��
		  ��Ҫ�������������
	�Ӻ���������أ�
		��Ա��������+��
		ȫ�ֺ�������+��
*/
class Person {
public:
	//ͨ����Ա�������� + ��
	/*Person operator+(Person& p) {
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}*/
public:
	int m_A;
	int m_B;
};
//ȫ�ֺ������� + ��
Person operator+(Person& p1, Person& p2) {
	Person temp;
	temp.m_A = p1.m_A + p2.m_B;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}

void test01() {
	Person p1;
	p1.m_A = 10;
	p1.m_B = 10;
	Person p2;
	p2.m_A = 2;
	p2.m_B = 2;

	Person p3 = p1 + p2;
	cout << "p3.m_A��ֵΪ��" << p3.m_A << endl;
	cout << "p3.m_B��ֵΪ��" << p3.m_B << endl;
}
int main1() {
	test01();
	system("pause");
	return 0;
}