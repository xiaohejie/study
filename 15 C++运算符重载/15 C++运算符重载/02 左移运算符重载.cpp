#include <iostream>
using namespace std;
/*
	������������أ�
		���ã���������Զ�����������
*/
class Person02 {
	friend ostream& operator<<(ostream& cout, Person02 p);
	friend void test02();
public:
	//���ó�Ա����ʵ�����������
	//һ�㲻���ó�Ա����ʵ���������������Ϊ�޷�ʵ��cout�����
	/*void operator<<(Person02& p){
		
	}*/
private:
	int m_A;
	int m_B;
};
//ֻ������ȫ�ֺ���ʵ�����������
ostream& operator<<(ostream& cout ,Person02 p) {
	cout << "m_A = " << p.m_A << " m_B = " << p.m_B;
	return cout;
}
void test02() {
	Person02 p;
	p.m_A = 10;
	p.m_B = 20;
	cout << p << endl;
}
int main2() {
	test02();
	system("pause");
	return 0;
}