#include <iostream>
using namespace std;
/*
	��ʼ���б�
		C++�и��ṩ�˳�ʼ���б��﷨��������ʼ������
		�﷨�����캯��():����1(ֵ1),����2(ֵ2)...{}
*/
class Person6 {
public:
	//��ͳ��ʼ������
	/*Person6(int a,int b,int c) {
		m_A = a;
		m_B = b;
		m_C = c;
	}*/

	//��ʼ���б��ʼ������
	Person6(int a,int b,int c) :m_A(a), m_B(b), m_C(c) {
		
	}

	int m_A;
	int m_B;
	int m_C;

};
void test06() {
	//Person6 p(10, 20, 30);
	Person6 p(10,20,30);
	cout << "m_A = " << p.m_A << "\tm_B = " << p.m_B << "\tm_C = " << p.m_C << endl;
}
int main6() {
	test06();
	system("pause");
	return 0;
}