#include <iostream>
using namespace std;
/*
	��C++�У���ĳ�Ա�����ͳ�Ա�����ֿ��洢��
	ֻ�зǾ�̬��Ա������������Ķ�����
*/
class Person01 {
public:
	int m_A;//�Ǿ�̬��Ա������������Ķ�����

	static int m_B;//��̬��Ա���������������������ʼ������//��������Ķ�����

	void func() {}//�Ǿ�̬��Ա��������������Ķ�����

	static void func2() {}//��̬��Ա����
private:

};
 int Person01::m_B = 0;
void test01() {
	Person01 p;
	//�ն���ռ�õ��ڴ�ռ�Ϊ��1
	//��C++���������ÿ���ն���Ҳ����һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ�ã�
	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
	cout << "size of p = " << sizeof(p) << endl;
}
void test01_1() {
	Person01 p;
	//ռ��4���ֽڿռ�
	cout << "size of p = " << sizeof(p) << endl;
}
int main1() {
	test01_1();
	system("pause");
	return 0;
}