#include <iostream>
using namespace std;
/*
	const���γ�Ա����������������
	��������
		-��Ա�������const�����ǳ�֮Ϊ������
		-�������ڲ������޸ĳ�Ա����
		-��Ա��������ʱ�ӹؼ���mutable���ڳ���������Ȼ�����޸�
	������
		-��������ǰ��const�Ƹö���Ϊ������
		-������ֻ�ܵ��ó�������
*/
//��������
class Person04 {
public:
	//�ڳ�Ա�����������const�����ε���thisָ�룬��ָ��ָ���ֵҲ�������޸�
	void showPerson() const
	{
		//thisָ��ı�����ָ�볣����ָ���ָ���ǲ����޸ĵ�
		//this->m_A = 100;
		this->m_B = 100;
	}
	void show() {
		m_B = 100;
		cout << "fcneuwibfuowiq" << endl;
	}
	int m_A;
	mutable int m_B;//�����������ʹ�ڳ������У�Ҳ�����޸����ֵ���ӹؼ���mutable

};
//������
void test04_1() {
	const Person04 p;//������
	//p.m_A = 100;
	p.m_B = 100;

	//������ֻ�ܵ��ó�����
	p.showPerson();
	//p.show();�����󲻿��Ե�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸�����

}
void test04() {
	Person04 p;
	p.showPerson();
}
int main() {
	system("pause");
	return 0;
}