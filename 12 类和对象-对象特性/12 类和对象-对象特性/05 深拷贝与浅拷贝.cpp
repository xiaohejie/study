#include <iostream>
using namespace std;
/*
	�����ǳ������
		ǳ�������򵥵ĸ��ƿ�������
		ǳ�������������⣺�������ڴ��ظ��ͷţ�Ҫ����������н��
		������ڶ�����������ռ䣬���п�������

	�ܽ᣺����������ڶ����п��ٵģ�һ��Ҫ�Լ��ṩ�������캯��������ǳ�������������⡣
*/
class Person5 {
public:
	Person5() {
		cout << "Person5��Ĭ�Ϲ��캯������" << endl;
	}
	Person5(int age , int height) {
		m_Age = age;
		m_height = new int(height);
		cout << "Person5���вι��캯������" << endl;
	}
	Person5(const Person5& p) {
		m_Age = p.m_Age;
		//m_height = p.m_height;������Ĭ��ʵ����һ�д���
		//�������
		m_height = new int(*p.m_height);
		cout << "Person5�Ŀ������캯������" << endl;
	}
	~Person5() {
		//�������������������ٵ��������ͷŲ���
		if (m_height != NULL) {
			delete m_height;
			m_height = NULL;
		}
		cout << "Person5��������������" << endl;
	}
	int m_Age;
	int* m_height;
};

void test05() {
	Person5 p(23 , 160);
	cout << "p������Ϊ��" << p.m_Age << "\tp�����Ϊ��" << *p.m_height << endl;

	Person5 p1(p);
	cout << "p1������Ϊ��" << p1.m_Age << "\tp1�����Ϊ��" << *p1.m_height << endl;
}
int main5() {
	test05();
	system("pause");
	return 0;
}