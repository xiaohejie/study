#include <iostream>
using namespace std;
/*
	����Ȩ�ޣ�
		����Ȩ�� public����Ա���������ڱ�����Ҳ������������з���
		����Ȩ�� protected����Ա���������ڱ����ʲ�������������з���	�̳��У�������Է��ʸ����еı���Ȩ��
		˽��Ȩ�� private����Ա���������ڱ����ʲ�������������з���		�̳��У����಻���Է��ʸ����еı���Ȩ��
*/
class Person {
public:
	//����Ȩ��
	string m_Name;

protected:
	//����Ȩ��
	string m_Car;

private:
	//˽��Ȩ��
	int m_Password;

public:
	void func() {
		m_Name = "����";
		m_Car = "����";
		m_Password = 163543;
		cout << m_Name << m_Car << endl;
	}
	void setName(string name) {
		m_Name = name;
	}

};
int main2() {
	//ʵ�����������
	Person p1;
	p1.m_Name = "����";
	cout << p1.m_Name << endl;
	p1.func();
	p1.setName("�ν�");
	cout << p1.m_Name << endl;
	//cout << p1.m_Name << p1.m_Car << endl;
	//����Ȩ�޺�˽��Ȩ�޵����������ⲻ���Է���

	system("pause");
	return 0;
}