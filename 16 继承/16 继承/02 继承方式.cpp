#include <iostream>
using namespace std;
/*
	�̳з�ʽ��
		1�������̳�
		2�������̳�
		3��˽�м̳�
*/
class Base1 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son1 : public Base1 {
public:
	void func() {
		m_A = 10;//�����еĹ���Ȩ�޳�Ա ����������Ȼ�ǹ���Ȩ��
		m_B = 10;//�����еı���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ��
		//m_C = 10;//�����е�˽��Ȩ�޳�Ա �������з��ʲ���
	}

};
void test02() {
	Son1 s;
	s.m_A = 10;
	//s.m_B = 10;//����Ȩ�����ⲻ�ܷ���
}
class Son2 : protected Base1 {
	//friend void test02_1();
public:
	void func() {
		m_A = 10;//�����еĹ���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ��
		m_B = 10;//�����еı���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ��
		//m_C = 10;//�����е�˽��Ȩ�޳�Ա �������з��ʲ���
	}

};
void test02_1() {
	Son2 s;
	//s.m_A = 100;//m_A��Ϊ�˱���Ȩ�ޣ�������ⲻ���Է���
}
int main2() {
	system("pause");
	return 0;
}