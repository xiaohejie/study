#include <iostream>
using namespace std;
/*
	���麯���ͳ����ࣺ
		���������˴��麯��������Ҳ�������Ϊ������

	�������ص㣺
		-�޷�ʵ��������
		-��������Ѫ�������еĴ��麯��������Ҳ���ڳ�����

	���麯���﷨��
		virtual ����ֵ���� ������ (�����б�) = 0;

*/
class Base {
public:
	//���麯��
	virtual void func() = 0;
};
class Son :public Base {
public:
	virtual void func() {
		cout << "func��������" << endl;
	}
};
void test03() {
	Base* base = new Son;
	base->func();
}
int main3() {
	system("pause");
	return 0; 
}
