#include <iostream>
using namespace std;

/*
	�������Ϊ���Ա��
		�������������Ϊ�����Ա������ʱ���ȹ���������ٹ�������;������˳���빹���෴
*/
class Phone {
public:
	Phone(string pName) {
		m_PName = pName;
		cout << "Phone �Ĺ��캯������" << endl;
	}
	~Phone() {
		cout << "Phone�Ĺ��캯������" << endl;
	}
	string m_PName;

};
class Person7 {
public:
	Person7(string name, string pName) :m_Name(name), m_Phone(pName) {
		cout << "Person�Ĺ��캯������" << endl;
	}
	~Person7() {
		cout << "Person�Ĺ��캯������" << endl;
	}
	string m_Name;
	Phone m_Phone;

};
void test07() {
	Person7 p("�ν�", "��Ϊ ");
	cout << "������" << p.m_Name << "\t�ֻ��ͺţ�" << p.m_Phone.m_PName << endl;
} 
int main7() {
	test07();
	system("pause");
	return 0;
}