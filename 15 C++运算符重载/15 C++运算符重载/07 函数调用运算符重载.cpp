#include <iostream>
using namespace std;
#include <string>
/*
		����������������أ�
			�������������()Ҳ��������
			�������غ�ʹ�õķ�ʽ�ǳ������ĵ��ã���˳�Ϊ�º���
			�º���û�й̶�д�����ǳ����
*/
class MyPrint {
public:
	//���غ������������
	void operator()(string test) {
		cout << test << endl;
	}

};
void MyPrint02(string test) {
	cout << test << endl;
}

void test07() {
	MyPrint myPrint;
	myPrint("hello world");//����ʹ�������ǳ������ں������ã���˳�Ϊ�º���

	MyPrint02("hello world");
}
class MyAdd {
public:
	//���غ������������
	int operator()(int num1, int num2) {
		return num1 + num2;
	}
};
void test07_1() {
	/*MyAdd myAdd;
	int add = myAdd.operator()(1 , 2);
	cout << add << endl;*/

	//������������
	cout << MyAdd()(100 , 1000) << endl;
}
int main() {
	//test07();
	test07_1();
	system("pause");
	return 0;
}