#include <iostream>
using namespace std;
struct Student
{
	string name;
	int age;
	int score; 
};
struct Teacher
{
	int id;
	string name;
	int age;
	struct Student stu;
};
int main4() {
	/*
		�ṹ��Ƕ�׽ṹ�壺
	*/
	Teacher t;
	t.id = 001;
	t.age = 50;
	t.stu.name = "hejie";



	system("pause");
	return 0;
}