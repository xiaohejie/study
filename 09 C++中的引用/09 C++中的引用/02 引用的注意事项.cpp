#include <iostream>
using namespace std;
int main2() {
	/*
		���õ�ע�����
			1�����ñ��뱻��ʼ��
			2������һ����ʼ���󣬾Ͳ����Ը���
	*/
	int a = 10;
	int& b = a;
	int c = 20;
	b = c;//���Ǹ�ֵ�����������Ǹ�������
	system("pause");
	return 0;
}