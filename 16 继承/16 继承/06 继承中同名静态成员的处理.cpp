#include <iostream>
using namespace std;
/*
	ͬ����̬��Ա�Ĵ���
		��̬��Ա�ͷǾ�̬��Ա����ͬ��������ʽһ��

*/
class Base06 {
public:
	static int m_A;
	static void func() {
		cout << "Base - func()����" << endl;
	}

};
int Base06::m_A = 100;

class Son06 : public Base06 {
public:
	static int m_A;
	static void func() {
		cout << "Son - func()����" << endl;
	}
};
int Son06::m_A = 200;

void test06() {
	Son06 s;
	/*
		ͬ����̬��Ա����
	*/
	//1��ͨ�������������
	cout << "ͨ�������������" << endl;
	cout << "Son �µľ�̬��Ա��" << s.m_A << endl;
	cout << "Base�µľ�̬��Ա��" << s.Base06::m_A << endl;
	//2��ͨ����������
	cout << "ͨ����������" << endl;
	cout << "Son �µľ�̬��Ա��" << Son06::m_A << endl;
		//��һ��::����ͨ��������ʽ���� �ڶ���::������ʸ����������µ�
	cout << "Base�µľ�̬��Ա��" << Son06::Base06::m_A<< endl;

	/*
		ͬ����̬����
	*/
	/*s.func();
	s.Base06::func();*/
	Son06::func();
	Son06::Base06::func();
}
int main() {
	test06();
	system("pause");
	return 0;
}