#include <iostream>
using namespace std; 
struct student
{
	string name;
	int age;
	int score;
};
//打印学生信息的函数
//1、值传递
void printStudent(student s) {
	s.name = "hejie";
	cout << "子函数中 姓名：" << s.name << endl;
}
//2、地址传递
void printStudent1(student* p) {
	p->name = "小阿捷";
	cout << "地址传递 姓名：" << p->name << endl;
}
int main5() {
	/*
		结构体做函数餐朱：
			作用：将结构体作为参数向函数中传递
			方式：值传递、地址传递
	*/
	student stu = { "何捷" ,23 , 100 };
	printStudent(stu);
	printStudent1(&stu);

	cout << "主函数 姓名：" << stu.name << endl;
	system("pause");
	return 0;
}