#include <iostream>
using namespace std;
/*
	��̳��뷨��
		C++������̳ж����
		�﷨��class ���� : �̳з�ʽ ����1 , �̳з�ʽ ����2...
		ע�⣺��̳��п���������������ͬ����Ա�ĳ��֣���Ҫ���������������
*/
class Base {
public:
	Base() {
		m_A = 100;
	}
	int m_A;
};
class Base1 {
public:
	Base1() {
		m_A = 200;
	}
	int m_A;

};
//������Ҫ�̳�Base��Base1
class Son : public Base, public Base1 {
public:
	Son() {
		m_C = 300;
		m_D = 400;
	}
	int m_C;
	int m_D;

};
void test07() {
	Son s;
	cout << "sizeof(s)��" << sizeof(s) << endl;
	cout << s.Base::m_A << endl;
	cout << s.Base1::m_A << endl;
}
int main7() {
	test07();
	system("pause");
	return 0;
}