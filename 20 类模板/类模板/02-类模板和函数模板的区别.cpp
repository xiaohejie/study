#include <iostream>
using namespace std;
/*
	��ģ���뺯��ģ�������
		-��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
		-��ģ����ģ������б��п�����Ĭ�ϲ���
*/
//��ģ��
template<class NameType, class AgeType = int>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->mName = name;
		this->mAge = age;
	}
	void showPerson()
	{
		cout << "name: " << this->mName << " age: " << this->mAge << endl;
	}
public:
	NameType mName;
	AgeType mAge;
};

//1����ģ��û���Զ������Ƶ���ʹ�÷�ʽ
void test02_1()
{
	// Person p("�����", 1000); // ���� ��ģ��ʹ��ʱ�򣬲��������Զ������Ƶ�
	Person <string, int>p("�����", 1000); //����ʹ����ʾָ�����͵ķ�ʽ��ʹ����ģ��
	p.showPerson();
}

//2����ģ����ģ������б��п�����Ĭ�ϲ���
void test02()
{
	Person <string> p("��˽�", 999); //��ģ���е�ģ������б� ����ָ��Ĭ�ϲ���
	p.showPerson();
}

int main2() {

	test02_1();

	test02();

	system("pause");

	return 0;
}