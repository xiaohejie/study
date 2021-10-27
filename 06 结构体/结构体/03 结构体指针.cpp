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
		结构体指针:
			创建学生的结构体变量
			通过指针指向结构体变量
			通过指针访问结构体变量中的数据
	*/
	Student stu = { "何捷" ,23 , 100 };
	Student* p = &stu;
	cout << p->name << endl;
	system("pause");
	return 0;
}