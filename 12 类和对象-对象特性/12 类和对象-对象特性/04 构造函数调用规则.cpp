#include <iostream>
using namespace std;
/*
	���캯�����ù���
	Ĭ������£�C++���������ٸ�һ�������3�����캯��
		1��Ĭ�Ϲ��캯�����޲Σ�������Ϊ�գ�
		2��Ĭ�������������޲Σ�������Ϊ�գ�
		3��Ĭ�Ͽ��������������Խ���ֵ����
	���캯�����ù������£�
		����û������вι��캯����C++�����ṩĬ���޲ι��죬���ǻ��ṩĬ�Ͽ�������
		����û����忽�����캯����C++�������ṩ�������캯��
*/
class Animal {
public:
	Animal() {
		cout << "Animal��Ĭ�Ϲ��캯������" << endl;
	}
	Animal(int age) {
		cout << "Animal��Ĭ�Ϲ��캯������" << endl;
		m_Age = age;

	}
	Animal(const Animal& p) {
		cout << "Animal�Ŀ������캯������" << endl;
		m_Age = p.m_Age;
	}
	~Animal() {
		cout << "Animal�����������ĵ���" << endl;
	}

	int m_Age;
};
void test04() {
	Animal p;
	p.m_Age = 12;

	Animal p1(p);
	cout << "P2������Ϊ��" << p1.m_Age << endl;
}
int main4() {
	test04();
	system("pause");
	return 0;
}