#include <iostream>
using namespace std;
/*
	��̬��Ա������
		���ж�����ͬһ������
		�ڱ���׶η����ڴ�
		���������������ʼ��

	��̬��Ա����Ҳ���з���Ȩ�޵ģ�������ʲ���˽�еľ�̬��Ա����
*/
class Person8 {
public:
	static int m_A;

};
int Person8::m_A = 100;
void test08(){
	Person8 p;
	cout << p.m_A << endl;
	Person8 p1;
	p1.m_A = 200;
	cout << p.m_A << endl;
}
void test081() {
	//��̬����Ա������ĳ�������ϣ����ж��󶼹���ͬһ������
	//��˾�̬��Ա���������ַ��ʷ�ʽ��
		//1��ͨ��������з���
	/*Person8 p;
	cout << p.m_A << endl;*/
		//2��ͨ���������з���
	Person8::m_A = 20;
	cout << Person8::m_A << endl;
}
int main8() {
	//test08();
	test081();
	system("pause");
	return 0;
}