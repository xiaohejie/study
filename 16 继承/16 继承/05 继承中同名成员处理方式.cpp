#include <iostream>
using namespace std;
/*
	�̳���ͬ����Ա����ʽ��
		���ͨ�����������ʵ�������ͬ����Ա����Ҫ��������
*/
class Base {
public:
	Base() {
		m_A = 100;
	}
	int m_A;
	void func() {
		cout << "Base - func()����" << endl;
	}

};
class Son : public Base {
public:
	Son() {
		m_A = 200;
	}
	int m_A;
	void func() {
		cout << "Son - func()����" << endl;
	}
};
void test05() {
	Son s;
	//ͬ����Ա���Դ���
	/*cout << "Son	�µ�m_A" << s.m_A << endl;
	cout << "Base	�µ�m_A" << s.Base::m_A << endl;*/

	//ͬ����Ա��������
	s.func();
	s.Base::func();
}
int main5() {
	test05();
	system("pause");
	return 0;
}