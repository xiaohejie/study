#include <iostream>
using namespace std;
/*
	����ʱ����
		1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
		2��ֵ���ݵķ�ʽ������������ֵ
		3����ֵ��ʽ���ؾֲ�����
*/
class Person3 {
public:
	Person3() {
		cout << "PersonĬ�Ϲ��캯������" << endl;
	}
	Person3(int a) {
		m_Age = a;
		cout << "Person���вι��캯������" << endl;
	}
	Person3(const Person3& p) {
		m_Age = p.m_Age;
		cout << "Person�Ŀ������캯������" << endl;
	}
	~Person3() {
		cout << "Person������������" << endl;
	}
	int m_Age;
};
//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test01() {
	Person3 p1(20);
	Person3 p2(p1);

	cout << "P2������Ϊ��" << p2.m_Age << endl;
}
//2��ֵ���ݵķ�ʽ������������ֵ
void doWork(Person3 p) {

}
void test02() {
	Person3 p;
	doWork(p);
}
//3����ֵ��ʽ���ؾֲ�����
Person3 doWork2() {
	Person3 p1;
	cout << (int*)&p1 << endl;

	return p1;
}
void test03() {
	Person3 p = doWork2();
	cout << (int*)&p << endl;
}
int main3() {
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}