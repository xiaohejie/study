#include <iostream>
#include <fstream>
using namespace std;
/*
	д�ļ���
*/
void test01() {
	//1������ͷ�ļ���fstream��

	//2������������
	ofstream ofs;

	//3��ָ���򿪷�ʽ
	ofs.open("test.txt", ios::out);

	//д����
	ofs << "�������ν�" << endl;
	ofs << "�Ա���" << endl;
	ofs << "���ã�Ů" << endl;

	//�ر��ļ�
	ofs.close(); 
}
int main1() {
	test01();
	system("pause");
	return 0;
}