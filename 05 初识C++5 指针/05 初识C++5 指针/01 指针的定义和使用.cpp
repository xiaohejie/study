#include <iostream>
using namespace std;
int main1() {
	/*
		ָ��Ķ����ʹ��
			1�����壺��������* ָ�����;
				int a = 10;
				int* p;
				p = &a;	//ָ���¼������ֵ��ָ����ǵ�ַ
			
			2��ʹ��ָ�룺������ͨ�������õķ�ʽ���ҵ�ָ��ָ����ڴ棺*p��
				ָ��ǰ�� * ��������ã��ҵ�ָ��ָ����ڴ��е�����
				*p = 100;
		ָ����ռ�ڴ�ռ䣺��32λ����ϵͳ�£�ռ��4���ֽڣ�64λ����ϵͳ�£�ռ��8���ֽ�
	*/

	int a = 10;
	int* p;
	p = &a;
	cout << &a << endl;
	cout << p << endl;

	//ָ����ռ�ڴ�ռ�
	cout << "sizeof(int *) = " << sizeof(p) << endl;
	cout << "sizeof(float *) = " << sizeof(float* ) << endl;
	cout << "sizeof(char *) = " << sizeof(char*) << endl;
	cout << "sizeof(string *) = " << sizeof(string*) << endl;

	*p = 10001;
	cout << *p << endl;
	cout << a << endl;
	system("pause");
	return 0;
}