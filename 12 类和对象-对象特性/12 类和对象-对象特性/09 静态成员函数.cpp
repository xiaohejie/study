#include <iostream>
using namespace std;
/*
	��̬��Ա������
		���ж�����ͬһ������
		��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

		��̬��Ա����Ҳ���з���Ȩ�޵ģ���������ʲ���˽�о�̬��Ա����
*/
class Person9 {
public:
	//��̬��Ա����
	static void func() {
		m_A = 100;//��̬�ĳ�Ա�������Է��ʾ�̬�ĳ�Ա����
		//m_B = 10;//��̬��Ա���������Է��ʷǾ�̬��Ա����,��Ϊm_BҪͨ��������е���
		//�������޷����ֵ������ĸ������m_B����
		cout << "static void func����" << endl;
	}
	static int m_A;//��̬��Ա����
	int m_B;//�Ǿ�̬��Ա����

};
 int Person9::m_A = 10;
void test09() {
	//1��ͨ���������
	Person9 p;
	p.func();

	//2��ͨ����������
	//Person9::func();
}
int main() {
	test09();
	system("pause");
	return 0;
}