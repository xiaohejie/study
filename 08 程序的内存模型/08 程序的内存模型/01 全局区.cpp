#include <iostream>
using namespace std;
//ȫ�ֱ���
int g_a = 10;
int main1() {
	/*
		ȫ�ֱ�����
			�������ȫ�ֱ�������̬������ȫ�ֳ���(�ֲ���������Ҳ����const���εľֲ�����)

		�ܽ᣺C++�г�������ǰ��Ϊȫ�����ʹ�����
			  �������ص��ǹ����ֻ��
			  ȫ�����д��ȫ�ֱ�������̬����������
			  �������д�Ŵ�const���ε�ȫ�ֳ����Լ��ַ�������
	*/

	//�����ֲ�����
	int a = 10;
	int b = 10;
	cout << (int)&a << endl;
	cout << (int)&b << endl;
	cout << (int)&g_a << endl;

	//��̬����
	static int s_a = 10;
	cout << (int)&s_a << endl;

	//�������ַ���������const���εı���
	//�ֲ�����
	const int c_l_a = 10;
	cout << (int)&c_l_a << endl;
	system("pause");
	return 0;
}