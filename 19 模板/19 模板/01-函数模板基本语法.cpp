#include <iostream>
using namespace std;
/*
	����ģ�壺
		
*/
//�������ͽ�������
void swapInt(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
//��������������
void swapDouble(double& a, double& b) {
	double temp = a;
	a = b;
	b = temp;
}

//����ģ��
template<typename T>
void mySwap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

void test01() {
	int a = 10;
	int b = 20;
	//swapInt(a, b);
	//���ú���ģ����н���
	//���ַ�ʽ

	//1���Զ������Ƶ�
	mySwap(a, b);
	//2����ʾָ������
	mySwap<int>(a, b);


	cout << a << endl;
	cout << b << endl;
}
int main1() {
	test01();
	system("pause");
	return 0;
}