#include <iostream>
using namespace std;
/*
	�̳��еĶ���ģ�ͣ�
		���ÿ�����Ա������ʾ���߲鿴����ģ�ͣ�
			��ת�̷�		F��
			��ת�ļ�·��	cd ����·����
			�鿴����		cl /d1 reportSingleClassLayout���� �ļ���
*/
class Base {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son : public Base {
public:
	int m_D;

};
void test03() {
	//16
	//���������еķǾ�̬��Ա���Զ��ᱻ����̳���ȥ
	//������˽�г�Ա�����Ǳ��������������ˣ�����Ƿ��ʲ����ģ�����ȷʵ���̳���ȥ��
	cout << sizeof(Son) << endl;
}
int main3() {
	test03();
	system("pause");
	return 0;
}