#include <iostream>
using namespace std;
/*
	��ģ������������(һ�������ִ��ݷ�ʽ)��
		1��ָ����������ͣ�ֱ����ʾ�������������
		2������ģ�廯���������еĲ�����Ϊģ����д���
		3��������ģ�廯���������������ģ�廯���д���
*/
template<class T1, class T2>
class Person {
public:
	Person(T1 name, T2 age) {
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson() {
			cout << "������" << this->m_Name << "  ";
			cout << "���䣺" << this->m_Age << endl;
	}
	T1 m_Name;
	T2 m_Age;
};

//1��ָ����������ͣ�ֱ����ʾ�������������
void printPerson1(Person<string, int>&p) {
	p.showPerson();
}
void test04() {
	Person<string, int>p("�����", 999);
	printPerson1(p);
}

//2������ģ�廯���������еĲ�����Ϊģ����д���
template<class T1, class T2>
void printPerson2(Person<T1, T2>& p) {
	p.showPerson(); 
	//��ӡT1��T2������
	cout << "T1�����ƣ�" << typeid(T1).name() << endl;
	cout << "T2�����ƣ�" << typeid(T2).name() << endl;
}
void test04_1() {
	Person<string, int>p("��˽�", 99);
	printPerson2(p);
}

//3��������ģ�廯���������������ģ�廯���д���
template<class T>
void printPerson3(T& p) {
	p.showPerson();
}
void test04_2() {
	Person<string, int>p("��ɮ", 90);
	printPerson3(p);
}
int main4() {
	test04();
	test04_1();
	test04_2();
	system("pause");
	return 0;
}