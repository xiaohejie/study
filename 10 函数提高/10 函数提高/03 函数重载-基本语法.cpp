#include <iostream>
using namespace std;
/*
	�������أ�
		���ã�������������ͬ����߸�����
		������������������
			1��ͬһ����������
			2������������ͬ
			3�������������Ͳ�ͬ ���� ������ͬ ���� ˳��ͬ
		ע�⣺�����ķ���ֵ��������Ϊ�������ص�����
*/
void func() {
	cout << "func �ĵ���" << endl;
}
void func(int a) {
	cout << "func(int a) �ĵ���!" << endl;
}
int main3() {
	func(1);
	system("pause");
	return 0;
}