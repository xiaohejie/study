#include <iostream>
using namespace std;
struct Student
{
	string name;
	int age;
	int score;
};
int main3() {
	/*
		�ṹ��ָ��:
			����ѧ���Ľṹ�����
			ͨ��ָ��ָ��ṹ�����
			ͨ��ָ����ʽṹ������е�����
	*/
	Student stu = { "�ν�" ,23 , 100 };
	Student* p = &stu;
	cout << p->name << endl;
	system("pause");
	return 0;
}