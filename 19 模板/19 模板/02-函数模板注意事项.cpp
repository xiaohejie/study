#include <iostream>
using namespace std;
/*
	����ģ��ע�����
		-�Զ������Ƶ��������Ƶ���һ�µ���������T���ſ���ʹ��
		-ģ�����Ҫȷ��T���������ͣ��ſ���ʹ��
*/
//����ģ��
template<typename T>//typenameҲ�����滻��class��������
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

void test02() {
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

template<class T>
void func() {
	cout << "func() ����" << endl;
}
void test2_1() {
	func<int>();
}

int main2() {
	test02();
	test2_1();
	system("pause");
	return 0;
}