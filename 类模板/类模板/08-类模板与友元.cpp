#include <iostream>
using namespace std;
/*
	��ģ������Ԫ��
		ȫ�ֺ�������ʵ�֣�ֱ��������������Ԫ����
		ȫ�ֺ�������ʵ�֣���Ҫ��ǰ�ñ�����ָ��ȫ�ֺ����Ĵ���
*/
template<class T1, class T2>
class Person;
//����ʵ��
template<class T1, class T2>
void printPerson2(Person<T1, T2> p) {
	cout << "������" << p.m_Name << "   ";
	cout << "���䣺" << p.m_Age << endl;
}
template<class T1, class T2>

class Person {
	//ȫ�ֺ���������ʵ��
	friend void printPerson(Person<T1, T2> p) {
		cout << "���⣺������" << p->m_Name << "   ";
		cout << "���䣺" << p->m_Age << endl;
	}
	//ȫ�ֺ�������ʵ��
	//�ӿ�ģ��Ĳ����б�
	//�����ȫ�ֺ���������ʵ�֣���Ҫ�ñ�������ǰ֪����������Ĵ���
	friend void printPerson2<>(Person<T1, T2> p);

public:
	Person(T1 name, T2 age) {
		this->m_Name = name;
		this->m_Age = age;
	}
private:
	T1 m_Name;
	T2 m_Age;
};
//ͨ��ȫ�ֺ�����ӡperson����Ϣ
void test08() {
	Person<string, int>p("����", 23);
	//printPerson(p);
	printPerson2(p);
}
int main() {
	test08();
	system("pause");
	return 0;
}