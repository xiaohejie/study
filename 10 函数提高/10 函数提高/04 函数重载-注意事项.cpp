#include <iostream>
using namespace std;
/*
	�������ص�ע�����
		1��������Ϊ���ص�������
		2��������������Ĭ�ϲ���
*/
void fun(int& a) {//int& a = 10;���Ϸ�����Ϊ���õı����Ƕ�����ջ���е����ݣ���10�ڳ�������
	cout << "fun(int& a)����" << endl;
}
void fun(const int& a) {
	cout << "fun(const int& a)����" << endl;
}

void fun2(int a) {
	cout << "fun2(int a)�ĵ���" << endl;
}
void fun2(int a , int b = 10) {
	cout << "fun2(int a, int b = 10)�ĵ���" << endl;
}
int main() {
	//int a = 10;
	//fun(a);
	//fun(10);

	//fun2(10); //��������������Ĭ�ϲ������ͻ���ֶ����ԣ��ͻᱨ������Ӧ�þ�������
	system("pause");
	return 0;
}