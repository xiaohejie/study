#include <iostream>
using namespace std;
/*
* ���������ʹ�ã�
	* ����������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
	* �������󳬳���ͨ�����ĸ����������������Լ���״̬
	* �������������Ϊ��������
*/
//1������������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
class MyAdd {
public:
	int operator()(int v1, int v2) {
		return v1 + v2;
	}
};
void test01() {
	MyAdd myAdd;
	cout << myAdd(10, 11) << endl;
}
//2���������󳬳���ͨ�����ĸ����������������Լ���״̬
class MyPrint {
public:
	MyPrint() {
		this->count = 0;
	}
	void operator()(string test) {
		cout << test << endl;
		this->count++;
	}
	int count;		//��¼�Լ���״̬���������˶��ٴΣ�
};
void test01_1() {
	MyPrint myPrint;
	myPrint("hello world");
	myPrint("hello world");
	myPrint("hello world");
	myPrint("hello world");
	cout << myPrint.count << endl;
}
//3���������������Ϊ��������
void doPrint(MyPrint &mp, string test) {
	mp(test);
}
void test01_2() {
	MyPrint myPrint;
	doPrint(myPrint, "hello");
}
int main1() {
	test01_2();
	system("pause");
	return 0;
}