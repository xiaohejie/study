#include <iostream>
using namespace std;
//1����Ҫ���ؾֲ�����������
int& test01() {
	int a = 10;//�ֲ���������������е�ջ��
	return a;
}

//2�������ĵ��ÿ�����Ϊ��ֵ
int& test02() {
	static int a = 11;//��̬�����������ȫ������ȫ�����ϵ������ڳ����������ϵͳ�ͷ�
	return a;
}
int main4() {
	/*
		��������������ֵ��
			1����Ҫ���ؾֲ�����������
			2�������ĵ��ÿ�����Ϊ��ֵ
	*/
	int& ref = test01();
	cout << "ref = " << ref << endl;//��һ���ǶԵģ�����Ϊ���������˱���
	cout << "ref = " << ref << endl;
	cout << "*************" << endl;
	int& ref1 = test02();
	cout << "ref1 = " << ref1 << endl;
	cout << "ref1 = " << ref1 << endl;
	cout << "*************" << endl;
	test02() = 1000;//��������ķ���ֵ�����ã�����������ÿ�����Ϊ��ֵ
	cout << "ref = " << ref1 << endl;
	cout << "ref = " << ref1 << endl;
	system("pause");
	return 0;
}