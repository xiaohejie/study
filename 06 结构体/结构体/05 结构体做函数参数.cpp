#include <iostream>
using namespace std; 
struct student
{
	string name;
	int age;
	int score;
};
//��ӡѧ����Ϣ�ĺ���
//1��ֵ����
void printStudent(student s) {
	s.name = "hejie";
	cout << "�Ӻ����� ������" << s.name << endl;
}
//2����ַ����
void printStudent1(student* p) {
	p->name = "С����";
	cout << "��ַ���� ������" << p->name << endl;
}
int main5() {
	/*
		�ṹ�����������죺
			���ã����ṹ����Ϊ���������д���
			��ʽ��ֵ���ݡ���ַ����
	*/
	student stu = { "�ν�" ,23 , 100 };
	printStudent(stu);
	printStudent1(&stu);

	cout << "������ ������" << stu.name << endl;
	system("pause");
	return 0;
}