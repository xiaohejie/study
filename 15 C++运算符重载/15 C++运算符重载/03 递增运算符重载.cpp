#include <iostream>
using namespace std;
/*
	������������أ�
		ͨ��������������أ�ʵ���Լ�����������

*/
class MyInteger {
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger() {
		m_Num = 0;
	}
	//����ǰ��++�����
	//������ΪʲôҪ�������ã���Ϊ��������ʹ�����õĻ�����++�󷵻ص���һ���µı���
	//ʹ�����õĻ�����һֱ��һ�����ݽ��е���
	MyInteger& operator++() {
		//�Ƚ���++����
		m_Num++;
		//�ٽ�����������
		return *this;
	}
	//���غ���++�����
	//void operator++(int)  int��ʾռλ������������������ǰ�úͺ��õ���
	MyInteger	 operator++(int) {
		//�ȼ�¼��ʱ���
		MyInteger temp = *this;
		//�����
		m_Num++;
		//��󽫼�¼���������
		return temp;

	}
private:
	int m_Num;
};
//�������������
ostream& operator<<(ostream& cout , MyInteger myint) {
	cout << myint.m_Num;
	return cout;
}
void test03() {
	MyInteger myint;
	//cout << ++myint << endl;
	cout << myint.operator++().operator++() << endl;
	cout << myint << endl;
}
void test03_1() {
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
}

int main3() {
	//test03();
	test03_1();
	system("pause");
	return 0;
}